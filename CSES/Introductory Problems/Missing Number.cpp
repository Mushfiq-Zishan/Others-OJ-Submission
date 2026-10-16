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
  ll sum = 0;
  for (int i = 1; i < n; i++)
  {
    ll x;
    cin >> x;
    sum += x;
  }
  ll sum2 = n * (n + 1) / 2;
  cout << sum2 - sum << endl;
