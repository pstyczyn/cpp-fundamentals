#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int results=0;
    for(size_t i=0; i<numbers.size(); i++)
    {
        if(numbers[i]%2==0)
        {
            results+=numbers[i];
        }
    }
    return results;
}
