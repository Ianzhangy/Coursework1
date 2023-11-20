# Dark Island HERO RPG Game 

## Game Development Environment

- **Visual Studio Version:** [17.1.2]
- **Operating System:** [Windows 10 Home Chinese Version]

## Gameplay Overview

This RPG game is a text-based C++ console-based game, it allows players to create a character, choose a role, and embark on an adventure through different map levels. The game features turn-based combat against monsters, with the goal of defeating them and progressing through the levels.  Finally, defeat the 100th level boss and save the world.

## UML Design Diagram

Class diagram
https://github.com/Ianzhangy/Coursework1/blob/main/class%20diagram.png

Use Case diagram
https://github.com/Ianzhangy/Coursework1/blob/main/use%20case%20diagram.png

Ativity diagram
https://github.com/Ianzhangy/Coursework1/blob/main/activity%20diagram.png

## Game Exception Handling and Test Cases

- The code use do while to handle user input errors during character creation and map level selection.
- Test cases cover scenarios like character creation, combat outcomes, level progression, and potential edge cases.
- 1.**Initialization:**
a. Input letter for name, after can display. √
b. Input number for name, after can display. √
c. Input symbol for name, after can display. √
- 2.**Role Selection:**
a. Input 1 to choose a warrior, and verify if the warrior's attributes are correctly set in the attribute of the main menu. √
b. Input 2 to choose a mage, and verify if the mage's attributes are correctly set in the attribute of the main menu. √
c. Input 3 to choose a hunter, and verify if the hunter's attributes are correctly set in the attribute of the main menu. √
d. input 4, and display Enter error! Please enter again. √
e. input a, and display Enter error! Please enter again. √
f. input *, and display Enter error! Please enter again. √

## Game Further Details

- **Initialization:** Players initialize their character by entering a name and choosing a role (Warrior, Mage, or Hunter).
- **Map Levels:** Players can choose a map level, with a maximum level of 100. The higher the level, the more challenging the monsters.
- **Combat System:** The combat system is turn-based, allowing players to choose between attack and defense. Monsters also respond randomly.
- **Result and Level Up:** After combat, the game displays the result. If the player wins, experience points are gained, potentially leading to a level up.

## Video Link

https://www.youtube.com/watch?v=aHuFO0mz7os

## Game Git Repository

https://github.com/Ianzhangy/Coursework1
