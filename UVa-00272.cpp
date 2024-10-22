#include <bits/stdc++.h>

using namespace std;

int main() {
  string text;
  bool end = false;
  while (getline(cin, text)) {
    for (int i = 0; i < (int) text.size(); ++ i) {
      if (text[i] == '\"'  && !end) {
        printf("``");
        end = true;
      } else if (text[i] == '\"' && end) {
        printf("''");
        end = false;
      } else {
        printf("%c", text[i]);
      }
    }
    printf("\n");
  }
  return 0;    
}
