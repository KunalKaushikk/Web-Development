#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>

int main()
{

    std::string input;

    std::getline(std::cin, input);

    std::istringstream is(input);

    std::vector<int> v((std::istream_iterator<int>(is)), std::istream_iterator<int>());

    std::cout << v.size() << "\n";

    return 0;
}