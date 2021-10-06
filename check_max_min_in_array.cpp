// C++ program to demonstrate the use of std::max
// C++ program to demonstrate the use of std::max
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // Comparing ASCII values of a and b
    cout << max('a', 'b') << "\n";
    // Returns the first one if both the numbers
    // are same
    cout << max(7, 7);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minno = INT_MAX;
    int maxno = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxno = max(maxno, arr[i]);
        minno = min(minno, arr[i]);
    }
    cout << maxno << "\t" << minno;

    return 0;
}
