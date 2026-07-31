#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open a file for writing
    ofstream outFile("output.txt");
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    // Write some text to the file
    outFile << "Hello, World!" << endl;
    outFile << "This is a test file." << endl;

    // Close the file
    outFile.close();

    // Open the file for reading
    ifstream inFile("output.txt");
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    // Read and display the contents of the file
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close the file
    inFile.close();

    return 0;
}