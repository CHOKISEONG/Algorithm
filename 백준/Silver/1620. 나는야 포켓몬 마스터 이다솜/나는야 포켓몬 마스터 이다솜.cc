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

    int pokemonNum{}, problemNum{};
    cin >> pokemonNum >> problemNum;

    map<int, string> pokemon;
    map<string, int> pokemonReverse;
    string name;
    for (int i{}; i < pokemonNum; ++i)
    {
        cin >> name;
        pokemon[i] = name;
        pokemonReverse[name] = i;
    }

    for (int i{}; i < problemNum; ++i)
    {
        cin >> name;
        if (name[0] <= '9' && name[0] >= '0')
        {
            cout << pokemon[stoi(name)-1] << '\n';
        }
        else
        {
            cout << pokemonReverse[name] + 1 << '\n';
        }
    }
}