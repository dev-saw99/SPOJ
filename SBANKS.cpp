#include <iostream>
#include <map>
using namespace std;

#define LI long int

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        LI n;
        cin >> n;
        cin.ignore(100, '\n');
        map<string, LI> accounts;
        map<string, LI>::iterator it;
        while (n--)
        {
            string s;
            getline(cin, s);
            accounts[s]++;
        }
        for (it = accounts.begin(); it != accounts.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
        cout << endl;
    }
}
