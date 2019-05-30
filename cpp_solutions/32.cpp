#include <iostream>
#include <set>
using namespace std;

typedef long long int lli;
bool ispandigital(lli a, lli b, lli c){
    int cnt[10] = {0,};
    while(a){
        cnt[a % 10]++;
        a /= 10;
    }
    while(b){
        cnt[b % 10]++;
        b /= 10;
    }
    while(c){
        cnt[c % 10]++;
        c /= 10;
    }
    for(int j = 1; j < 10; j++)
        if(cnt[j] != 1)
            return false;
    return true;
}
lli ans;
set<lli> s;
int main(){
    for(lli a = 1; a <= 10000; a++){
        for(lli b = 1; b <= 10000 / a; b++)
            if(ispandigital(a, b, a * b))
                s.insert(a * b);
    }
    for(auto itr = s.begin(); itr != s.end(); itr++)
        ans += (*itr);
    cout << ans;
    return 0;
}
