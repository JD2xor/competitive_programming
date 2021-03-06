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

  LL ans = -1;
  int N;
  cin >> N;

  vector<int> a(N + 1);
  FOR(i, 1, N + 1) { cin >> a[i]; }

  int now = 1;
  FOR(i, 1, N + 1) {
    now = a[now];

    if (now == 2) {
      ans = i;
      break;
    }
  }

  cout << ans << '\n';

  return 0;
}