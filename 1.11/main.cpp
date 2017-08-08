#include <iostream>

int main()
{
    int larger = 0, smaller = 0;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> larger >> smaller;

    if(larger < smaller) {
        int tmp = smaller;
        smaller = larger;
        larger = tmp;
    }

    int current = smaller;

    while(current <= larger) {
        std::cout << current << std::endl;
        current++;
    }
    std::cout << "Done." << std::endl;
    return 0;
}