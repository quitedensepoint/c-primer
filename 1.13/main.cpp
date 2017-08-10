#include <iostream>

int main()
{
    // Revising exercise 1.9 to use a for loop
    int sum = 0;
    for(int i = 50; i<= 100; i++) {
        sum += i;
    }
    std::cout << "The sum from 50 to 100 is: " << sum << std::endl;

    // Revising exercise 1.10 to use a for loop
    std::cout << "Counting down from 10 to 0: " << std::endl;
    for(int i = 10; i >= 0; --i) {
        std::cout << i << std::endl;
    }
    return 0;
}