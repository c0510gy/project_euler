#include <iostream>
#include <algorithm>
#define MAXN 20
using namespace std;

int M[MAXN][MAXN], ans, dir[4][2] = {{1,0},{0,1},{1,1},{1,-1}};
int main(){
    for(int y = 0; y < MAXN; y++)
        for(int x = 0; x < MAXN; x++)
            cin >> M[y][x];
    for(int y = 0; y < MAXN; y++){
        for(int x = 0; x < MAXN; x++){
            for(int j = 0; j < 4; j++){
                int ret = 1;
                int x_ = x;
                int y_ = y;
                for(int k = 0; k < 4; k++){
                    if(x_ < 0 || y_ < 0 || x_ >= MAXN || y_ >= MAXN)
                        break;
                    ret *= M[y_][x_];
                    x_ += dir[j][0];
                    y_ += dir[j][1];
                    if(k == 3)
                        ans = max(ans, ret);
                }
            }
        }
    }
    cout << ans;
    return 0;
}
