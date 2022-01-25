#include <iostream>
using namespace std;
#define nl '\n'

int main() {
	int t;
	cin>>t;
	while(t--){
	    int g; 
	    cin>>g; 
	    while(g--){
	        int i, n, q;
	        cin>>i>>n>>q;
	        if(i==1){
	            if(q==1) cout<<n/2<<nl;
	            else if(q==2) cout<<n-(n/2)<<nl;
	        }
	        else if(i==2){
	            if(q==1) cout<<n-(n/2)<<nl;
	            else if(q==2) cout<<n/2<<nl;
	        }
	    }
	}
	return 0;
}
