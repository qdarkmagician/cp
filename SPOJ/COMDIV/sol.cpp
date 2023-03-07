#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a%b) : a;
}

int numdiv(int n) {
  int cnt = 0;
  for (int i = 1; i*i <= n; i++) {
    if (n%i == 0) {
      if (n/i == i)
        cnt++;
      else
        cnt += 2;
    }
  }

  return cnt;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int a, b; cin >> a >> b;
    cout << numdiv(gcd(a, b)) << '\n';
  }

  return 0;
}
