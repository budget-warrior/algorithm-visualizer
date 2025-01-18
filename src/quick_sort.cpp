#include <quick_sort.hpp>

namespace quick_sort
{
    std::vector<int> sort(std::vector<int>& v, std::function<void(std::vector<int>)> callback)
    {
        int pivot = v[v.size() - 1]; // Pivot is the last element of the vector
        std::cout << "Pivot:\n";
        callback({pivot});

        std::vector<int> left; // Elements less than pivot
        std::vector<int> right; // Elements greater than pivot

        for (const int n : v)
        {
            if (n < pivot)
            {
                left.push_back(n);
            }
            else if (n > pivot)
            {
                right.push_back(n);
            }
        }

        std::vector<int> sorted;
        sorted.insert(sorted.end(), left.begin(), left.end());
        sorted.push_back(pivot);
        sorted.insert(sorted.end(), right.begin(), right.end());

        if (left.size() > 1)
        {
            callback(sorted);
            left = sort(left, callback);
        }

        if (right.size() > 1)
        {
            callback(sorted);
            right = sort(right, callback);
        }

        // TODO: is there a better way to do this?
        sorted.clear();
        sorted.insert(sorted.end(), left.begin(), left.end());
        sorted.push_back(pivot);
        sorted.insert(sorted.end(), right.begin(), right.end());

        callback(sorted);
        return sorted;
    }
} // namespace quick_sort