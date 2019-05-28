#include <iostream>
#include <vector>
#define MAXN 2000000
using namespace std;

typedef long long int lli;
lli ans;
bool V[MAXN + 1];
vector<int> primes;
void get_primes(){
    for(int j = 2; j <= MAXN; j++){
        if(V[j])
            continue;
        primes.push_back(j);
        for(int i = 2; i * j <= MAXN; i++)
            V[i * j] = true;
    }
}
int main(){
    get_primes();
    for(int j = 0, cnt = primes.size(); j < cnt; j++)
        ans += primes[j];
    cout << ans;
    return 0;
}
