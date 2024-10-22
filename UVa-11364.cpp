#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  scanf("%d", &tt);
  while (tt--) {
    int n;
    scanf("%d", &n);
    int lo = 100, hi = 0;
    for (int i = 0; i < n; ++ i) {
      int pos;
      scanf("%d", &pos);
      lo = min (lo, pos);
      hi = max (hi, pos);
    }
    printf("%d\n", (hi-lo) * 2);
  }
  return 0;
}
