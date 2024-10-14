//
//  analyzeGrades.cpp
//  grade analyzer
//
//
#include "analyzeGrades.hpp"
#include <iostream>
#include <cstring>

using namespace std;

void analyzeGrades(const char names[][50], const int grades[], int numberOfStudents) {
    if (numberOfStudents == 0) // if there are no students
    {
        cout << "No grades to analyze." << endl;
        return;
    }

// initializes variables
    int totalGrades = 0;
    int highest = grades[0];
    int lowest = grades[0];
    char aboveAverageStudents[50][50]; // Array to store names of students above average
    int aboveAverageCount = 0;

    // Calculate total, highest, and lowest grades
    for (int i = 0; i < numberOfStudents; ++i) {
        totalGrades += grades[i];
        if (grades[i] > highest) {
            highest = grades[i]; // continues to check for highest grade
        }
        if (grades[i] < lowest) {
            lowest = grades[i]; // continues to check for lowest grade
        }
    }

    // Calculate average grade
    int average = totalGrades / numberOfStudents; // Calculate average as an integer

    // Identify students who scored above average
    for (int i = 0; i < numberOfStudents; ++i) {
        if (grades[i] > average) {
            strcpy(aboveAverageStudents[aboveAverageCount], names[i]);
            aboveAverageCount++;
        }
    }

    // prints the results the results
    cout << "Average grade: " << average << endl;
    cout << "Highest grade: " << highest << endl;
    cout << "Lowest grade: " << lowest << endl;

    cout << "Students above average: ";
    if (aboveAverageCount == 0) // if no students are above average
    {
        cout << "None" << endl;
    } else {
        for (int i = 0; i < aboveAverageCount; ++i) { // prints the name of the above average students
            cout << aboveAverageStudents[i] << " ";
        }
        cout << endl;
    }
}
