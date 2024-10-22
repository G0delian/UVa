	/**
	*    author:    inastranets
	*    created:   03.10.2024 21:29:49		
	**/
	#include <bits/stdc++.h>
	#define _GLIBCXX_DEBUG

	using namespace std;

	#if !defined(ONLINE_JUDGE)
	#include "algo_debug.hpp"
	#endif

	int main() {
		int tt;
		
		cin >> tt;

		while (tt--) {
			int a, b;
			scanf("%d %d", &a, &b);
			if (a > b) {
				printf(">");
			} else if (a < b) {
				printf("<");
			} else {
				printf("=");
			}
			printf("\n");
		}

		return 0;
	}	