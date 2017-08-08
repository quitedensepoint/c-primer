#include <iostream>

int main()
{
    int from = 10, to = 0, current = 10;
    std::cout << "Counting down from " << from << " to " << to << std::endl;
    while(current >= to) {
        std::cout << current << std::endl;
        current--;
    }
    std::cout << "Done." << std::endl;
    return 0;
}