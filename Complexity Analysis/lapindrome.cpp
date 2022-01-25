// #include<iostream>
// using namespace std;
// int main()
// {
// int t;
// cin >> t;
// while (t--)
// {
//     string s;
//     cin >> s;
//     int left[26]={0};
//     int right[26]={0};
//     int len= s.length();
//     for (int i = 0; i < len/2; i++)
//     {
//         int index=s[i]-'a';
//         left[index]++;
//     }
//       for (int i =  (len+1)/2; i < s; i++)
//     {
//         int index=s[i]-'a';
//         right[index]++;
//     }
//     int case = 0;
//     for (int i = 0; i < 26; i++)
//     {
//          if (left[i]!= right[i])
//          {
//              case 1;
//          }
//          if (case==0)
//          {
//              cout << "YES" << endl;
//          }
//          else
//          {
//              cout << "NO" << endl;
//          }
         
         
//     }
    
    
// }


//     return 0;
// }


//CODE COPIED
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int size= s.size();
	    int a[26]={0};
	    int b[26]={0};
	    for(int i=0;i<size/2;i++)
	    {
	        a[s[i]-97]++;
	        b[s[size-i-1]-97]++;
	    }
	    int c[26]={0};
	    int sum=0;
	    for(int i=0;i<26;i++)
	    {
	        if(a[i]!=b[i])
	            c[i]++;
	        sum+=c[i];
	    }
	    if(sum==0)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}