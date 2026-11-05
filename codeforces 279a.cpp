#include<bits/stdc++.h>
using namespace std;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    int x, y, p = 0, q = 0; cin >> x >> y;
    if(x == 0 && y == 0) {
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; ; i++) {
        for(int j = 0; j < i / 2 + 1; j++) {
            p += dx[i % 4];
            q += dy[i % 4];
            if(x == p && y == q) {
                cout << i << endl;
                return 0;
            }
        }
    }
}