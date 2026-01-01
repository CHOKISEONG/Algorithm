#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num{};
    cin >> num;

    if (num == 0)
    {
        cout << 0;
        return 0;
    }

    vector<int> vec(num);
    for (int i = 0; i < num; ++i)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    int del = (int)round(num * 0.15);
    double sum = 0;
    int cnt = 0;

    for (int i = del; i < num - del; ++i)
    {
        sum += vec[i];
        cnt++;
    }
    cout << (int)round(sum / cnt);
}