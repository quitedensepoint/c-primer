#include <iostream>

int func(int input) {
    return 0;
}

int main()
{
    // Syntax error
    //std::cout << "/*" */;

    // Type error
    std::string var = "hello";
    //func(var);

    // Declaration error
    //cout << "Failure!";
    return 0;
}