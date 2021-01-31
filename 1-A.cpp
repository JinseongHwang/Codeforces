#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll n, m, a;
	scanf("%lld %lld %lld", &n, &m, &a);

	ll paveN, paveM;
	// 나누어 떨어진다면 딱 맞게 덮고,
	// 나누어 떨어지지 않는다면 몫 + 1을 했을 경우 Square를 덮는 최소값이다.
	if (n % a == 0) paveN = n / a;
	else paveN = n / a + 1;

	if (m % a == 0) paveM = m / a;
	else paveM = m / a + 1;
	
	printf("%lld\n", paveN * paveM);

	return 0;
}