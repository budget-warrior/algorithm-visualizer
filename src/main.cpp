#include <iostream>
#include <utils.hpp>
#include <bubble_sort.hpp>
#include <quick_sort.hpp>
#include <thread>
#include <chrono>

void callback(std::vector<int> v)
{
    utils::print_vector(v);
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
}

int main()
{
    std::vector<int> v = {5, 3, 8, 4, 2, 1, 9, 7, 6};
    std::vector<int>& v_ref = v;

    std::cout << "Choose an algorithm to sort the array:\n";
    std::cout << "1. Bubble Sort\n";
    std::cout << "2. Quick Sort\n";

    int choice;
    std::cin >> choice;

    if (choice == 1)
    {
        bubble_sort::sort(v_ref, callback);
    }
    else if (choice == 2)
    {
        quick_sort::sort(v_ref, callback);
    }
    else
    {
        std::cout << "Invalid choice\n";
    }

    return 0;
}
