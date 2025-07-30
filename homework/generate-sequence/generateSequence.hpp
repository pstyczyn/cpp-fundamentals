#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec{};
    if(count == 0 || count <0)
    {
        return vec;
    }
    vec.resize(count);
    vec[0]=step;
    for(size_t i=1; i<vec.size(); i++)
    {
        vec[i]=vec[i-1]+step;
    }


    return vec;
}
