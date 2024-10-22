#include <bits/stdc++.h>

struct point {
  int x, y;
  point() { y = x = 0; }
  point( int _x, int _y ) : x(_x), y(_y) {}
};

int main() {
  int TC;
  while (scanf("%d", &TC), TC) {
    point division_point;
    scanf("%d%d", &division_point.x, &division_point.y);
    int q = TC;
    while (q--) {
      point p;
      scanf("%d%d", &p.x, &p.y);
      if (division_point.x == p.x || division_point.y == p.y) {
        printf("divisa");
      } else if (p.x > division_point.x && p.y > division_point.y) {
        printf("NE");
      } else if (p.x > division_point.x && p.y < division_point.y) {
        printf("SE");
      } else if (p.x < division_point.x && p.y > division_point.y) {
        printf("NO");
      } else if (p.x < division_point.x && p.y < division_point.y) {
        printf("SO");
      }
      printf("\n");
    }
  }

  return 0;
}

