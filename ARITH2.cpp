#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore(100, '\n');

    while (T--)
    {
        long long int num1, num2;
        char op;
        cin >> num1;
        cin >> op;
        while (op != '=')
        {
            cin >> num2;
            if (op == '+')
            {
                num1 += num2;
                cin >> op;
            }
            else if (op == '-')
            {
                num1 -= num2;
                cin >> op;
            }
            else if (op == '*')
            {
                num1 *= num2;
                cin >> op;
            }
            else if (op == '/')
            {
                num1 /= num2;
                cin >> op;
            }
                }
        cout << num1 << endl;
    }
}