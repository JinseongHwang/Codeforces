//
// Created by jinseonghwang on 21. 3. 1..
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int sumX, sumY, sumZ;
    sumX = sumY = sumZ = 0;

    for (int x, y, z, i = 0; i < n; i++) {
        scanf("%d %d %d", &x, &y, &z);
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    !sumX && !sumY && !sumZ ?
    printf("YES") :
    printf("NO");

    return 0;
}