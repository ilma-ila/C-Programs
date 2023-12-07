#include <iostream>

using namespace std;


int main() // Main function where the execution of the program starts
{
    int i, j, n; // Declare integer variables i, j, and n

    // Display message asking for input
    cout << "\n\n Display such a pattern like a pyramid containing odd number of asterisk in each row:\n";
    cout << "-----------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n; // Read input for the number of rows from the user

    // Loop to print the pyramid pattern containing odd numbers of asterisks in each row
    for (i = 0; i < n; i++) // Loop for the number of rows
    {
        for (j = 1; j <= n - i; j++) // Loop to print spaces before the asterisks
        {
            cout << " "; // Print a space
        }

        for (j = 1; j <= 2 * i - 1; j++) // Loop to print asterisks in each row
        {
            cout << "*"; // Print an asterisk
        }

        cout << endl; // Move to the next line after each row is printed
    }



    return 0; 


}