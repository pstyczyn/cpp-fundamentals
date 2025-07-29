#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    long results=-3000000;
    long temp=0;
    for(size_t i=0; i<vec.size(); i++)
    {
        temp=vec[i];
        if(temp>results)
        {
            results=temp;
        }
    }

    return static_cast<int>(results);
}
