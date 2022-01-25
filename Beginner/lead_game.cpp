#include<iostream>
using namespace std;
int main()
{
int t,i;
cin >> t;
int pone[t];
int ptwo[t];
int lead[t];
for (i = 0; i < t; i++)
{
   cin >> pone[i] >> ptwo[i];
   if (pone[i]>ptwo[i])
   {
       lead[i]=pone[i] - ptwo[i];
   }
   else
   {
       lead[i]=ptwo[i] - pone[i];
   }
   
}
for ( i = 1; i < t; i++)
{
    if (lead[0]<lead[i])
    {
        lead[0]=lead[i];
    }
    
}
for ( i = 0; i < t; i++)
{
    if (lead[0]==pone[i]-ptwo[i])
    {
        cout << "1 ";    
    }
    else if (lead[0]==ptwo[i]-pone[i])
    {
        cout << "2 ";
    }  
    
}
cout << lead[0];
    return 0;
}