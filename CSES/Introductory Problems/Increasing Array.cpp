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
  vector<ll> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  ll diff = 0;
  for (int i = 1; i < n; i++)
  {
    if (v[i] < v[i - 1])
    {
      diff += (v[i - 1] - v[i]);
      v[i] = v[i - 1];
    }
  }
  cout << diff << endl;
