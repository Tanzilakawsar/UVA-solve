#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, donation, total = 0;
    string operation;
    cin >> t;
    while (t--) {
        cin >> operation;
        if (operation == "donate") {
            cin >> donation;
            total += donation;
        } else if (operation == "report") {
            cout << total << endl;
        }
    }
    return 0;
}
