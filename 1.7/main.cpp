#include <iostream>

/* this is a /* nested */ comment
 * and it will be broken
 * in the program
 */

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1
              << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}