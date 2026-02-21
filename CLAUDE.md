# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

Unreal Engine 4.24 first-person dungeon exploration game. C++ source lives in `DungeonCrawl/Source/DungeonCrawl/`. Content (maps, assets, blueprints) is under `DungeonCrawl/Content/`.

## Building

There is no standalone build script. Build through one of:

- **UE4 Editor**: Open `DungeonCrawl/DungeonCrawl.uproject` in Unreal Engine 4.24
- **Command line (UBT)**: Use `UnrealBuildTool` targeting `DungeonCrawlEditor` or `DungeonCrawl` (game) target — both defined in `DungeonCrawl/Source/*.Target.cs`

The module dependencies are declared in `DungeonCrawl/Source/DungeonCrawl/DungeonCrawl.Build.cs`: Core, CoreUObject, Engine, InputCore.

There are no automated tests in this project.

## Architecture

All gameplay logic is implemented as **UActorComponent** subclasses that are added to actors in the editor. There are no custom Actors or Pawns in C++ — the player character and door actors are configured in the editor with these components attached.

### Components

| Class | File | Role |
|---|---|---|
| `UGrabber` | `Grabber.h/.cpp` | Player physics grab — line traces forward 150 cm, grabs/releases physics bodies via `UPhysicsHandleComponent`. Binds the "Grab" input action. |
| `UOpenLeftDoorStart` | `OpenLeftDoorStart.h/.cpp` | Swings a door left (+90° yaw) when a linked `ATriggerVolume` pressure plate accumulates enough mass. |
| `UOpenRightDoorStart` | `OpenRightDoorStart.h/.cpp` | Same as above but swings right (−90° yaw). |
| `UWorldPosition` | `WorldPosition.h/.cpp` | Minimal utility component (logs world position). |
| `ADungeonCrawlGameModeBase` | `DungeonCrawlGameModeBase.h/.cpp` | Empty game mode base. |

### Door mechanic pattern

Both door components share the same logic:
1. `BeginPlay` captures `InitialYaw` and adds the configured `OpenAngle` to it so the target is relative to the door's placed rotation.
2. Each tick, `TotalMassOfActors()` sums the `UPrimitiveComponent` mass of every actor overlapping the assigned `PressurePlate` (`ATriggerVolume`).
3. If mass exceeds `MassToOpenDoor`, call `OpenDoor(DeltaTime)` — uses `FMath::Lerp` on `CurrentYaw`.
4. Otherwise, wait for `DoorCloseDelay` seconds then call `CloseDoor(DeltaTime)`.

All door tuning properties (`MassToOpenDoor`, `OpenAngle`, `DoorCloseDelay`, `DoorOpenSpeed`, `DoorCloseSpeed`) are `UPROPERTY(EditAnywhere)` and configured per-instance in the editor.

### Grabber mechanic pattern

`PrepPlayerViewpoint()` returns `std::tuple<FVector, FVector>` — (camera location, reach endpoint). This is called multiple times per tick; consider caching if performance becomes a concern. The "Grab" input action must be configured in Project Settings → Input.

### Code conventions

- `#define OUT` is used as a cosmetic annotation on output parameters (e.g., `GetOverlappingActors(OUT OverLappingActors)`).
- Components validate required dependencies in `BeginPlay` and log errors via `UE_LOG(LogTemp, Error, ...)` when missing (e.g., no `PhysicsHandleComponent`, no `PressurePlate` set).
- Member variables are initialized inline in the header (`float Reach{ 150.0f }`).
