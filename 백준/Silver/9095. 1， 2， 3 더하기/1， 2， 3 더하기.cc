#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n{};
    cin >> n;

    int arr[11]{ 1,2,4 };
    for (int i{3}; i < 11; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }

    int num{};
    for (int i{}; i < n; ++i)
    {
        cin >> num;
        cout << arr[num - 1] << '\n';
    }
}