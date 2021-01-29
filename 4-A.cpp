#include <bits/stdc++.h>
using namespace std;

int main() {
	int w; scanf("%d", &w);

	// (짝수 && 2보다 큰 값)을 만족하면 짝수 2개로 나눌 수 있다.
	if (!(w & 1) && w > 2) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}