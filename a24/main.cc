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

    std::vector<std::string> vecUn;
    vecUn = vec;
    vecUn.erase(unique(vecUn.begin(), vecUn.end()), vecUn.end());

    for (std::size_t ind = 0; ind < vecUn.size(); ++ind)
    {
        std::size_t count = std::count (vec.begin(), vec.end(), vecUn[ind]);

        std::cout << "The element " << vecUn[ind]
            << " is repited " << count - 1 << " times"
            << std::endl;
    }

}
