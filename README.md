# 3rd Person Shooter

## References:

- Quake
- Serious Sam
- Duke Nukem
- Unreal Turnament

## Requirements:

### Functional:

- 3D
- Lighting
- 1 map (NO water/lava)
- 1-2 NPC
- 1-2 Weapons
- Bullet mechanics
- Main character (hand?)
- Camera
- Free scope (controlled by mouse)
- Sound (**?**)

### Non functional:

- Blender (for 3D)
- C++
- OpenGL
- Visual Studio 2019 (Community Version)
- Windows
- GitHub

## Architecture:

- **Game** - Creating and storing Context
	- **Renderer** - Stores context of the game
	- **Entities Manager** - Manages entities
		- **Entity (Interface)** - Everything, that can be displayed on the screen
	- **Level** - Manages NPCs, Static Objects, Player, Lights
		- **NPC**
		- **Static Object**
		- **Light**
		- **Player**
			- **Gun**
		- **Bullet**
	- **Command**
	- **Camera**
	- **HUD**
		- **Health Bar**
		- **Ammo**
		- **Minimap**
		- **Scope**

## Dependencies:

- OpenGL
- GLUT
- GLEW