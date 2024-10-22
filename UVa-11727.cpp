#include <bits/stdc++.h>

using namespace std;

int main() {
  int TC, caseNo = 0;

  scanf("%d", &TC);

  while (TC--) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("Case %d: %d\n", ++caseNo, a+b+c - min(a,min(b,c)) - max(a,max(b,c)));
  }
  return 0;
}
