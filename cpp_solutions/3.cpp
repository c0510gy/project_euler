#include <iostream>
using namespace std;

typedef long long int lli;
lli N = 600851475143, ans;
int main(){
    for(lli j = 2; j * j <= N; j++){
        while(N % j == 0)
            N /= j;
    }
    cout << N;
    return 0;
}
