#include <iostream>
using namespace std;

typedef long long int lli;
lli s1, s2 ,ans;
int main(){
    for(lli j = 1; j <= 100; j++){
        s1 += j * j;
        s2 += j;
    }
    s2 *= s2;
    ans = s2 - s1;
    cout << ans;
    return 0;
}
