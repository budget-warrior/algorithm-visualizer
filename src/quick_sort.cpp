#include <quick_sort.hpp>

namespace quick_sort
{
    int partition(std::vector<int>& v, int low, int high, std::function<void(std::vector<int>)> callback)
    {
        int i = low - 1; // The right position of the pivot

        for (int j = low; j <= high - 1; j++)
        {
            if (v[j] < v[high])
            {
                i++;
                std::swap(v[i], v[j]);
                callback(v);
            }
        }

        std::swap(v[i + 1], v[high]);

        return i + 1;
    }

    std::vector<int> sort(std::vector<int>& v, int low, int high, std::function<void(std::vector<int>)> callback)
    {
        if (low < high)
        {
            int pivot = partition(v, low, high, callback);
            std::cout << "Pivot: " << v[pivot] << '\n';

            sort(v, low, pivot - 1, callback);
            sort(v, pivot + 1, high, callback);
        }
        
        callback(v);
        return v;
    }
} // namespace quick_sort