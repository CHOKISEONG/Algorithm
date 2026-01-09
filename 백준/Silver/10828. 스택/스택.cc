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
    
    stack<int> st;

    string cmd;
    for (int i{}; i < num; ++i)
    {
        cin >> cmd;

        if (cmd == "push")
        {
            int tmp{};
            cin >> tmp;

            st.push(tmp);
        }
        else if (cmd == "pop")
        {
            if (st.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if (cmd == "size")
        {
            cout << st.size() << '\n';
        }
        else if (cmd == "empty")
        {
            if (st.empty())
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
            cout << '\n';
        }
        else if (cmd == "top")
        {
            if (st.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << st.top() << '\n';
            }
        }
    }
}