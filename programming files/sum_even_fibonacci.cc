#include <iostream>

int main()  // File is supposed to get the sum of all (within a limit) even fibonacci numbers
{
    int a = 0, b = 1; // Define original constants
    int sum_even = 0; 
    while (b < 4000000) {  // Sets limit so program doesn't to overboard, arbitrary point
        if (b % 2 == 0) {  // Checks if b is even by using the property that if even, b must be divisible by 2
            sum_even += b;  // Adds b to the sum as it is even
        }
        int temp = b;  // Saves b to be defined later
        b = a + b;  // b now becomes the next fibonacci number
        a = temp;  // the number previously in b now is saved in a
    }
    std::cout << sum_even << std::endl;  // Prints out the result

    return 0;
}

// answer should be 4613732
