#include <iostream>

int main()
{
    int nRock;
    std::cin >> nRock;
    if (nRock % 2)
        std::cout << "SK";
    else
        std::cout << "CY";
}