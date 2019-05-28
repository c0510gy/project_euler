#include <iostream>
using namespace std;

typedef long long int lli;
lli dp[21][21];
int main(){
    dp[0][0] = 1;
    for(int y = 0; y < 21; y++){
        for(int x = 0; x < 21; x++){
            if(x - 1 >= 0)
                dp[y][x] += dp[y][x - 1];
            if(y - 1 >= 0)
                dp[y][x] += dp[y - 1][x];
        }
    }
    cout << dp[20][20];
    return 0;
}
