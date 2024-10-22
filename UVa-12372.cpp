#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt, caseNo = 0;
  scanf("%d", &tt);
  while (tt--) {
    int L, W, H;
    scanf("%d %d %d", &L, &W, &H);
    printf("Case %d: ", ++ caseNo);
    if (L <= 20 && W <= 20 && H <= 20) printf("good\n");
    else                               printf("bad\n");
  }
  return 0;
}
