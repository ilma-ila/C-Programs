#include <iostream> // Include the input/output stream library
#include <string>   // Include the string handling library
using namespace std; // Using standard namespace

int main() // Main function where the execution of the program starts
{
    int i, j, rows, k = 1; // Declare integer variables i, j, rows, and k with k initialized to 1

    // Display message asking for input
    cout << "\n\n Display such a pattern like right angle triangle with number increased by 1:\n";
    cout << "---------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows; // Read input for the number of rows from the user

    // Loop to print the pattern with numbers increased by 1 in a right-angle triangle shape
    for (i = 1; i <= rows; i++) // Loop for the number of rows
    {
        for (j = 1; j <= i; j++) // Nested loop for printing numbers in each row
        {
            cout << k++ << " "; // Print the value of 'k' (increased by 1) and increment 'k' afterwards
        }
        cout << endl; // Move to the next line after each row is printed
    }
}