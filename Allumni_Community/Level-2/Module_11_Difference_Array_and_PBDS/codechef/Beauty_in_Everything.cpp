#include <bits/stdc++.h>
using namespace std;

struct DSU 
{
    vector<int> parent, size;
    DSU(int n): parent(n), size(n,1) 
    {
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int x) 
    {
        return parent[x] == x ? x : parent[x] = find(parent[x]);
    }
    void unite(int a, int b) 
    {
        a = find(a);
        b = find(b);
        if (a == b) return;
        if (size[a] < size[b]) swap(a,b);
        parent[b] = a;
        size[a] += size[b];
    }
};

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    vector<pair<int,int>> initial_points(k);
    vector<int> xs, ys;

    

    for (int i = 0; i < k; i++) 
    {
        cin >> initial_points[i].first >> initial_points[i].second;
        xs.push_back(initial_points[i].first);
        ys.push_back(initial_points[i].second);
    }

    sort(xs.begin(), xs.end());
    xs.erase(unique(xs.begin(), xs.end()), xs.end());
    sort(ys.begin(), ys.end());
    ys.erase(unique(ys.begin(), ys.end()), ys.end());

    int nx = xs.size();
    int ny = ys.size();
    DSU dsu(nx + ny);

    for (auto &p : initial_points) 
    {
        int xi = lower_bound(xs.begin(), xs.end(), p.first) - xs.begin();
        int yi = lower_bound(ys.begin(), ys.end(), p.second) - ys.begin();
        dsu.unite(xi, nx + yi);
    }

    vector<long long> cnt_row(nx+ny, 0), cnt_col(nx+ny, 0);

    for (int i = 0; i < nx; i++)
        cnt_row[dsu.find(i)]++;

    for (int j = 0; j < ny; j++)
        cnt_col[dsu.find(nx + j)]++;

    long long total = 0;
    for (int i = 0; i < nx + ny; i++) 
    {
        if (dsu.find(i) == i)
            total += cnt_row[i] * cnt_col[i];
    }

    cout << total << endl;
    return 0;
}
