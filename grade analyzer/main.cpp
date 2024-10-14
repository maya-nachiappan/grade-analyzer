//
//  main.cpp
//  grade analyzer
//
//  Created by maya nachiappan 
//

#include <iostream>
#include <cstring>
#include "analyzeGrades.hpp"

using namespace std;

int main() {
    
    // initializing variables
    const int MAX_STUDENTS = 50;
    char studentNames[MAX_STUDENTS][50]; // creates an array for student names
    int studentGrades[MAX_STUDENTS];       // creates an array for student grades
    int numberOfStudents;

    // Ask the user for the number of students
    cout << "Enter the number of students (max " << MAX_STUDENTS << "): ";
    cin >> numberOfStudents;

    if (numberOfStudents > MAX_STUDENTS) // if the user input exceeds the number of students
    {
        cout << "Error: Exceeded maximum number of students." << endl;
        return 1;
    }

    // Get names and grades from the user
    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Enter name of student " << (i + 1) << ": ";
        cin >> studentNames[i]; // stores name of each student in each array index

        cout << "Enter grade of student " << studentNames[i] << ": ";
        cin >> studentGrades[i]; // stores name of each student in each array index
    }

    // Analyze the grades
    analyzeGrades(studentNames, studentGrades, numberOfStudents); // function that analyzes grades

    return 0;
}
