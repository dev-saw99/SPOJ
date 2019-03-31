#include <iostream>
using namespace std;

int main()
{

  signed long long int N;
  string remainder;
  cin >> N;
  if (N == 0)
  {
    cout << 0;
    return 0;
  }
  while (N != 0)
  {
    int r = N % (-2);
    N = N / (-2);
    if (r < 0)
    {
      r += 2;
      N += 1;
    }
    remainder = to_string(r) + remainder;
  }
  cout << remainder;
}
