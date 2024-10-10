#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPrefix(const string &str1, const string &str2)
{
    if (str1.length() > str2.length())
    {
        return false;
    }
    return str2.compare(0, str1.length(), str1) == 0;
}

pair<bool, pair<string, string>> checkPassword(const vector<string> &passwords)
{
    for (size_t i = 0; i < passwords.size(); ++i)
    {
        for (size_t j = i + 1; j < passwords.size(); ++j)
        {
            if (isPrefix(passwords[i], passwords[j]) || isPrefix(passwords[j], passwords[i]))
            {
                return {false, {passwords[i], passwords[j]}};
            }
        }
    }
    return {true, {"", ""}};
}

int main()
{
    // Get user input for the list of passwords
    cout << "Enter passwords separated by spaces: ";
    string input;
    getline(cin, input);

    // Tokenize the input string into a vector of strings
    vector<string> passwords;
    size_t pos = 0;
    while ((pos = input.find(' ')) != string::npos)
    {
        passwords.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    passwords.push_back(input);

    // Check if the list of passwords forms a good or bad password
    auto result = checkPassword(passwords);
    if (result.first)
    {
        cout << "GOOD PASSWORD" << endl;
    }
    else
    {
        cout << "BAD PASSWORD" << endl
             << result.second.first << " " << result.second.second << endl;
    }

    return 0;
}
