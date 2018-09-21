#include <iostream>

int main() {
    short int a = 1576;
    short int b = 1556;

    if ((a-b) >= -128) {
        if ((a-b)<= 127)
            std::cout << char(a-b) << std::endl;
        else
            std::cout << a-b << std::endl;
    }
    else
        std::cout << a-b << std::endl;

    if ((a+b) >= -128) {
       if ((a+b) <= 127)
            std::cout << char(a+b) << std::endl;
       else
           std::cout << a+b << std::endl;
    }
    else
        std::cout << a+b << std::endl;

    if ((a/b) >= -128) {
        if ((a/b) <= 127)
            std::cout << char(a/b) << std::endl;
        else
            std::cout << a/b << std::endl;
    }
    else
        std::cout << a/b << std::endl;

    if ((a*b) >= -128) {
        if ((a*b) <= 127)
            std::cout << char(a*b) << std::endl;
        else
            std::cout << a*b << std::endl;
    }
    else
        std::cout << a*b << std::endl;
    return 0;
}