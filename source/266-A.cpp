//
// Created by jinseonghwang on 21. 3. 1..
//

#include <bits/stdc++.h>

using namespace std;

const int MAX = 50;

int main() {
    int n;
    scanf("%d", &n);

    getchar();

    char color[MAX] = {0,};
    for (int i = 0; i < n; i++) scanf("%c", color + i);

    char lastColor = color[0];
    int result = 0;
    for (int i = 1; i < n; i++) {
        if (color[i] == lastColor) {
            result++;
        } else {
            lastColor = color[i];
        }
    }

    printf("%d", result);

    return 0;
}