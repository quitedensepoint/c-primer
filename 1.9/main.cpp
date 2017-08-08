#include <iostream>

int main()
{
    int max = 100, sum = 0, current = 50, start = 50;
    while(current <= max) {
        sum += current;
        current++;
    }
    std::cout << "The inclusive sum from " << start << " to " << " is " << sum << std::endl;
    return 0;
}