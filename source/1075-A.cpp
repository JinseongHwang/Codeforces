#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> Coord;

const char* W = "White";
const char* B = "Black";

int main() {
	ll n; scanf("%lld", &n);
	Coord coin; scanf("%lld %lld", &coin.first, &coin.second);

	if (coin.first == 1 && coin.second == 1) {
		printf("%s\n", W);
		return 0;
	}
	if (coin.first == n && coin.second == n) {
		printf("%s\n", B);
		return 0;
	}
	
	ll WCnt = 0, BCnt = 0;

	ll mn = min(coin.first, coin.second);
	ll mx = max(coin.first, coin.second);
	
	// White King �̵�
	WCnt += mn - 1; // �밢�� �̵�
	WCnt += mx - mn; // �������� �̵�

	// Black King �̵�
	BCnt += n - mx; // �밢�� �̵�
	BCnt += mx - mn; // �������� �̵�

	printf("%s\n", WCnt <= BCnt ? W : B);

	return 0;
}