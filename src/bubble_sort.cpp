#include <bubble_sort.hpp>

namespace bubble_sort
{
    std::vector<int> sort(std::vector<int>& v, std::function<void(std::vector<int>)> callback)
    {
        bool swapped = false;

        for (int i = 0; i < v.size() - 1; i++)
        {
            swapped = false;

            for (int j = 0; j < v.size() - 1; j++)
            {
                if (v[j] > v[j + 1])
                {
                    callback(v);
                    std::swap(v[j], v[j + 1]);

                    swapped = true;
                }
            }

            // None of the elements were swapped, so the array is sorted
            if (!swapped)
                break;
        }

        callback(v);
        return v;
    }
}
