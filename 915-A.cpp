#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; scanf("%d %d", &n, &k);

	int maxBucketSize = 0; // ������ �� �ִ� Bucket �� ���� ū ũ��
	for (int input, i = 0; i < n; i++) {
		scanf("%d", &input); // Bucket ũ�� �Է�
		// �Է¹��� Bucket�� ũ�Ⱑ k�� ����� ��� && maxBucketSize�� �Է¹��� Bucket�� ũ�⺸�� ���� �� ����
		if (k % input == 0 && maxBucketSize < input) {
			maxBucketSize = input;
		}
	}

	printf("%d\n", k / maxBucketSize); // ���

	return 0;
}