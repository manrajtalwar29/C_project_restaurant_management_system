SAPID:590023781
---
* Project Summary: Restaurant Order Management System (C Language)

The Restaurant Order Management System is a menu-driven C program designed to help restaurants efficiently record, manage, and process customer orders. It allows users to add new orders, view all existing orders, generate detailed bills for specific tables, and delete orders once completed. The system stores all order information—such as table number, item name, quantity, and price—in a structured format using arrays and user-defined structures.
--------------------------------------------------------------------------------------------
* FEATURES

1. Add new orders with table number, item name, quantity, and price

2. Display all active orders

3. Generate a detailed bill for any specific table

4. Delete all orders for a particular table

5. Organized multi-file structure using header and source files
---------------------------------------------------------------------------------------------
* COMPILATION AND EXECUTION

Step 1: Save the Files

Your project should have these three files:

main.c
order.c
order.h


Make sure all files are in the same folder.

 Step 2: Compile the Program

Open a terminal (VS Code Terminal / CMD / PowerShell) inside the project folder and run:

For Windows (MinGW / GCC):
gcc main.c order.c -o restaurant.exe

For Linux / macOS:
gcc main.c order.c -o restaurant


If there are no errors, this will create an executable file named:

restaurant.exe on Windows

restaurant on Linux/Mac

 Step 3: Run the Program
Windows:

./restaurant

 The program will display the menu:
--- Restaurant Order Management ---
1. Add Order
2. Show Orders
3. Generate Bill
4. Delete Orders
5. Exit
---------------------------------------------------------------------------------------------

* Directory Structure

The complete project is organized as follows:

Restaurant-Order-Management/
│
├── main.c        # Contains main function and menu interface
├── order.c       # Function definitions for order operations
├── order.h       # Header file with structure and function declarations
│
└── README.md     # Project documentation
---------------------------------------------------------------------------------------------

* CONCEPTS DEMONSTRATED

This project demonstrates several fundamental and intermediate concepts of C programming. These concepts help build a strong understanding of structured programming and are widely used in real-world applications.

 1. Structures (struct)

Used to group related data (table number, item name, quantity, price) into a single unit.
This makes the program more organized and easier to manage.

 2. Arrays of Structures

An array of 100 Order structures is used to store multiple orders.
This demonstrates how to manage larger datasets in memory.

 3. Header Files (.h) and Modular Programming

The project is divided into:

order.h — structure + declarations

order.c — function definitions

main.c — main menu logic

This teaches clean code organization and modular software design.

 4. Functions and Code Reusability

Functions like:

addOrder()

displayOrders()

generateBill()

deleteOrders()

Each handle specific tasks, demonstrating functional programming and code reuse.

 5. Input Handling

scanf() and string input ( %[^\n]) are used to take user entries safely and effectively.

 6. Conditional Logic & Loops

if, else, switch used for decision-making

while and for loops for scanning and manipulating order lists

 7. Menu-Driven Programming

A loop-based interactive menu allows users to select features repeatedly until exit.

 8. Memory Management (Static Array)

Shows handling of fixed-size memory (array of 100 structures).
Also includes logic for shifting elements when deleting orders.

 9. Basic Algorithmic Thinking

Implementing features like:

Searching (for a table’s order)

Summation (bill calculation)

Deletion (shifting array elements)
---------------------------------------------------------------------------------------

