/*

    This program will read integers between 1 to 100 and count the occurrences of each.


1. Create an array that that stores the occurrences of integers between 1 to 100 (initialize to 0).
2. Ask the user to enter an integer between 1 to 100.
3. while (Check if the user's integer is not equal to 0)  {
        for (Process each array element)  {
            Update the occurrence for the user's integer (index is 1 number behind each integer).
        }
        Ask the user to enter an integer between 1 to 100.
    }
4. for (Process each array element)  {
        Display the occurrences of each number if they occurred at least once.
    }

*/


// This program will read integers between 1 to 100 and count the occurrences of each.

#include <iostream>

using namespace std;

int main()
{
        // Declare constants.
    const int NUM_ELEMENTS = 100;   // To hold the number of integers from 1 to 100.

        // Declare variables.
    int integerArr[NUM_ELEMENTS] = {0};  // Array that stores the occurrences of integers between 1 to 100.

    int count = 0;  // Array subscript / Counter variable.
    int integer;  // To hold the user's integer entry.

        // Ask the user to enter an integer between 1 to 100.
    cout << "Enter the integers between 1 and 100: ";
    cin >> integer;

        // Check if the user's integer is greater than 0.
    while (integer > 0)
    {
            // Update the occurrence for the user's integer (index is 1 number behind each integer).
        integerArr[integer - 1]++;

            // Ask the user to enter an integer between 1 to 100.
        cin >> integer;
    }

        // Process each array element.
    for (count = 0; count < NUM_ELEMENTS; count++)
    {
        // Display the occurrences of each number if they occurred at least once.

            // Display "times" if the integer occurred at least 2 times.
        if (integerArr[count] > 1)
            cout << (count + 1) << " occurs " << integerArr[count] << " times" << endl;

            // Display "time" if the integer occurred once.
        else if (integerArr[count] > 0)
            cout << (count + 1) << " occurs " << integerArr[count] << " time" << endl;
    }

    return 0;
}

/*

    RUN 1:

Enter the integers between 1 and 100: 2 3 4 5 7 2 6 3 5 4 8 1 2 4 5 6 98 97 99 56 98 0
1 occurs 1 time
2 occurs 3 times
3 occurs 2 times
4 occurs 3 times
5 occurs 3 times
6 occurs 2 times
7 occurs 1 time
8 occurs 1 time
56 occurs 1 time
97 occurs 1 time
98 occurs 2 times
99 occurs 1 time

    -----------------------------------------------------------------------------------------

    RUN 2:

Enter the integers between 1 and 100: 1000 980 7657 0

    -----------------------------------------------------------------------------------------

    RUN 3:

Enter the integers between 1 and 100: 23 45 67 87 98 54 54 45 23 9 9 1 89 1 0
1 occurs 2 times
9 occurs 2 times
23 occurs 2 times
45 occurs 2 times
54 occurs 2 times
67 occurs 1 time
87 occurs 1 time
89 occurs 1 time
98 occurs 1 time

    -----------------------------------------------------------------------------------------

    RUN 4:

Enter the integers between 1 and 100: 23 45 45 67 8 8 2 2 1 9 45 89 90 5 67 5 3 67 01 23 0
1 occurs 2 times
2 occurs 2 times
3 occurs 1 time
5 occurs 2 times
8 occurs 2 times
9 occurs 1 time
23 occurs 2 times
45 occurs 3 times
67 occurs 3 times
89 occurs 1 time
90 occurs 1 time

    ---------------------------------------------------------------------------------------

    RUN 5:

Enter the integers between 1 and 100: -1 0

*/
