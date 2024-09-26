
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
double arr[100];
int size_;

double average_arr(int index, double result)
{ 

    if (size_ == index)
    {
        return result / size_;
    }
    return average_arr(index + 1, result + arr[index]);
}
int main()
{
    cin >> size_;
    for (int i = 0; i < size_; i++)
    {
        cin >> arr[i];
    }
    cout << fixed << setprecision(6) << average_arr(0, 0); //  .0000
}
