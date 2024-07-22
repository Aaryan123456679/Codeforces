#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

#define MAXN 200200
#define MAXM 200200

int n, m, k;
vector<int> arr(MAXN), brr(MAXN), drr(MAXM), buf(MAXN);

bool check() {
    for (int i = 0; i < n; ++i) {
        if (brr[i] == drr[m - 1])
            return true;
    }
    return false;
}

void build() {
    k = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != brr[i])
            buf[k++] = brr[i];
    }
    sort(buf.begin(), buf.begin() + k);
}

bool solve() {
    if (!check()) return false;
    sort(drr.begin(), drr.begin() + m);
    int ib = 0, id = 0;
    while (ib < k && id < m) {
        if (buf[ib] == drr[id])
            ++ib, ++id;
        else if (buf[ib] < drr[id])
            return false;
        else ++id;
    }
    return ib == k;
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        arr.resize(n);
        brr.resize(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        for (int i = 0; i < n; ++i)
            cin >> brr[i];
        cin >> m;
        drr.resize(m);
        for (int j = 0; j < m; ++j)
            cin >> drr[j];
        build();
        if (solve()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
