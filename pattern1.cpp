#include <iostream> // Include the input/output stream library
#include <string>   // Include the string handling library
using namespace std; // Using standard namespace

int main() // Main function where the execution of the program starts
{
    int i, j, spc, rows, k; // Declare integer variables i, j, spc, rows, and k

    // Display message asking for input
    cout << "\n\n Display such a pattern like a pyramid using number with repetition :\n";
    cout << "-------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows; // Read input for the number of rows from the user

    spc = rows + 4 - 1; // Calculate the number of spaces for formatting

    // Loop to print the pyramid pattern using numbers with repetition
    for (i = 1; i <= rows; i++) // Loop for the number of rows
    {
        for (k = spc; k >= 1; k--) // Loop to print spaces before the numbers
        {
            cout << " "; // Print a space
        }

        for (j = 1; j <= i; j++) // Loop to print numbers in each row
        {
            cout << i << " "; // Print the value of 'i' (repeated numbers) followed by a space
        }

        cout << endl; // Move to the next line after each row is printed
        spc--; // Decrement the number of spaces for the next row
    }
}