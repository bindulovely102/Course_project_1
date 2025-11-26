Title: Vehicle Rental Management


## Abstract
The application begins by taking the number of vehicles (1–100), then records each vehicle’s ID and rent per day, marking all as available initially. It presents a looped menu with options to rent a vehicle (marking it unavailable), return a vehicle (marking it available), display all vehicles with their status, or exit. Input validation is included for the vehicle count and for menu choices, with messages for cases like “vehicle not found” or “already rented.” The program demonstrates essential C I/O and control flow constructs useful for beginner-level data-structure practice.[3][2]

## projectfeatures
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


<img width="287" height="46" alt="Screenshot 2025-11-26 154857" src="https://github.com/user-attachments/assets/e5c445de-ac08-4f73-b80d-12b52594e3e2" />
<img width="440" height="132" alt="Screenshot 2025-11-26 154845" src="https://github.com/user-attachments/assets/65fde5ce-14d8-42dc-9756-97e556adc8b7" />
<img width="352" height="241" alt="Screenshot 2025-11-26 154835" src="https://github.com/user-attachments/assets/1be8a2ed-9129-4261-9b76-0364ee30f7d5" />
<img width="307" height="205" alt="Screenshot 2025-11-26 154811" src="https://github.com/user-attachments/assets/a5bc04f6-30a3-4490-96c1-4b199ea19cc7" />
<img width="288" height="332" alt="Screenshot 2025-11-26 154739" src="https://github.com/user-attachments/assets/15e7402c-a4b1-4465-8520-b1f8a13afa32" />

