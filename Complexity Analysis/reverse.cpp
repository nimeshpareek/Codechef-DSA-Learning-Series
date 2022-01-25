#include <iostream>
using namespace std;
// COPIED 
// T-- IS LIKE 5 4 3 2 1 WHEN 0 IT IS FALSE

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n ,rev = 0;
		cin>>n;
		while(n > 0)
		{
			rev*=10;
			rev += n%10;
	        n/=10;
		}
		cout << rev << endl;
	}
	return 0;
}
