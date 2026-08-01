#include <iostream>
//#include <fstream>
#include <string>
#include <list>

#include "student.h"
#include "utils.cpp"

//TODO: Add function prototypes for addStudent, displayStudentInfo, updateStudentInfo, and saveStudentInfoToFile
//      reimplement fstream operations

using namespace std;

int choice = 0;

// int argc, char* argv[]
int main() {

    // if(argc < 1) {
    //     cerr << "Usage: " << argv[0] << " <input_file>" << endl;
    //     return 1;
    // }

    // // Open a file for writing
    // ofstream outFile("output.txt");
    // if (!outFile) {
    //     cerr << "Error opening file for writing." << endl;
    //     return 1;
    // }

    // // Open the file for reading
    // ifstream inFile("output.txt");
    // if (!inFile) {
    //     cerr << "Error opening file for reading." << endl;
    //     return 1;
    // }

    while (choice != 5)
    {
        //display the menu
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                //Add Student
                addStudent();
                break;
            case 2:
                // Display Student Information
                displayStudentInfo();
                break;
            case 3:
                // Update Student Information
                updateStudentInfo();
                break;
            case 4:
                // Save Student Information to File
                saveStudentInfoToFile();
                break;
            case 5:
                // Exit
                cout << "Exiting the program." << endl;
                // // Close the file
                // outFile.close();
                // // Close the file
                // inFile.close();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

return 0;
}
    
