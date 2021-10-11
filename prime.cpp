#include <iostream>
using namespace std;

int main()
{ cout<<"Prime numbers are the numbers that are only divisible by 1 and themselves";
    int i, a, b;
    cin >> a >> b;
    cout << "Prime :\n";
    for (int num = a; num <= b; num++)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }
}
