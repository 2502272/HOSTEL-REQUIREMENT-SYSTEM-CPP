# Hostel Management System (Console App) 🏨

A C++ console application designed to automate the hostel room allocation process. This system replaces manual record-keeping with an efficient digital solution for calculating fees, managing room types, and generating booking receipts.

## 🚀 Features
* **Smart Allocation:** Separate logic and databases for Boys' and Girls' hostels.
* **Dynamic Pricing Engine:** Calculates total cost based on:
    * Room Capacity (1, 2, 3, or 4 Seater).
    * Amenities (Attached Washroom, Mess Facilities).
    * Location Factors ("Luxury Charge" logic for prime locations).
* **Crash-Resistant Input:** Uses string validation to prevent runtime errors (e.g., entering letters instead of numbers).
* **Instant Receipt Generation:** Displays a detailed breakdown of monthly fares on a final invoice.

## 🛠️ Tech Stack
* **Language:** C++
* **Concepts:** Structures (`struct`), Arrays, Pointers, loops, and Input Validation.

## ⚙️ How to Run
1.  Copy the code from `main.cpp`.
2.  Compile using any standard C++ compiler (g++, DevC++, Visual Studio, CodeBlocks).
3.  Run the executable to start the booking wizard.
