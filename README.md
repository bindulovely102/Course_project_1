# Course_project_1
course project
Title: Console-Based Vehicle Rental Manager

This C program implements a simple, menu-driven vehicle rental manager that lets a user add vehicles, rent and return them, and view their current status in a console interface. It uses arrays to store vehicle IDs, daily rents, and availability flags, and provides basic input/output via printf and scanf.[2][3]

## Abstract
The application begins by taking the number of vehicles (1–100), then records each vehicle’s ID and rent per day, marking all as available initially. It presents a looped menu with options to rent a vehicle (marking it unavailable), return a vehicle (marking it available), display all vehicles with their status, or exit. Input validation is included for the vehicle count and for menu choices, with messages for cases like “vehicle not found” or “already rented.” The program demonstrates essential C I/O and control flow constructs useful for beginner-level data-structure practice.[3][2]

## Key features
- Fixed-size storage: Arrays for up to 100 vehicle IDs, rent-per-day, and availability status.[3]
- Menu-driven loop: Continuous operations for rent, return, list, and exit using while and if/else.[3]
- Availability tracking: Status flag 1 = Available, 0 = Rented, updated on rent/return actions.[3]
- Input validation: Rejects n <= 0 or n > 100; checks unknown IDs and improper rent/return states.[3]
- Clear I/O prompts: Uses printf for prompts and scanf for reading integers reliably.[2][3]

## How it works
- Initialization: Reads n, then collects vehicleID[i] and rentPerDay[i]; sets status[i] = 1 for all i.[3]
- Renting: Searches for the supplied ID; if available, sets status to 0; otherwise prints appropriate message.[3]
- Returning: Searches for the supplied ID; if rented, sets status to 1; otherwise prints appropriate message.[3]
- Displaying: Prints ID, Rent, and Status (“Available” or “Rented”) for all vehicles.[3]

## Sample output screenshots (console mockups)
Note: These are textual mockups of what you will see in the terminal when running the program.

- Startup and vehicle entry:
  Enter number of vehicles: 3  
  Enter Vehicle ID: 101  
  Enter Rent Per Day: 800  
  Enter Vehicle ID: 102  
  Enter Rent Per Day: 950  
  Enter Vehicle ID: 103  
  Enter Rent Per Day: 1100[3]

- Menu and rent flow:
  ---- Vehicle Rental Menu ----  
  1. Rent Vehicle  
  2. Return Vehicle  
  3. Display All Vehicles  
  4. Exit  
  Enter choice: 3

  --- Vehicle List ---  
  ID: 101 | Rent: 800 | Status: Available  
  ID: 102 | Rent: 950 | Status: Available  
  ID: 103 | Rent: 1100 | Status: Available

  Enter choice: 1  
  Enter Vehicle ID to rent: 102  
  Vehicle 102 rented.[3]

- Display after renting:
  Enter choice: 3

  --- Vehicle List ---  
  ID: 101 | Rent: 800 | Status: Available  
  ID: 102 | Rent: 950 | Status: Rented  
  ID: 103 | Rent: 1100 | Status: Available [3]

- Return flow and exit:
  Enter choice: 2  
  Enter Vehicle ID to return: 102  
  Vehicle 102 returned.

  Enter choice: 4  
  Exiting...[3]

Tips for smooth I/O: Ensure correct format specifiers with scanf/printf (e.g., "%d" for int) and always pass addresses to scanf for non-array scalars (e.g., &n). This avoids common input issues in console C programs.[2][3]

[1](https://stackoverflow.com/questions/65035418/problem-using-printf-and-scanf-in-a-hackerrank-practice-problem)
[2](https://www.geeksforgeeks.org/c/scanf-in-c/)
[3](https://www.programiz.com/c-programming/c-input-output)
[4](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/c1_Basics.html)
[5](https://wjiang.nd.edu/categories/teaching/CSE20221_C_Tutorial.pdf)
[6](https://itsourcecode.com/free-projects/c-projects/car-rental-system-in-c-with-source-code/)
[7](https://www.scribd.com/document/274076005/C-Questions-and-Answer-libre)
[8](https://github.com/mohit-thakur09/car-rental-system)
[9](http://referenceglobe.com/kpsslp/support/upload_videos/programming%20for%20problem%20solving_1585207125.pdf)
[10](https://www.w3resource.com/c-programming-exercises/structure/c-structure-exercises-9.php)
