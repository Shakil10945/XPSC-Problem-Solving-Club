#include <bits/stdc++.h>
using namespace std;

struct State
{
    long long pos;
    int phase;
    int dir;
    bool operator==(const State &o) const
    {
        return pos == o.pos && phase == o.phase && dir == o.dir;
    }
};

struct StateHash
{
    size_t operator()(const State &s) const noexcept
    {
        return ((s.pos * 37ULL + s.phase) << 1) ^ (s.dir == 1);
    }
};

bool simulate(long long start,
              const vector<long long> &pos,
              const vector<int> &delay,
              int k)
{
    unordered_set<State, StateHash> seen;
    State cur{start, 0, 1};
    seen.insert(cur);

    int n = (int)pos.size();

    while (true)
    {
        // standing on a light?
        auto it = lower_bound(pos.begin(), pos.end(), cur.pos);
        if (it != pos.end() && *it == cur.pos)
        {
            int idx = int(it - pos.begin());
            if (cur.phase == delay[idx])
            {
                cur.dir *= -1;
                cur.pos += cur.dir;
                cur.phase = (cur.phase + 1) % k;
                if (cur.pos < 0) return true;
                if (!seen.insert(cur).second) return false;
                continue;
            }
        }

        if (cur.dir == 1)
        {
            auto itNext = upper_bound(pos.begin(), pos.end(), cur.pos);
            if (itNext == pos.end()) return true;
            int idx = int(itNext - pos.begin());
            long long dist = pos[idx] - cur.pos;
            int arrPhase = (cur.phase + dist) % k;

            if (arrPhase == delay[idx])
            {
                cur.dir = -1;
                cur.pos = pos[idx] - 1;
            }
            else
            {
                cur.dir = 1;
                cur.pos = pos[idx] + 1;
            }
            cur.phase = (arrPhase + 1) % k;
        }
        else
        {
            auto itPrev = lower_bound(pos.begin(), pos.end(), cur.pos);
            if (itPrev == pos.begin()) return true;
            --itPrev;
            int idx = int(itPrev - pos.begin());
            long long dist = cur.pos - pos[idx];
            int arrPhase = (cur.phase + dist) % k;

            if (arrPhase == delay[idx])
            {
                cur.dir = 1;
                cur.pos = pos[idx] + 1;
            }
            else
            {
                cur.dir = -1;
                cur.pos = pos[idx] - 1;
            }
            cur.phase = (arrPhase + 1) % k;
        }

        if (cur.pos < 0) return true;
        if (!seen.insert(cur).second) return false;
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<long long> p(n);
    vector<int> d(n);
    for (int i = 0; i < n; ++i) cin >> p[i];
    for (int i = 0; i < n; ++i) cin >> d[i];

    vector<pair<long long, int>> v;
    v.reserve(n);
    for (int i = 0; i < n; ++i) v.push_back({p[i], d[i]});
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
    {
        p[i] = v[i].first;
        d[i] = v[i].second;
    }

    int q;
    cin >> q;
    while (q--)
    {
        long long s;
        cin >> s;
        cout << (simulate(s, p, d, k) ? "YES\n" : "NO\n");
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    if (!(cin >> tc)) return 0;
    while (tc--) solve();
    return 0;
}