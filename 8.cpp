#include <iostream>
#include <vector>
using namespace std;

string join(const vector<string>& str, const string& sep)
{
    string result;
    for (int i = 0; i < str.size(); i++)
    {
       result += str[i] + sep;
    }
    return result;
}
