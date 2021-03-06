#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cerr << #x << " : " << x << '\n'

const int INF = 1e9;
const int MOD = 1e9 + 7;
const LL LINF = 1e16;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans = 1;
  int N;
  cin >> N;

  if (N >= 2) {
    ans = 2;
  }
  if (N >= 4) {
    ans = 4;
  }
  if (N >= 8) {
    ans = 8;
  }
  if (N >= 16) {
    ans = 16;
  }
  if (N >= 32) {
    ans = 32;
  }
  if (N >= 64) {
    ans = 64;
  }

  cout << ans << '\n';

  return 0;
}