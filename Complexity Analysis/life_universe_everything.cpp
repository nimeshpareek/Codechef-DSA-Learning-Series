#include <iostream>
using namespace std;
// ACCEPTED BY CODECHEF DON'T KNOW HOW
int main()
{
    int arr[100];
    
for (int i = 0; i < 100; i++)
{
    cin >> arr[i];
    if (arr[i]!=42)
    {
     cout << arr[i];
    }
    else
    {
        break;
    }
}

    return 0;
}
