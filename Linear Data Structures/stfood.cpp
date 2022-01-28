#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int maximum=INT_MIN;
	    while(n--){
	        int Si,Pi,Vi;
	        cin>>Si>>Pi>>Vi;
	        int profit;
	        profit = (Pi/(Si+1))*Vi;
	        maximum = max(profit,maximum);
	        
	    }
	    cout<<maximum<<endl;
	}
	return 0;
}
