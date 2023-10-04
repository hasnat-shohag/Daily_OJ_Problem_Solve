#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#define ll long long
#define PI acos(-1.0)
#define F first
#define S second
#define pb push_back
#define debug(x); printf("debug%d\n",x);
#define des(x); printf("des:%s\n",x+1);
#define rep(f,t) for(int i=f;i<=t;i++)
const ll INF=0x3f3f3f3f3f3f3f3f;
const int inf=0x3f3f3f3f;
using namespace std;
int t, n, r;
int result[100]; 
int numberOfBest; 
int total;
struct Point 
{
    int x, y;
} points[10000]; 
int id[1000];
int maxLimit; 
int endResult; 
bool comparePoints(Point a, Point b) 
{
    return a.x * a.x + a.y * a.y > b.x * b.x + b.y * b.y;
}
int distance(Point a, Point b) 
{
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}
void findBest(int now, int count, int value) 
{
    if (now == n + 1)
    {
        if (numberOfBest >= value)
        {
            return;
        }
        for (int i = 1; i < now; i++)
        {
            result[i] = id[i];
        }
        numberOfBest = value;
        return;
    }
    for (int i = count; i <= maxLimit; i++)
    {
        int temp = value;
        id[now] = i;
        for (int j = 1; j < now; j++)
        {
            temp += distance(points[i], points[id[j]]);
        }
        findBest(now + 1, i, temp);
    }
}
int main()
{
    scanf("%d%d", &n, &r);
    int num = 0;
    for (int i = n; i <= n; i++)
    {
        for (int j = r; j <= r; j++)
        {
            numberOfBest = 0;
            total = 0;
            for (int xx = -j; xx <= j; xx++)
            {
                for (int yy = -j; yy <= j; yy++)
                {
                    if (xx * xx + yy * yy <= j * j)
                    {
                        points[++total].x = xx;
                        points[total].y = yy;
                    }
                }
            }
            sort(points + 1, points + 1 + total, comparePoints);
            if (i <= 3)
                maxLimit = min(total, 32);
            else
                maxLimit = min(total, 21);
            n = i;
            findBest(1, 1, 0);
            endResult = numberOfBest;
        }
    }
    return 0;
}