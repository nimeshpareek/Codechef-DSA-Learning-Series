#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int sum=0;
	    while(n){
	        int r=n%10;
	        n=n/10;
	        sum=sum+r;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
