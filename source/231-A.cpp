#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, ans = 0;
	scanf("%d", &n);

	short P, V, T;
	while (n--) {
		scanf("%hd %hd %hd", &P, &V, &T);
		if (P + V + T >= 2) ans++;
	}
	printf("%d\n", ans);

	return 0;
}