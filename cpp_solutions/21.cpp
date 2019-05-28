#include <iostream>
#include <map>
#define MAXN 10000
using namespace std;

int ans;
int d(int n){
    int ret = 0;
    for(int j = 1; j * j <= n; j++){
        if(n % j)
            continue;
        if(j * j == n)
            ret += j;
        else
            ret += j + n / j;
    }
    ret -= n;
    return ret;
}
int main(){
    for(int j = 1; j <= MAXN; j++){
        int v = d(j);
        if(v != j && j == d(v))
            ans += j;
    }
    cout << ans;
    return 0;
}
