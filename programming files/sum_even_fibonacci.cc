#include <iostream>
// program to add together every fibonacci number less than 400000
int main()
{
    int a = 0, b = 2;
    int sum_even = 0;
    while (b < 500) {
        //if b is even add it to total sum 
        if (b % 2 == 0) {
            sum_even += b;
        }
        //add the current integer to the previous integer
        int temp = b;
        b = a + b;
        a = temp;
    }
    std::cout << sum_even << std::endl;

    return 0;
}

// answer should be 4613732
