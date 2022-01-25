// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
// int n;
// cin >> n;
// int arr[n];
// int ary[n];
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[i];
// }
// for (int i = 0; i < n; i++)
// {
//     int count = 0;
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[i] <= arr[j])
//         {
//             count++;
//         }  
//     }
//     ary[i] = arr[i]*count;
// }
// cout << *max_element(ary, ary +n);
//     return 0;
// }



#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	long n;
	cin >> n;
	int budget[n];
	for(int i=0; i<n; i++) {
	    cin >> budget[i];
	}
	sort(budget, budget + n);
	long long max = 0;
	for(int i=0; i<n; i++) {
	    if(max < budget[i]*(n-i)) {
	        max = budget[i]*(n-i);
	    }
	}
	cout << max <<endl;
	return 0;
}
