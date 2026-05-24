#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> v(2 * n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n; i++)
            cin >> v[n + i];

        sort(v.begin(), v.end());

        cout << v[n - 1] << '\n';
    }

    return 0;
}