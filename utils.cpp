#include <iostream>
#include <string>

#include "utils.h"

#include "student.h"

using namespace std;

void displayMenu() {
    cout << "Student Information Program Menu:" << endl;
    cout << "1. Add Student" << endl;
    cout << "3. Display Student Information" << endl;
    cout << "4. Update Student Information" << endl;
    cout << "5. Save Student Information to File" << endl;
    cout << "6. Exit" << endl;
}

void addStudent(std::ofstream& outFile) {
    cout << "addStudent function not implemented yet." << endl;
}

void displayStudentInfo(std::ifstream& inFile) {
    // void displayStudentInfo(const Student& student) {
    // cout << "Student ID: " << student.id << endl;
    // cout << "Name: " << student.name << endl;
    // cout << "Age: " << student.age << endl;
    // cout << "GPA: " << student.gpa << endl;
    // }
    
    cout << "displayStudentInfo function not implemented yet." << endl;
}

void updateStudentInfo(std::ifstream& inFile, std::ofstream& outFile) {
    cout << "updateStudentInfo function not implemented yet." << endl;
}

void saveStudentInfoToFile(std::ifstream& inFile, std::ofstream& outFile) {
    cout << "saveStudentInfoToFile function not implemented yet." << endl;
}