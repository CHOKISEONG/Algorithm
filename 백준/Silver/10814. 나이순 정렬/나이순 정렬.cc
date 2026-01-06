#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num{};
    cin >> num;

    vector<vector<string>> members;
    members.reserve(201);

    int age{};
    string name;
    for (int i{}; i < num; ++i)
    {
        cin >> age;
        cin >> name;
        members[age].push_back(name);
    }

    for (int i{}; i < 201; ++i)
    {
        for (int j{}; j < members[i].size(); ++j)
        {
            cout << i << ' ' << members[i][j] << '\n';
        }
    }
}