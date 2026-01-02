#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string& a, string& b)
{
    if (a == b)
    {
        a.clear();
    }
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    return a < b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num{};
    cin >> num;

    vector<string> words(num);
    for (int i{}; i < num; ++i)
    {
        cin >> words[i];
    }

    sort(words.begin(), words.end(), compare);
    for (const auto& w : words)
    {
        if (w.empty()) continue;
        cout << w << '\n';
    }
}