#include <iostream>
using namespace std;

int main()
{
    int N;
    int isOdd, isEven = 0;
    while (true)
    {
        cout << "Enter an integer: ";
        cin >> N;
        if (N == 0)
        {
            cout << "#Even numbers = " << isEven << endl;
            cout << "#Odd numbers = " << isOdd << endl;
            break;
        }
        if (N % 2 == 0)
        {
            isEven++;
        }
        else
        {
            isOdd++;
        }
    }
}
