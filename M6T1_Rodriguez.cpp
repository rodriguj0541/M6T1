/*
CSC 134
M6T1 - Basic Arrays
Josue Rodriguez
11/10/25

Count cars Monday–Friday two ways:
Method 1: Loop only (no arrays)
Method 2: Loop + arrays + full table
*/

#include <iostream>
#include <string>
using namespace std;

// Function declarations
void part1();
void part2();

// main
int main() {
    part1();
    part2();

    return 0;
}

// ==============================
// Part 1 – no arrays
// ==============================
void part1() {
    cout << "\n--- Part 1: Loop Only (No Arrays) ---\n";
    cout << "Enter the number of cars passing each day.\n";
    cout << "(Day 0 = Monday, Day 4 = Friday)\n";

    const int SIZE = 5;
    int count = 0;
    int cars_today = 0;
    int cars_total = 0;
    double cars_avg = 0;

    while (count < SIZE) {
        cout << "Cars on Day " << count << ": ";
        cin >> cars_today;

        cars_total += cars_today;
        count++;     // move to next day
    }

    cout << "Total = " << cars_total << endl;
    cars_avg = (double) cars_total / SIZE;
    cout << "Average = " << cars_avg << endl;
}

// ==============================
// Part 2 – array version
// ==============================
void part2() {
    cout << "\n--- Part 2: Array Version ---\n";

    const int SIZE = 5;
    string days[SIZE] = {"M", "T", "W", "Th", "F"};
    int cars[SIZE];          // will be filled in by user
    int cars_total = 0;
    double cars_avg = 0.0;

    // Get input for each day
    for (int i = 0; i < SIZE; i++) {
        cout << "# cars on " << days[i] << ": ";
        cin >> cars[i];
    }

    // Print table header
    cout << "Day\tCars\n";

    // Loop to print days and count total
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
        cars_total += cars[i];
    }

    // Calculate average
    cars_avg = (double) cars_total / SIZE;

    cout << "Total = " << cars_total << endl;
    cout << "Average = " << cars_avg << endl;
}
