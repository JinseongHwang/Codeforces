#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; scanf("%d %d", &n, &k);

	int maxBucketSize = 0; // 선택할 수 있는 Bucket 중 가장 큰 크기
	for (int input, i = 0; i < n; i++) {
		scanf("%d", &input); // Bucket 크기 입력
		// 입력받은 Bucket의 크기가 k의 약수인 경우 && maxBucketSize가 입력받은 Bucket의 크기보다 작을 때 갱신
		if (k % input == 0 && maxBucketSize < input) {
			maxBucketSize = input;
		}
	}

	printf("%d\n", k / maxBucketSize); // 출력

	return 0;
}