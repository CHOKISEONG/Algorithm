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

    int N{}, M{};
    cin >> N >> M;

    string address, password;
    map<string, string> myMap;
    for (int i{}; i < N; ++i)
    {
        cin >> address >> password;
        myMap[address] = password;
    }

    for (int i{}; i < M; ++i)
    {
        cin >> address;
        cout << myMap[address] << '\n';
    }
}