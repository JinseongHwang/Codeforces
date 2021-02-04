#include <bits/stdc++.h>
using namespace std;

int main() {
	int M, N; // M: 가로, N: 세로
	scanf("%d %d", &M, &N);
	int result = 0;
	result += ((N / 2) * M);
	N %= 2;
	if (N) result += M / 2;
	printf("%d\n", result);

	return 0;
}