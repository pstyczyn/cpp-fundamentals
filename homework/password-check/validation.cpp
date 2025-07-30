#include "validation.hpp"
#include <complex>
#include <cassert>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
#include <memory>
#include <string>
#include <string_view>
#include <list>
#include <map>
#include <algorithm>
#include <array>
#include <forward_list>
#include <deque>
#include <cstdlib>
#include "validation.hpp"



std::string getErrorMessage(const ErrorCode code)
{
    std::string message;
    switch(code)
    {
        case ErrorCode::Ok:
            return message="Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return message="Password needs to have at least nine characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return message="Password needs to have at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return message="Password needs to have at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return message="Password needs to have at least one uppercase letter";
        case ErrorCode::PasswordsDoNotMatch:
            return message="Passwords do not match";
        default:
            return message="Invalid data";
    }

}

bool doPasswordsMatch(std::string password1, std::string password2)
{
    int var=0;
    var=password1.compare(password2);
    if(var==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ErrorCode checkPasswordRules(std::string password)
{
    int randomCode=0;
    randomCode=rand()%5;
    std::string pas=password;
    switch(randomCode)
    {
        case 0:
            return ErrorCode::Ok;
        case 1:
            return ErrorCode::PasswordNeedsAtLeastNineCharacters;
        case 2:
            return ErrorCode::PasswordNeedsAtLeastOneNumber;
        case 3:
            return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        case 4:
            return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
        case 5:
            return ErrorCode::PasswordsDoNotMatch;
        default:
            return ErrorCode::Ok;
    }


}

ErrorCode checkPassword(std::string password1, std::string password2)
{
    bool check=doPasswordsMatch(password1, password2);

    if(check)
    {
        return checkPasswordRules(password1);
    }
    else
    {
        return ErrorCode::PasswordsDoNotMatch;
    }

}