#include <iostream>
#include <vector>
using namespace std;

bool remove_first_negative_element(const vector<int>& vec, int& removed_element)
{
    removed_element = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] < 0)
        {
            removed_element = i;
            return true;
        }
    }
    return false;
}
