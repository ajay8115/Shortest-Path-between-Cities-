#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define forn for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rev(v) reverse(v.begin(), v.end());
#define kk '\n'
using namespace std;

int shortestPath(int x, int y)
{
    int cnt = 0;
    while (x != y and x >= 1 and y >= 1)
    {
        cnt++;
        if (x > y)
        {
            x /= 2;
        }
        else
        {
            y /= 2;
        }
    }

    return cnt;
}