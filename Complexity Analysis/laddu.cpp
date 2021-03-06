#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int activities, points = 0;
        string origin;
        cin >> activities >> origin;
        while (activities--) {
            string kind;
            cin >> kind;
            if (kind == "CONTEST_WON") {
                int rank;
                cin >> rank;
                int bonus = max(0, 20 - rank);
                points += 300 + bonus;
            } else if (kind == "TOP_CONTRIBUTOR") {
                points += 300;
            } else if (kind == "BUG_FOUND") {
                int severity;
                cin >> severity;
                points += severity;
            } else if (kind == "CONTEST_HOSTED") {
                points += 50;
            }
        }
        cout << points / (origin == "INDIAN" ? 200 : 400) << endl;
    }
}