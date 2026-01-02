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
    
    int cnt{};
    for (int i{ num }; i > 0; --i)
    {
        if (i % 5)
            continue;
        
        if (!(i % 125))
        {
            cnt += 3;
        }
        else if (!(i % 25))
        {
            cnt += 2;
        }
        else
        {
            ++cnt;
        }
    }
    cout << cnt;
}