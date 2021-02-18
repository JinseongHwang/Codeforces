//
// Created by jinseonghwang on 21. 2. 19..
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int xPosRow, xPosCol;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int input;
            scanf("%d", &input);
            if (input) {
                xPosRow = i;
                xPosCol = j;
            }
        }
    }

    printf("%d\n", abs(xPosRow - 3) + abs(xPosCol - 3));

    return 0;
}