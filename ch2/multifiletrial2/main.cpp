#include <iostream>
#include "add.cpp"

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // compile error
    return 0;
}
