#include <iostream>
#include "Sales_item.h"

int main()
{
    // Write a program that reads a set of book sales transactions, writing each transaction to the standard output.
    // Transaction format: 0-201-78345-X 2 25.00
    Sales_item transaction;
    while(std::cin >> transaction) {
        std::cout << transaction << std::endl;
    }
    return 0;
}