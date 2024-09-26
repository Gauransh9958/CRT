#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

int size_;
int num;
int MaxNum;
void print(int counter)
{
    cin >> num;
    if (counter == size_)
    {
        return;
    }
    if (counter == 0)
    {
        cout << num << " ";
        MaxNum = num;
    }
    else
    {
        if (MaxNum < num)
        {
            cout << num << " ";
            MaxNum = num;
        }
        else
        {
            cout << MaxNum << " ";
        }
    }
    return print(counter + 1);
}
int main()
{

    cin >> size_;
    print(0);
}