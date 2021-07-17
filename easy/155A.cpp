#include <bits/stdc++.h>

using namespace std;

#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, k) for (int i = 0; i < k; i++)
#define RFOR(i, k) for (int i = k - 1; i >= 0; i--)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define EACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
#define print(t) cout << t
#define LL long long

int main()
{
    int n, arr[1001], min = 10000, a = 0, max = 0, b = 0;
    int c = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        if (max < arr[i])
        {
            max = arr[i];
            a += 1;
        }
        if (min > arr[i])
        {
            min = arr[i];
            b += 1;
        }
    }
    c = a + b - 2;

    if (a + b == n && max != min)
    {
        cout << (n - 1) << endl;
    }
    else
    {
        if (c < 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    return 0;
}