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

    int num{};
    cin >> num;

    map<int, int> myMap;

    int tmp{};
    for (int i{}; i < num; ++i)
    {
        cin >> tmp;
        ++myMap[tmp];
    }

    cin >> num;

    for (int i{}; i < num; ++i)
    {
        cin >> tmp;
        cout << myMap[tmp] << ' ';
    }
}