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

    int paperNum{};
    int idx{};

    vector<int> arr;
    for (int i{}; i < testCaseNum; ++i)
    {
        cin >> paperNum >> idx;
        arr.clear();

        int tmp{};
        for (int j{}; j < paperNum; ++j)
        {
            cin >> tmp;
            arr.push_back(tmp);
        }

        int order{ 1 };
        bool isContinue{ true };
        while (isContinue)
        {
            int isGreatest = arr[0];
            for (int i{}; i < arr.size(); ++i)
            {
                if (arr[i] > isGreatest)
                {
                    isGreatest = -1;
                    break;
                }
            }

            if (isGreatest == -1)
            {
                arr.push_back(arr[0]);
            }
            else
            {
                if (idx == 0)
                {
                    cout << order << '\n';
                    isContinue = false;
                }
                ++order;
            }

            arr.erase(arr.begin());
            idx = (idx == 0) ? arr.size() - 1 : idx - 1;
        }
    }
}