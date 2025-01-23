#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n); 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int l = -1, r = n, m;
    int x = 6; // The target value to find

    while (r > l + 1) {
        m = (l + r) / 2;
        if (v[m] >= x) {
            r = m;
        } else {
            l = m;
        }
    }

    if (r < n && v[r] >= x) {
        cout << r; // Print the index of the smallest element >= x
    } else {
        cout << "Not Found"; // If no such element exists
    }

    return 0;
}
