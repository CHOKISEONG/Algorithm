#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Anum{};
    cin >> Anum;

    map<int, bool> arr;

    int num{};
    for (int i{}; i < Anum; ++i)
    {
        cin >> num;
        arr[num] = true;
    }

    int Mnum;
    cin >> Mnum;
    
    long long value{};
    for (int i{}; i < Mnum; ++i)
    {
        cin >> value;
        
        if (arr[value] == true)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }
}