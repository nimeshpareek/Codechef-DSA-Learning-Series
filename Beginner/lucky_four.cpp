#include<iostream>
using namespace std;
int main()
{
int t;
cin >> t;
while (t--)
{
    int y;
    cin >>y;
    int count =0;
    while (y)
    {
        int r;
        r=y%10;
        if (r==4)
        {
            count++;
        }
        y=y/10;

    }
    cout << count << endl;
    
}



    return 0;
}