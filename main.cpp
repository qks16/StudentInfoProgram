#include <iostream>
#include <fstream>
#include <string>
#include <list>

#include "student.h"
#include "utils.cpp"

//TODO: Add function prototypes for addStudent, displayStudentInfo, updateStudentInfo, and saveStudentInfoToFile
//      reimplement fstream operations

using namespace std;

int choice = 0;

int main() {

    // Open a file for writing
    ofstream outFile("output.txt");
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    // Open the file for reading
    ifstream inFile("output.txt");
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    list<student> studentList;

    //test student struct
    student testStudent;
    testStudent.studentID = 1;
    testStudent.studentName = "John Doe";
    testStudent.studentAge = 20;
    testStudent.studentGPA = 3.5;
    testStudent.studentMajor = "Computer Science";
    testStudent.studentYear = 2;

    // Add the test student to the list
    studentList.push_back(testStudent);

    // Main program loop
    while (choice != 5)
    {
        //display the menu
        displayMenu();
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                //Add Student
                cout << endl;
                addStudent(studentList);
                cout << endl;
                break;
            case 2:
                // Display Student Information
                cout << endl;
                displayStudentInfo(studentList);
                cout << endl;
                break;
            case 3:
                // Update Student Information
                cout << endl;
                updateStudentInfo();
                cout << endl;
                break;
            case 4:
                // Save Student Information to File
                cout << endl;
                saveStudentInfoToFile();
                cout << endl;
                break;
            case 5:
                // Exit
                cout << "\nExiting the program." << endl;
                // Close the file
                outFile.close();
                // Close the file
                inFile.close();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

return 0;
}
    
