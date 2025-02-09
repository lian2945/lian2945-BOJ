#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
    int from, to, weight;
    bool operator<(const Point& point) const {
        return weight < point.weight;
    }
};

int find(int x, vector<int>& parent)
{
    if(parent[x] != x)
        parent[x] = find(parent[x], parent);
    return parent[x];
}

bool unionSet(int x, int y, vector<int>& parent)
{
    int parentX = find(x, parent);
    int parentY = find(y, parent);
    if(parentX == parentY) return false;
    
    parent[parentY] = parentX;
    
    return true;
}

int kruskal(int n, vector<Point>& points)
{
    sort(points.begin(), points.end());
    vector<int> parent(n);
    for(int i = 1; i < n; i++)
    {
        parent[i] = i;
    }
    vector<Point> mst;
    int result = 0;
    
    for(const auto& point : points)
    {
        if(unionSet(point.from, point.to, parent))
        {
            mst.push_back(point);
            result += point.weight;
            if(mst.size() == n - 1) break;
        }
    }
    
    return result;
}

int main()
{
    int n, m;
    int a, b, c;
    cin >> n >> m;
    vector<Point> points;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        Point p({a, b, c});
        points.push_back(p);
    }
    cout << kruskal(n+1, points);
    return 0;
}