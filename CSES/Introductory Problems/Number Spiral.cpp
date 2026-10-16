#include <bits/stdc++.h>
using namespace std;
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define endl '\n'
#define int long long
using ll = long long;
 
void solve()
{
  int row, column;
  cin >> row >> column;
  if (row <= column)
  {
    if (column % 2 != 0)
    {
      cout << (column * column) - (row - 1) << endl;
    }
    else
    {
      cout << ((column - 1) * (column - 1)) + row << endl;
    }
  }
  else
  {
    if (row % 2 != 0)
    {
      cout << ((row - 1) * (row - 1)) + column << endl;
    }
    else
    {
      cout << (row * row) - (column - 1) << endl;
    }
  }
}
signed main()
{
  optimize();
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    solve();
  }
}
