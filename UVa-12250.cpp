#include <bits/stdc++.h>

using namespace std;

int main() {
  int caseNo = 0;
  string word;
  while (getline(cin, word), word != "#") {
    printf("Case %d: ", ++caseNo);
    if (word == "HELLO") { 
      printf("ENGLISH\n"); 
    } else if (word == "HOLA") {
      printf("SPANISH\n");
    } else if (word == "HALLO") {
      printf("GERMAN\n");
    } else if (word == "BONJOUR") {
      printf("FRENCH\n");
    } else if (word == "CIAO") {
      printf("ITALIAN\n");
    } else if (word == "ZDRAVSTVUJTE") {
      printf("RUSSIAN\n");
    } else {
      printf("UNKNOWN\n");
    }
  }
  return 0;
}
