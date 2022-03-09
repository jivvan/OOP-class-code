#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string str = "I'll study in Academia";
    std::vector<std::string> strArr;
    std::string shortStr;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            shortStr.push_back(str[i]);
            strArr.push_back(shortStr);
        }
        else if (str[i] == ' ')
        {
            strArr.push_back(shortStr);
            shortStr = "";
        }
        else
        {

            shortStr.push_back(str[i]);
        }
    }
    for (int i = 0; i < strArr.size(); i++)
    {
        std::cout
            << strArr[i] << " ";
    }
    return 0;
}