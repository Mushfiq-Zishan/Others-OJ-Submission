#include <bits/stdc++.h>
using namespace std;
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define endl '\n'
using ll = long long;
int main()
{
  optimize();
  ll n;
  cin >> n;
  cout << n << " ";
  while (n > 1)
  {
    if (n % 2 != 0)
    {
      n *= 3;
      n += 1;
      cout << n << " ";
    }
    else
    {
      n /= 2;
      cout << n << " ";
    }
  }
