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
  if (n == 2 || n == 3)
  {
    cout << "NO SOLUTION" << endl;
  }
  else if (n % 2 == 0)
  {
    for (int i = 2; i <= n; i += 2)
    {
      cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2)
    {
      cout << i << " ";
    }
  }
  else
  {
    for (int i = 1; i <= n; i += 2)
    {
      cout << i << " ";
    }
    for (int i = 2; i <= n; i += 2)
    {
      cout << i << " ";
    }
  }
}
