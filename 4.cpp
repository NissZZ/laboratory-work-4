#include <iostream>
#include <vector>
using namespace std;

void sort(vector<float>& v)
{
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v.size(); j++)
        {
            if(v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
}

