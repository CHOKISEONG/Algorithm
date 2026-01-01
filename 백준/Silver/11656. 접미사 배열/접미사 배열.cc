#include <iostream>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    vector<string> vec;
    for (int i{}; i < str.size(); ++i)
    {
        string sub = str.substr(i);
        vec.push_back(sub);
    }

    sort(vec.begin(), vec.end());

    for (auto& i : vec)
    {
        cout << i << endl;
    }
}