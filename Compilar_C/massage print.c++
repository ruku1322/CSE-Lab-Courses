#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    // Declare a string to store the input
    string input;

    // Prompt the user for input
    cout << "Enter the string (format: Result=A-B): ";
    getline(cin, input);

    // Find the position of the equal sign and the minus sign
    size_t equalPos = input.find('=');
    size_t minusPos = input.find('-');

    if (equalPos != string::npos && minusPos != string::npos) {
        // Extract the values of A and B from the input string
        string A_str = input.substr(equalPos + 1, minusPos - equalPos - 1); // A value (before the '-')
        string B_str = input.substr(minusPos + 1); // B value (after the '-')

        // Convert the extracted strings to integers
        int A = stoi(A_str);
        int B = stoi(B_str);

        // Perform the subtraction
        int result = A - B;

        // Display the explanation and result
        cout << "EXP: Value of B is subtracted from the value of A and stored in Result." << endl;
        cout << "Result = " << result << endl;
    } else {
        cout << "Invalid input format. Please enter in the format 'Result=A-B'." << endl;
    }

    return 0;
}
