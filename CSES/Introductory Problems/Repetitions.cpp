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
  string s;
  cin >> s;
  ll sum = 0;
  ll sum1 = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == s[i + 1])
    {
      sum1 += 1;
    }
    else
    {
      sum = max(sum1, sum);
      sum1 = 0;
    }
  }
  cout << sum+1 << endl;
