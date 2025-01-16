#include "../include/utils.hpp"

namespace utils
{
    void print_vector(std::vector<int> v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            std::cout << "----";
        }

        std::cout << "\n| ";

        for (int n : v)
        {
            std::cout << n << " | ";
        }

        std::cout << '\n';

        for (int i = 0; i < v.size(); i++)
        {
            std::cout << "----";
        }

        std::cout << '\n';
    }
}