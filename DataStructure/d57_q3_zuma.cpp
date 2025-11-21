#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, v;
    cin >> n >> k >> v;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // 1) แทรก v ที่ตำแหน่ง k
    a.insert(a.begin() + k, v);

    // 2) หา segment สีเดียวที่ติดกันรอบจุด k
    int L = k, R = k;

    // ไล่ซ้าย
    while (L - 1 >= 0 && a[L - 1] == v) L--;

    // ไล่ขวา
    while (R + 1 < a.size() && a[R + 1] == v) R++;

    int countSame = R - L + 1;

    // 3) ถ้าติดกัน >= 3 → ลบออก
    if (countSame >= 3) {
        a.erase(a.begin() + L, a.begin() + R + 1);
    }

    // 4) แสดงผล
    for (int x : a) cout << x << " ";
}
