#include <iostream>
using namespace std;

int ans;
int main(){
    for(ans = 1; ; ans++){
        bool pos = true;
        for(int j = 1; j <= 20; j++)
            if(ans % j){
                pos = false;
                break;
            }
        if(pos)
            break;
    }
    cout << ans;
    return 0;
}
