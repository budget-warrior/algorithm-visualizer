#pragma once

#include <vector>
#include <algorithm>
#include <functional>

namespace bubble_sort
{
    /**
        @param v: The vector to be sorted
        @param callback: A function that will be called after each swap
    */
    std::vector<int> sort(std::vector<int>& v, std::function<void(std::vector<int>)> callback);
} // namespace bubble_sort
