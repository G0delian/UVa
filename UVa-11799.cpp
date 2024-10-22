	/**
	*    author:    inastranets
	*    created:   03.10.2024 22:19:09		
	**/
	#include <bits/stdc++.h>
	#define _GLIBCXX_DEBUG

	using namespace std;

	#if !defined(ONLINE_JUDGE)
	#include "algo_debug.hpp"
	#endif

	int main() {
		int TC;

		scanf("%d", &TC);

		for (int tt = 1; tt <= TC; ++ tt) {
			int n;

			cin >> n;

			int ans = 1;
			for (int i = 0; i < n; ++ i) {
				int c;
				cin >> c;
				ans = max(ans, c);
			}
			printf("Case %d: %d\n", tt, ans);
		}

		return 0;
	}	