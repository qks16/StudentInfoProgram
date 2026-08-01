#include "utils.h"
#include "student.h"


#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

void displayMenu() {
    cout << "Student Information Program Menu:" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display Student Information" << endl;
    cout << "3. Update Student Information" << endl;
    cout << "4. Save Student Information to File" << endl;
    cout << "5. Exit" << endl;
}

void addStudent(list<student>& studentList) {

    student newStudent;

    cout << "Enter Student ID: ";
    cin >> newStudent.studentID;
    cout << "Enter Student Name: ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    getline(cin, newStudent.studentName);
    cout << "Enter Student Age: ";
    cin >> newStudent.studentAge;
    cout << "Enter Student GPA: ";
    cin >> newStudent.studentGPA;
    cout << "Enter Student Major: ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    getline(cin, newStudent.studentMajor);
    cout << "Enter Student Year: ";
    cin >> newStudent.studentYear;

    // Add the new student to the list
    studentList.push_back(newStudent);

}

void displayStudentInfo(list<student>& studentList) {
    
    if (studentList.empty()) {
        cout << "No student information available." << endl;
        return;
    }

    bool found = false;
    int id;

    cout << "Enter student ID: ";
    cin >> id;

    // use find_if() algorithm to search for the student with the given ID and display their information
    auto it = find_if(studentList.begin(), studentList.end(), [id](const student& s) {
        return s.studentID == id;
    });
    
    if (it != studentList.end()) {
        const student& s = *it;
        cout << "Student Information:" << endl;
        cout << "Student ID: " << s.studentID << endl;
        cout << "Student Name: " << s.studentName << endl;
        cout << "Student Age: " << s.studentAge << endl;
        cout << "Student GPA: " << s.studentGPA << endl;
        cout << "Student Major: " << s.studentMajor << endl;
        cout << "Student Year: " << s.studentYear << endl;
    } else {
        cout << "Student with ID " << id << " not found." << endl;
    }
}

void updateStudentInfo() {
    cout << "updateStudentInfo function not implemented yet." << endl;
}

void saveStudentInfoToFile() {
    cout << "saveStudentInfoToFile function not implemented yet." << endl;
}