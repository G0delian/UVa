#include <bits/stdc++.h>

using namespace std;

int main() {
  int caseNo = 0;
  string s;
  while (cin >> s, s != "*") {
    printf("Case %d: ", ++ caseNo);
    if (s == "Hajj") printf("Hajj-e-Akbar\n");
    else printf("Hajj-e-Asghar\n");
  }
  return 0;
}
