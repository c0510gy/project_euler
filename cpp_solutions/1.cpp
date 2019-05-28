#include <iostream>
using namespace std;

int N = 1000, ans;
int main(){
    for(int j = 1; j < N; j++){
        if(j % 3 == 0 || j % 5 == 0)
            ans += j;
    }
    cout << ans;
    return 0;
}
