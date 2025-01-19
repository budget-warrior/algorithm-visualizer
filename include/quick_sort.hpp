#pragma once

#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

namespace quick_sort
{
    /**
        @param v: The vector to be sorted
        @param callback: A function that will be called after each swap
        @param low: The lower bound of the vector
        @param high: The upper bound of the vector
    */
    std::vector<int> sort(std::vector<int>& v, int low, int high, std::function<void(std::vector<int>)> callback);
} // namespace quick_sort