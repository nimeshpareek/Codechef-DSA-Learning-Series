// #include <iostream>
// #include<iomanip>
// using namespace std;

// int main()
// {
//     int cash;
//     double amount;
//     cin >> cash;
//     cin >> amount;
// if (amount > cash)
// {
//     if (cash%5==0)
//     {
//         amount=amount-(cash+0.50);
//         cout <<fixed <<setprecision(2)<< amount;
//     }
//     else
//     {
//         cout << fixed << setprecision(2) << amount;
//     }   
// }
// else
// {
//   cout <<fixed << setprecision(2) << amount;
// }

//     return 0;
// }
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    
    int a;
    float b;
    cin >> a >> b;
    if (a % 5 == 0 && a<=b -0.5) b = b-a-0.50;
    cout << fixed <<setprecision(2) <<b;
    return 0;
}