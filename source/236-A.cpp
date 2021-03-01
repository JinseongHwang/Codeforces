//
// Created by jinseonghwang on 21. 3. 1..
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string inp;
    cin >> inp;

    set<char> st;
    for (const char &c : inp) {
        st.insert(c);
    }

    static_cast<int>(st.size()) & 1 ?
    cout << "IGNORE HIM!" :
    cout << "CHAT WITH HER!";

    return 0;
}