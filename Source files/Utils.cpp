#include "Utils.h"
#include<algorithm>
#include<cctype>

std::string Utils::toLower(const std::string &str) {
    std::string result = str;
    for (char &c: result) {
        c= std::tolower(c);

    } return result;

} bool Utils::isEqualIgnoreCase(const
std::string& a, const std::string& b){
    return toLower(a) == to Lower(b);
}