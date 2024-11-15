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
    const int maxStudents = 50;
    char studentNames[maxStudents][50]; // creates an array for student names
    // change char to string
    int studentGrades[maxStudents];// creates an array for student grades
    // change int to double
    int numberOfStudents;

    // Ask the user for the number of students
    cout << "Enter the number of students (max " << maxStudents << "): ";
    cin >> numberOfStudents;

    if (numberOfStudents > maxStudents) // if the user input exceeds the number of students
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
