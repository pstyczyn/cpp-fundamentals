#pragma once
#include <complex>
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


enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,
};

std::string getErrorMessage(const ErrorCode);
bool doPasswordsMatch(std::string, std::string);
ErrorCode checkPasswordRules(std::string);
ErrorCode checkPassword(std::string, std::string);

