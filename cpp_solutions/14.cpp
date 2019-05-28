#include <iostream>
#include <map>
#define MAXN 1000000
using namespace std;

typedef long long int lli;
lli ans, ans_n;
map<lli, lli> dp;
lli get_chain(lli x){
    lli ret = 0;
    if(dp.find(x) != dp.end())
        return dp[x];
    ret++;
    if(x != 1){
        if(x % 2)
            ret += get_chain(3 * x + 1);
        else
            ret += get_chain(x / 2);
    }
    dp[x] = ret;
    return ret;
}
int main(){
    for(int j = 1; j <= MAXN; j++){
        lli c = get_chain(j);
        if(ans_n < c){
            ans = j;
            ans_n = c;
            cout << ans_n << endl;
        }
    }
    cout << ans;
    return 0;
}
