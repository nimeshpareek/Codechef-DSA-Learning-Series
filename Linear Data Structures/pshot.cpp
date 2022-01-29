#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;

while (t--)
{
    int n;
    cin >>n;
    string x;
    cin  >> x;
    int count_a = 0;
    int count_b = 0;
    int position = 0;
    int life_a = x.size();
    int life_b = x.size();
    // hello there
    for (int i = 0; i < 2*n; i++)
    {
        if (i%2 == 0)
        {
            if (x.at(i) == '1')
            {
                count_a++;
                position++;

               // cout << position << endl;
            }
            else
            {
                position++;
               // cout << position << endl;
            }
            
        }
        else
        {
            if (x.at(i) == '1')
            {
                count_b++;
                position++;
               // cout << position << endl;
            }
            else
            {
                position++;
               // cout << position << endl;
            }
        }

        if (count_a > count_b + life_b)
        {
            cout << position << endl;
            break;
        }
        if (count_b > (n+1)/2)
        {
            cout << position << endl;
            break;
        }
        if (position == x.size())
        {
            cout << position << endl;
        }
        

        cout << position << endl;
        
        
    }
    
    


}

return 0;
}
