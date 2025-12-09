# Calendar Generator in C

## 📌 Project Title
Calendar Generator for Any Given Year (C Program)

## 🎯 Objective
The objective of this project is to generate and display a full 12-month calendar for any user-entered year in a neatly formatted structure.  
The program correctly handles leap years and calculates the starting weekday of each month.

## 📝 Description
This C program:
- Checks whether the given year is a leap year.
- Calculates the first day of the year using standard formulas.
- Displays the entire calendar month by month.
- Correctly formats week rows with proper alignment.
- Adjusts February to 29 days in leap years.

## 🛠️ How to Compile and Run

### **Compile**
gcc calendar.c -o pr

###*Run*
./pr

You will be prompted to enter a year, and the program will display its full calendar.

## 🖼️ Sample Output
Enter a year: 2016

to see output view the screenshots attached in the repository

## 📂 Files Included
- `calendar.c` → Source code
- `calendar pic 1.png` → Output screenshot
- `calendar pic 2.png` → Additional output screenshot

## 📌 Notes / Assumptions
- The program assumes the user will input a valid year.
- The algorithm for the first day of the year is based on Gregorian calendar rules.
- Leap year calculation follows the standard rule:
  - Divisible by 400 → Leap year  
  - Divisible by 4 but not by 100 → Leap year  

## ✔️ Features Implemented
- Leap year detection  
- Accurate weekday calculation  
- Clean calendar formatting  
- Works for any year in Gregorian calendar
