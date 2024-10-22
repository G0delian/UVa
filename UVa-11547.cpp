#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  scanf("%d", &tt);
  while (tt--) {
    int n;
    scanf("%d", &n);
    int ans = (n * 567 / 9 + 7492) * 235 / 47 - 498;
    printf("%d\n", abs(ans) / 10 % 10);
  }
  return 0;
}
