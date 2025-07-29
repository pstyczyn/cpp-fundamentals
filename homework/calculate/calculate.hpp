#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) 
{
    std::string result;
    if(command == "add")
    {
        return result=std::to_string(first+second);
    }
    else if(command == "subtract")
    {
        return result=std::to_string(first-second);
    }
    else if(command == "multiply")
    {
        return result=std::to_string(first*second);
    }
    else if(command == "divide")
    {
        if(second==0)
        {
            return "Division by 0";
        }
        return result=std::to_string(first/second);
    }
    else 
    {
        return result="Invalid data";
    }
    // return "";
}
