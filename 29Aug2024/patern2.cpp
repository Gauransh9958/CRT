#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the numbers of row you want to print :";
    cin>>n;
    for(int i=0; i<=n; i++)
{
    for (int j=1;j<=i;j++)
    {
        cout<<"*";

    }


    cout<<endl;
}
    return 0;
}