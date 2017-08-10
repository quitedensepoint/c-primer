#include <iostream>

int main()
{
    int input = 0;
    int sum = 0;
    while(std::cin >> input) {
        sum += input;
    }
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}