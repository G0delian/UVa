#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  long long res = 0, val;

  cin >> tt;

  while (tt--) {
    string s;
    cin >> s;
    if (s == "donate") cin >> val, res += val;
    else cout << res << '\n';
  }
  return 0;
}
