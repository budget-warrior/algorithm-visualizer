#include <iostream>
#include "../include/bubble_sort.hpp"

int main()
{
    std::vector v = {5, 3, 8, 4, 2, 1, 9, 7, 6};

    std::cout << "Choose an algorithm to sort the array:\n";
    std::cout << "1. Bubble Sort\n";

    int choice;
    std::cin >> choice;

    if (choice == 1)
    {
        bubble_sort::sort(v);
    }
    else
    {
        std::cout << "Invalid choice\n";
    }

    return 0;
}
