#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
#define endl '\n'
int main()
{
    lol validMoments = 0;
    lol size;
    cin >> size;
    lol *vec = new lol[size + 1];
    for (int i = 1; i <= size; i++)
    {
        cin >> vec[i];
    }
    

    lol current = 0;

    for (int i = 1; i <= size; i++)
    {
        current = max(vec[i], current); // 2 3 5
        if (i == current)               // 2 3 4
            validMoments++;
    }
    cout << validMoments;
}