#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ne = 0;
        while (n > 0) {
            ne = (ne * 10) + n % 10;
            n = n / 10;
        }
        cout << ne << endl;
    }
    return 0;
}