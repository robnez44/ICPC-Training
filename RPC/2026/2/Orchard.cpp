#include <bits/stdc++.h>
using namespace std;

struct Point {
    long double x, y;
};

static const long double EPS = 1e-12L;
static const long double PI = acosl(-1.0L);

long double cross(long double ax, long double ay, long double bx, long double by) {
    return ax * by - ay * bx;
}

long double dist(const Point& a, const Point& b) {
    long double dx = a.x - b.x;
    long double dy = a.y - b.y;
    return sqrtl(dx * dx + dy * dy);
}

long double lnC(int n, int r, const vector<long double>& lf) {
    if (r < 0 || r > n) return -1e100L;
    return lf[n] - lf[r] - lf[n - r];
}

bool allCollinear(const vector<Point>& p) {
    int n = (int)p.size();
    if (n <= 2) return true;

    int j = -1;
    for (int i = 1; i < n; i++) {
        if (fabsl(p[i].x - p[0].x) > EPS || fabsl(p[i].y - p[0].y) > EPS) {
            j = i;
            break;
        }
    }
    if (j == -1) return true;

    long double vx = p[j].x - p[0].x;
    long double vy = p[j].y - p[0].y;
    for (int i = 1; i < n; i++) {
        long double wx = p[i].x - p[0].x;
        long double wy = p[i].y - p[0].y;
        if (fabsl(cross(vx, vy, wx, wy)) > EPS) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    long double d;
    cin >> n >> k >> d;

    vector<Point> p(n);
    for (int i = 0; i < n; i++) cin >> p[i].x >> p[i].y;

    vector<long double> lf(n + 1, 0.0L);
    for (int i = 1; i <= n; i++) lf[i] = lf[i - 1] + logl((long double)i);

    long double expectedCenterPerimeter = 0.0L;
    int t = k - 2;
    long double lnDen = lnC(n, k, lf);

    if (k >= 2) {
        if (allCollinear(p)) {
            int a = 0, b = 1;
            while (b < n && fabsl(p[b].x - p[a].x) <= EPS && fabsl(p[b].y - p[a].y) <= EPS) b++;

            long double vx = p[b].x - p[a].x;
            long double vy = p[b].y - p[a].y;
            long double norm = sqrtl(vx * vx + vy * vy);
            vx /= norm;
            vy /= norm;

            vector<long double> s(n);
            for (int i = 0; i < n; i++) s[i] = p[i].x * vx + p[i].y * vy;
            sort(s.begin(), s.end());

            long double expectedSpan = 0.0L;
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    int inside = j - i - 1;
                    if (inside < t) continue;
                    long double prob = expl(lnC(inside, t, lf) - lnDen);
                    expectedSpan += (s[j] - s[i]) * prob;
                }
            }
            expectedCenterPerimeter = 2.0L * expectedSpan;
        } else {
            vector<vector<int>> leftCnt(n, vector<int>(n, 0));

            for (int i = 0; i < n; i++) {
                struct Node {
                    long double ang, dx, dy;
                    int idx;
                };

                vector<Node> v;
                v.reserve(n - 1);

                for (int j = 0; j < n; j++) {
                    if (j == i) continue;
                    long double dx = p[j].x - p[i].x;
                    long double dy = p[j].y - p[i].y;
                    v.push_back({atan2l(dy, dx), dx, dy, j});
                }

                sort(v.begin(), v.end(), [](const Node& a, const Node& b) {
                    if (fabsl(a.ang - b.ang) > EPS) return a.ang < b.ang;
                    if (fabsl(a.dx - b.dx) > EPS) return a.dx < b.dx;
                    return a.dy < b.dy;
                });

                int m = (int)v.size();
                vector<Node> w = v;
                w.insert(w.end(), v.begin(), v.end());

                int r = 1;
                for (int l = 0; l < m; l++) {
                    if (r < l + 1) r = l + 1;
                    while (r < l + m) {
                        long double c = cross(w[l].dx, w[l].dy, w[r].dx, w[r].dy);
                        if (c > EPS) r++;
                        else break;
                    }
                    leftCnt[i][w[l].idx] = r - l - 1;
                }
            }

            long double ans = 0.0L;
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    int L = leftCnt[i][j];
                    int R = leftCnt[j][i];

                    long double prob = 0.0L;
                    if (L >= t) prob += expl(lnC(L, t, lf) - lnDen);
                    if (R >= t) prob += expl(lnC(R, t, lf) - lnDen);

                    ans += dist(p[i], p[j]) * prob;
                }
            }

            expectedCenterPerimeter = ans;
        }
    }

    long double expectedFence = expectedCenterPerimeter + PI * d;
    cout << fixed << setprecision(10) << (double)expectedFence << "\n";
    return 0;
}