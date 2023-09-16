#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int dx[] = { -1,0,0,1 };
int dy[] = { 0,-1,1,0 };
int ans = 0;
int a[25][25];
void check(int g, int h, int n) {
    a[g][h] = 1;
    ++ans;
    for (int i = 0; i < 4; i++) {
        int idx = g + dx[i];
        int idy = h + dy[i];
        if (idx >= 0 && idx < n && idy >= 0 && idy < n && a[idx][idy] == 0) {
            check(idx, idy, n);
        }
    }
}
int main() {
    int n, t, v; cin >> n >> t >> v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    t--; v--;
    check(t, v, n);
    cout << ans;

    return 0;
}
