#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

long long max_temp;


void max_num(long long arr[], int index)
{
    if (index == -1)
    {
        return;
    }

    if (max_temp < arr[index])
    {
        max_temp = arr[index];
    }

    max_num(arr, index - 1);
}

int length;
void maxNumber(long long arr[])
{
    if (length == 0)
    {
        return;
    }
    
    if (max_temp < arr[--length])
    {
        max_temp = arr[length];
    }

    maxNumber(arr);
}
int main()
{
    
    int size;
    cin >> size;
    long long *arr = new long long[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    max_temp = arr[size - 1];
    max_num(arr, size - 1);
    cout << max_temp;
    delete[] arr;


}