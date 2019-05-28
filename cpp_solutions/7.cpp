#include <iostream>
#include <vector>
#define MAXN 1000000
using namespace std;

int t = 10001;
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
    if(primes.size() >= t - 1)
        cout << primes[t - 1];
    else
        cout << "not found";
    return 0;
}
