#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
void solution1()
{
    long long num;
    cin >> num;
    if (num >= 0)
    {
        cout << num;
    }
    else
    {
        
        int first = abs(num % 10);

        long long temp1 = num / 10; 

        long long temp2 = temp1 / 10;

        temp2 *= 10;

        temp2 += (first * -1);

        

        cout << max(temp1, temp2);
    }
}
void solution2()
{
    string num1;
    cin >> num1;
    long long maxNum = stoi(num1);


    string save = num1;

    num1.erase(num1.size() - 1, 1);
    save.erase(save.size() - 2, 1);
    long long res = max(maxNum, max((long long)stoi(num1), (long long)stoi(save)));
    cout << res;
}
int main()
{
    solution1();
}