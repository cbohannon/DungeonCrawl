# DungeonCrawl

A first-person dungeon exploration game built with **Unreal Engine 4.24**.

## Engine

Requires Unreal Engine **4.24** (tested on 4.24.3). Open `DungeonCrawl/DungeonCrawl.uproject` in the UE4 Editor to build and run.

## Gameplay Mechanics

- **Object Grabbing** — The player can grab and move physics objects using a 150 cm reach. Bound to the "Grab" input action (configured in Project Settings → Input).
- **Pressure Plate Doors** — Pairs of doors (left and right swing) open when enough mass is placed on a linked trigger volume. Door speed, open angle, close delay, and mass threshold are all configurable per instance in the editor.

## Project Structure

All gameplay logic is implemented as C++ `UActorComponent` subclasses found in `DungeonCrawl/Source/DungeonCrawl/`. No content assets are tracked in this repository — only source code.
