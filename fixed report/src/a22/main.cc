#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::vector<std::string> vec;
    std::string stringTemp;

    while (std::cin >> stringTemp)
        vec.push_back(stringTemp);

    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()),
        vec.end());

    for (std::size_t ind = 0; ind < vec.size(); ++ind)
        std::cout << ind  << ".\t" << vec[ind]
            << std::endl;
}
