#include <iostream>
#define MAXN 4000000
using namespace std;

int ans;
int main(){
    int a = 1, b = 2;
    ans = 2;
    while(true){
        int t = a + b;
        a = b;
        b = t;
        if(b > MAXN)
            break;
        if(b % 2 == 0)
            ans += b;
    }
    cout << ans;
    return 0;
}
