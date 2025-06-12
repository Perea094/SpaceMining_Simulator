# 🚀 AstroMiner++ – Space Mining Profitability Simulator
**Author**: Perea094  
**Date**: May 2025

---
## Goal
This project aims to create a simulator that evaluates the profitability of space mining missions on various celestial bodies.
The program will simulate step-by-step resource extraction, consider economic factors, and apply polymorphism to model different asteroid types. 
The simulation assumes constant gravity and uses predefined resource prices and mission parameters.


---
## Context
Humanity has always gazed at the sky, captivated by the stars and celestial bodies that adorn our night sky. Over the past century, we have achieved remarkable technological advancements, paving the way for unprecedented discoveries in space exploration. As we look to the future, we can anticipate groundbreaking innovations that will deepen our understanding of the universe.

This space mining simulator serves as a vital tool, bridging the present with the future by preparing us for the next frontier of cosmic exploration and resource utilization.

---
## Features

- **Object-Oriented Design**

- **Resource Extraction Logic**

- **Economic Model**


- **Risk Assessment**

---
## Class Diagram  
![MiningSimulatorClassDiagram drawio](https://github.com/user-attachments/assets/c0944684-562c-4649-912b-af169ad01b4b)





This is the UML diagram I designed for the project. It includes the following key elements:  

- **`Mission` Class**:  
  - Has a **composition** relationship with the `SpaceShip` class.  
  - Has an **aggregation** relationship with the `SpaceBody` class.  

- **`SpaceBody` Class (Abstract)**:  
  - Serves as the superclass for `Asteroid`, `Planet`, and `Moon` (inheritance).  
  - Has an **aggregation** relationship with the `Resource` class.  

### Relationships Summary:  
- **Composition**: `Mission` **uses** a `SpaceShip` .  
- **Aggregation**:  
  - `Mission` **targets** a `SpaceBody` .  
  - `SpaceBody` **contains** `Resource` .  
- **Inheritance**: `Asteroid`, `Planet`, and `Moon` are specialized subclasses of `SpaceBody`.  

---
## Future enhancements
- 1
- 2
- 3

---
## Setup and Requirements  

### Prerequisites  
- A C++ compiler (e.g., GCC or MSVC).  
- Basic knowledge of C++ and object-oriented programming.  
### Steps to Run  
1. Clone the repository or download it
2. Run the following line in the terminal: `g++ src/*.cpp main.cpp -o SpaceMining_Simulator`
3. Execute in the terminal: `.\SpaceMining_Simulator`
