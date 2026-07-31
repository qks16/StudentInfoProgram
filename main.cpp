#include <iostream>
#include <fstream>
#include <string>
#include <list>

#include "student.h"
#include "utils.h"


using namespace std;

int main(int argc, char* argv[]) {

    if(argc < 1) {
        cerr << "Usage: " << argv[0] << " <input_file>" << endl;
        return 1;
    }

    // Open a file for writing
    ofstream outFile(argv[1]);
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    // Open the file for reading
    ifstream inFile(argv[1]);
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    int choice;

    //display the menu
    displayMenu();
    cin >> choice;

    switch (choice) {
        case 1:
            // Add Student
            addStudent(outFile);
            break;
        case 3:
            // Display Student Information
            displayStudentInfo(inFile);
            break;
        case 4:
            // Update Student Information
            updateStudentInfo(inFile, outFile);
            break;
        case 5:
            // Save Student Information to File
            saveStudentInfoToFile(inFile, outFile);
            break;
        case 6:
            // Exit
            cout << "Exiting the program." << endl;
            // Close the file
            outFile.close();
            // Close the file
            inFile.close();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    return 0;
}