#include <iostream>
#include <limits>
#include <vector>
using namespace std;

pair<float, float> minMax(const vector<float>& v)
{
    if (v.size() == 0)
    {
        return pair<float, float>(numeric_limits<float>::min(), numeric_limits<float>::max());
    }
    float min = v[0];
    float max = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    return make_pair(min, max);
}
