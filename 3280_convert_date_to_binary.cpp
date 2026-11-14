#include <string>
#include <bitset>

class Solution {
public:
    std::string toBin(int num) {
        std::string s = std::bitset<16>(num).to_string();
        return s.substr(s.find('1'));
    }
    std::string convertDateToBinary(std::string date) {
        int year = std::stoi(date.substr(0, 4));
        int month = std::stoi(date.substr(5, 2));
        int day = std::stoi(date.substr(8, 2));
        return toBin(year) + "-" + toBin(month) + "-" + toBin(day);
    }
};