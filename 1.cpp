#include <iostream>
#include <vector>
using namespace std;

float mean(const vector<float>& v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum / v.size();
}
