#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define LI long int;
int find(string num[], string str);
int main()
{
    int n;
    cin >> n;
    cin.ignore(100, '\n');
    while (n != 0)
    {
        int base[] = {1, 20, 360, 7200, 144000, 2880000, 57600000};

        string num[20] = {
            "S",
            ".",
            "..",
            "...",
            "....",
            "-",
            ". -",
            ".. -",
            "... -",
            ".... -",
            "- -",
            ". - -",
            ".. - -",
            "... - -",
            ".... - -",
            "- - -",
            ". - - -",
            ".. - - -",
            "... - - -",
            ".... - - -"};

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            string str;
            getline(cin, str);
            int index = find(num, str);
            arr[i] = index;
        }
        long long int sum = 0;
        int i = n - 1;
        int j = 0;
        while (j < n)
        {

            sum += base[i] * (arr[j]);
            i--;
            j++;
        }
        cout << sum << endl;
        cin >> n;
        cin.ignore(100, '\n');
    }
}

int find(string num[], string str)
{
    for (int i = 0; i < 20; i++)
    {
        string st = num[i];
        if (st.compare(str) == 0)
        {
            return i;
        }
    }
}