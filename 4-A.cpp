#include <bits/stdc++.h>
using namespace std;

int main() {
	int w; scanf("%d", &w);

	// (¦�� && 2���� ū ��)�� �����ϸ� ¦�� 2���� ���� �� �ִ�.
	if (!(w & 1) && w > 2) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}