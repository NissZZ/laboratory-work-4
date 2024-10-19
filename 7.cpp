#include <iostream>
#include <vector>
using namespace std;

vector<string> split(const string& str, char sep)
{
    string space = "";
    vector<string> separated{};
    for(int i = 0; i < str.size(); i++)
    {
        if (str[i] != sep)
        {
            space.push_back(str[i]);
        }
        if((str[i] == sep || str.size() - 1 == i) && space != "")
        {
            separated.push_back(space);
            space.clear();
        }
    }
    if (separated.size() == str.size())
    {
        separated.clear();
        return separated;
    }
    return separated;
}
