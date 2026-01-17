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

    int n{};
    cin >> n;

    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    else if (n == 2 || n == 3)
    {
        cout << 1;
        return 0;
    }

    int result[1000000]{};
    result[1] = 0;
    result[2] = 1;
    result[3] = 1;
    result[4] = 2;
    result[5] = 3;

    for (int i{6}; i <= n; ++i) 
    {
        int lower1 = (i % 3 == 0) ? result[i / 3] + 1 : 99999;
        int lower2 = (i % 2 == 0) ? result[i / 2] + 1 : 99999;
        int lower3 = result[i - 1] + 1;
        
        result[i] = min(min(lower1, lower2), lower3);
    }

    cout << result[n];

}