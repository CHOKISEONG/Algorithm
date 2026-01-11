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

    int testCaseNum{};
    cin >> testCaseNum;

    int sum[41][2]{};

    sum[0][0] = 1;
    sum[0][1] = 0;
    sum[1][0] = 0;
    sum[1][1] = 1;

    for (int i{2}; i < 41; ++i)
    {
        sum[i][0] = sum[i - 1][0] + sum[i - 2][0];
        sum[i][1] = sum[i - 1][1] + sum[i - 2][1];
    }

    for (int i{}; i < testCaseNum; ++i)
    {
        int tmp{};
        cin >> tmp;

        cout << sum[tmp][0] << ' ' << sum[tmp][1];
        cout << '\n';
    }
}