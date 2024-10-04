#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size + 1];
    int num;
    
    for (int i = 1; i <= size; i++)
    {
        cin >> num;
        arr[num] = i;
    }

    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    delete[] arr;
}
