#include "../include/bubble_sort.hpp"

namespace bubble_sort
{
    std::vector<int> sort(std::vector<int> v)
    {
        bool swapped = false;

        for (int i = 0; i < v.size() - 1; i++)
        {
            for (int j = 0; j < v.size() - 1; j++)
            {
                if (v[j] > v[j + 1])
                {
                    utils::print_vector(v);
                    std::this_thread::sleep_for(std::chrono::milliseconds(1500));

                    int temp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = temp;

                    swapped = true;
                }
            }

            // None of the elements were swapped, so the array is sorted
            if (!swapped)
                break;
        }

        utils::print_vector(v);

        return v;
    }
}
