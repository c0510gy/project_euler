#include <iostream>
using namespace std;

typedef long long int lli;
lli ans;
int main(){
    for(lli k = 1; ; k++){
        ans += k;
        int cnt = 0;
        for(lli j = 1; j * j <= ans; j++){
            if(ans % j)
                continue;
            cnt += 2;
            if(j * j == ans)
                cnt--;
        }
        if(cnt >= 500)
            break;
    }
    cout << ans;
    return 0;
}
