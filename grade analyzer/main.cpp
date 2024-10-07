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
    const int MAX_STUDENTS = 50;
    char studentNames[MAX_STUDENTS][50]; // Array for student names
    int studentGrades[MAX_STUDENTS];       // Array for student grades
    int numberOfStudents;

    // Ask the user for the number of students
    cout << "Enter the number of students (max " << MAX_STUDENTS << "): ";
    cin >> numberOfStudents;

    if (numberOfStudents > MAX_STUDENTS) {
        cout << "Error: Exceeded maximum number of students." << endl;
        return 1;
    }

    // Get names and grades from the user
    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Enter name of student " << (i + 1) << ": ";
        cin >> studentNames[i];

        cout << "Enter grade of student " << studentNames[i] << ": ";
        cin >> studentGrades[i];
    }

    // Analyze the grades
    analyzeGrades(studentNames, studentGrades, numberOfStudents);

    return 0;
}
