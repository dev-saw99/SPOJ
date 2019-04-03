#include <iostream>
#include <map>
using namespace std;

long long int get_coins(int N, map<int, long long int> &memoArray);

int main()
{
    map<int, long long int> M;
    int N;
    while (scanf("%lld", &N) != EOF)
    {
        cout << get_coins(N, M) << endl;
    }
    return 0;
}
long long int get_coins(int N, map<int, long long int> &memoArray)
{
    if (memoArray[N] != 0)
    {
        return memoArray[N];
    }
    else
    {
        if (N >= 0 && N <= 11)
        {
            memoArray[N] = N;
            return N;
        }
        else
        {
            return memoArray[N] = get_coins(N / 2, memoArray) + get_coins(N / 3, memoArray) + get_coins(N / 4, memoArray);
        }
    }
}
