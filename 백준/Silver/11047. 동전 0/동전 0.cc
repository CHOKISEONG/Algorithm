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

    int N{}, K{};
    cin >> N >> K;
    
    int tmp{};
    vector<int> arr;
    for (int i{}; i < N; ++i)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }

    int num{};
    int idx{ arr.size() - 1 };
    while (K > 0)
    {
        if ((K - arr[idx]) >= 0)
        {
            K -= arr[idx];
            ++num;
        }
        else
        {
            --idx;
        }
    }

    cout << num;
}