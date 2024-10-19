#include <iostream>
#include <vector>
using namespace std;

float argmax(const vector<float>&v)
{
    if(v.size()==0)
    {
        return -1;
    }
    float max = v[0], index = 0;
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] > max)
        {
            max = v[i];
            index = i;
        }
    }
    return index;
}
