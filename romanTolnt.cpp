#include <iostream>
#include <map>
#include <vector>

int RomanToInteger(const std::string& rom)
{
    std::map<char, int> nums;
    nums['I'] = 1;
    nums['V'] = 5;
    nums['X'] = 10;
    nums['L'] = 50;
    nums['C'] = 100;
    nums['D'] = 500;
    nums['M'] = 1000;

    int res{0};
    
    for (int i{0}; i < rom.size() - 1; ++i) {
        if (nums[rom[i]] < nums[rom[i + 1]]) {
            res -= nums[rom[i]];
        } else {
            res += nums[rom[i]];
        } 
    }
    res += nums[rom[rom.size() - 1]];
    
    return res;
}

int main()
{
    std::string rom;
    std::cout << "Enter you number in roman numerals system: ";
    std::cin >> rom;

    std::cout << "The number is: " << RomanToInteger(rom) << std::endl;

    return 0;
}
