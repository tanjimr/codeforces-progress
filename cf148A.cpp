#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int count = 0;

    int cycle = lcm(lcm(lcm(k, l), m), n);


    for(int i = 1; i <= cycle; i++)
        {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            count++;
    }

    count *= (d / cycle);
    int remainder = d % cycle;
    for(int i = 1; i <= remainder; i++) {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            count++;
    }

    cout << count;
}
