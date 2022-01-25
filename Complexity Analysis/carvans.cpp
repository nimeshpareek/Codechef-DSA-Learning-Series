
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin >> t;
while (t--)
{
    cin >> n;
    int min = INT_MAX;
    int count = 0;
    int car;
    for (int i = 0; i < n; i++)
    {
        cin >> car;
        if (car <= min)
        {
            count++;
            min = car;

        }
        
    }
    cout << count << endl;
    
}

return 0;
}