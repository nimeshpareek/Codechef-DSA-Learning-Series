#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,x;
cin  >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin >> arr[i] ;
    x=sqrt(arr[i]);
    cout << x << endl;
}

    return 0;
}