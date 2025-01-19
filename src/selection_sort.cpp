#include <selection_sort.hpp>

namespace selection_sort
{
    std::vector<int> sort(std::vector<int>& v, std::function<void(std::vector<int>)> callback)
    {
        int sorted = 0;
        int min = v[0];
        int min_index = 0;

        while (sorted < v.size() - 1)
        {
            for (int i = sorted; i < v.size(); i++)
            {
                if (v[i] < min)
                {
                    min = v[i];
                    min_index = i;
                }
            }
            
            std::cout << "Minimum: " << min << '\n';
            std::swap(v[min_index], v[sorted]);
            sorted++;

            min = v[sorted];
            min_index = sorted;

            callback(v);
        }

        return v;
    }
}