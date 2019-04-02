#include <iostream>
using namespace std;
long long int memoArray[100000001] = {0};
long long int get_coins(long long int N);

int main()
{

    long long int N;
    while (scanf("%lld", &N) != EOF)
    {
        cout << get_coins(N) << endl;
    }
    return 0;
}
long long int get_coins(long long int N)
{
    if (N >= 100000000)
    {

        return get_coins(N / 2) + get_coins(N / 3) + get_coins(N / 4);
    }
    else if (memoArray[N] != 0)
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
            return memoArray[N] = get_coins(N / 2) + get_coins(N / 3) + get_coins(N / 4);
        }
    }
}
