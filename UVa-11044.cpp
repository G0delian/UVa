#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  scanf("%d", &tt);
  while (tt--) {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", (n/3) * (m/3));
  }
  return 0;
}
