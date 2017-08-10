#include <iostream>

int main()
{
    int min = 50, sum = 0, current = 100, start = 100;
    while(current >= min) {
        sum += current;
        current--;
    }
    std::cout << "The inclusive sum from " << min << " to " << start << " is " << sum << std::endl;
    return 0;
}