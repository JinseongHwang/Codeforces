#include <bits/stdc++.h>
using namespace std;

const int MAX = 50;
int n, k, arr[MAX];

void solution1() { // O(lg n)
	int L = 0, R = n, zeroPos = n;
	while (L <= R) { // binary search
		int mid = (L + R) / 2;
		if (arr[mid] == 0) {
			zeroPos = mid;
			R = mid - 1;
		}
		else { // arr[mid] > 0
			L = mid + 1;
		}
	}

	L = 0, R = zeroPos;
	while (L < R) { // lower bound
		int mid = (L + R) / 2;
		if (arr[mid] < arr[k - 1]) R = mid;
		else L = mid + 1;
	}
	printf("%d\n", R >= 0 ? R : 0);
}

void solution2() { // O(n)
	k--; // 순서를 배열 인덱스화
	int ans = 0;
	if (arr[k]) {
		for (int i = k; i < n; i++) {
			if (arr[i] < arr[k]) {
				ans = i;
				break;
			}
		}
		// 작은 값을 하나도 찾지 못했다면 모두 같은 값이라는 의미
		if (!ans) ans = n;
	}
	else {
		for (int i = k; i >= 0; i--) {
			if (arr[i]) {
				ans = i + 1;
				break;
			}
		}
	}
	printf("%d\n", ans);
}

int main() {
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) scanf("%d", arr + i);

	solution1();
	// solution2();

	return 0;
}
/* 예상 반례
10 7
4 3 2 1 0 0 0 0 0 0
-> 4

6 5
5 4 3 2 1 0
-> 5

6 6
5 4 3 2 1 0
-> 5
*/