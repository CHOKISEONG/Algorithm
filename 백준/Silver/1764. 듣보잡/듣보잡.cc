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

    int N{}, M{};
    cin >> N >> M;

    string name;
    map<string, int> arr;
    for (int i{}; i < N; ++i)
    {
        cin >> name;
        ++arr[name];
    }

    for (int i{}; i < M; ++i)
    {
        cin >> name;
        ++arr[name];
    }

    string solution;
    int solutionNum{};
    for (const auto& a : arr)
    {
        if (a.second > 1)
        {
            solution += a.first;
            solution += '\n';
            ++solutionNum;
        }
    }
    cout << solutionNum << '\n' << solution;
}