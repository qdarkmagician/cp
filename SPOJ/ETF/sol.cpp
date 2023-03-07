#include <bits/stdc++.h>

using namespace std;

const int NMAX = 1e6;

vector<int> phi;

void solve(int n) {
  phi[0] = 0;
  phi[1] = 1;
  for (int i = 2; i <= n; i++)
    phi[i] = i - 1;

  for (int i = 2; i <= n; i++)
    for (int j = 2 * i; j <= n; j += i)
      phi[j] -= phi[i];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  phi = vector<int>(NMAX + 1);
  solve(NMAX);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    cout << phi[n] << '\n';
  }

  return 0;
}
