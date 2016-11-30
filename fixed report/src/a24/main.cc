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

    for (std::size_t ind = 0; ind < vec.size(); ++ind)
        std::cout << ind  << ".\t" << vec[ind]
            << std::endl;

    std::cout << std::endl;
    //End algorithm from exercise 22
    for (std::size_t position = 0, posCompare
        = position; position <= vec.size();
        ++position)
    {
        if (vec[posCompare] != vec[position])
        {
            std::size_t times = position -
                posCompare - 1;
            std::cout << "The element "
                << vec[posCompare] << " is repited "
                << times << " times" << std::endl;
            posCompare = position;
        }
    }


}
