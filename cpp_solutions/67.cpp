#include <iostream>
#include <algorithm>
#define MAXN 100
using namespace std;

int T[MAXN][MAXN], dp[MAXN][MAXN], ans;
int main(){
    for(int y = 0; y < MAXN; y++)
        for(int x = 0; x <= y; x++)
            cin >> T[y][x];
    dp[0][0] = T[0][0];
    for(int y = 1; y < MAXN; y++)
        for(int x = 0; x <= y; x++)
            for(int j = -1; j <= 0; j++){
                if(x + j < 0 || x + j > y - 1)
                    continue;
                dp[y][x] = max(dp[y][x], dp[y - 1][x + j] + T[y][x]);
            }
    for(int j = 0; j < MAXN; j++)
        ans = max(ans, dp[MAXN - 1][j]);
    cout << ans;
    return 0;
}
