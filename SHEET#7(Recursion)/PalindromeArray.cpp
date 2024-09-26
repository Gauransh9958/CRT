#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
long long size_;
int index = 0;
bool isPalindRome(long long *arr)
{
    if (index == size_ / 2)
    {
        return true;
    }
    if (arr[index] == arr[size_ - index - 1])
    {
        index++;
        isPalindRome(arr);
    }
    else
    {
        return false;
    }
}


int arrX[100000];
bool plin(int i)
{

    if (i == size_)
    {
        return 1;
    }
    return (arrX[i] == arrX[size_ - i - 1]) && plin(i + 1);
}
int main()
{
    
    cin >> size_;
    long long *arr = new long long[size_];

    for (int i = 0; i < size_; i++)
    {
        cin >> arr[i];
    }

    if (isPalindRome(arr))
        cout << "YES";
    else
        cout << "NO";

}