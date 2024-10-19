#include <iostream>
using namespace std;

string replace(const string& str, const string& old, const string& new_string)
{
    string str_new = str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str.find(old, i) == string::npos)
        {
            return str_new;
        }
        int index = str.find(old, i);
        str_new.erase(index, old.length());
        str_new.insert(index, new_string);
    }
}


