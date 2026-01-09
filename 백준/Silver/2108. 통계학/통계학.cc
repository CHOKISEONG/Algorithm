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

    vector<int> arr;
    int count[8001]{};

    int greatest{ -4000 }, smallest{ 4000 };
    long long sum{};
    int value{};

    for (int i{}; i < num; ++i)
    {
        cin >> value;

        ++count[value + 4000];
        sum += value;
        arr.push_back(value);

        if (greatest < value)
        {
            greatest = value;
        }

        if (smallest > value)
        {
            smallest = value;
        }
    }

    sort(arr.begin(), arr.end());

    vector<int> mostArr;

    int mostNum{};
    for (int i{}; i < 8001; ++i)
    {
        if (count[i] > mostNum)
        {
            mostNum = count[i];
        }
    }
    for (int i{}; i < 8001; ++i)
    {
        if (count[i] == mostNum)
        {
            mostArr.push_back(i-4000);
        }
    }

    int idx{};
    if (mostArr.size() > 1) {
        idx = mostArr[1];
    }
    else {
        idx = mostArr[0];
    }

    int rd = round(sum / float(num));
    if (rd == -0) rd = 0;

    cout << rd << '\n';
    cout << arr[arr.size() / 2] << '\n';
    cout << idx << '\n';
    cout << greatest - smallest;
}