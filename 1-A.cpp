#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll n, m, a;
	scanf("%lld %lld %lld", &n, &m, &a);

	ll paveN, paveM;
	// ������ �������ٸ� �� �°� ����,
	// ������ �������� �ʴ´ٸ� �� + 1�� ���� ��� Square�� ���� �ּҰ��̴�.
	if (n % a == 0) paveN = n / a;
	else paveN = n / a + 1;

	if (m % a == 0) paveM = m / a;
	else paveM = m / a + 1;
	
	printf("%lld\n", paveN * paveM);

	return 0;
}