# Dungeons and Dragons – Single Player RPG

## Overview
This project implements a single-player Dungeons and Dragons–style RPG, designed as a console-based game. The player explores rooms, interacts with objects, fights enemies, and progresses through a scenario controlled by a Dungeon Master logic.

The game is built to demonstrate Object-Oriented Programming (OOP) concepts and design principles.

## Core Features

### Character Creation
The player creates a character by selecting:
- **Race** (e.g. Human, Elf, Goblin)
- **Class** (e.g. Fighter, Sorcerer, Wizard)
- **Ability Scores** (Strength, Dexterity, Intellect, etc.)
- **Background** (e.g. Soldier, Acolyte, Thief)

Races and classes grant specific abilities and modifiers.

### Environment & Interaction
- The game world is composed of rooms.
- Each room contains interactive components such as:
  - Doors  
  - Portals  
  - Books  
  - Statues  
  - Enemies  

Each component exposes specific actions (e.g. `open`, `read`, `fight`).

### Dice System
- All actions are resolved using a **d20 dice roll system**.
- Each action has a **Difficulty Class (DC)** and an associated ability score.
- Final outcome = dice roll + modifiers (race, class, ability scores, background).

Ability score modifiers follow standard D&D-style rules (e.g. low scores penalize, high scores boost results).

### Combat System
- Combat is turn-based between the player and an enemy.
- Both use abilities until one reaches **0 HP**.
- Enemies choose abilities randomly from their available skill set.
- If the player loses, the game ends.

### Abilities
- Abilities are provided by the character’s race and class.
- Each ability has:
  - Damage value
  - Associated ability score
  - Difficulty Class

Examples:
- **Fireball** – INT-based  
- **Kick** – STR-based  

### Scenario Configuration
The game scenario is loaded from files defining:
- Interactive objects
- Enemies
- Rooms and their contents
- Room connections
- Starting location

At runtime, the player is shown available actions for the current room.

## Technical Requirements
The project must demonstrate:
- Proper use of OOP principles (Encapsulation, Inheritance, Polymorphism, Abstraction)
- Correct class relationships
- Use of abstract classes and interfaces
- Use of design patterns where appropriate
- Operator overloading where meaningful
- Templates and specialization when needed
- Modular code structure (classes, namespaces)
- Exception handling integrated with logging
- Use of STL containers and algorithms

## Goal
The objective is to build a clean, extensible RPG framework that simulates a Dungeon Master–driven D&D experience while showcasing solid object-oriented design.
