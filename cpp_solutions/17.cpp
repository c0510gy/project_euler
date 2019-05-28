#include <iostream>
using namespace std;

///one,two,three,four,five,six,seven,eight,nine,ten
///eleven,twelve,thirteen,fourteen,fifteen,sixteen,seventeen
///eighteen,nineteen
int fd[20] = {0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
///twenty,thirty,forty,fifty,sixty,seventy,
///eighty,ninety
int sd[10] = {0,0,6,6,5,5,5,7,6,6};
///hundred
int td = 7;
/// thousand
int ftd = 8;
int ans;
int main(){
    for(int j = 1; j <= 1000; j++){
        int x = j;
        while(x){
            if(x <= 19){
                ans += fd[x];
                x = 0;
            }else if(x < 100){
                ans += sd[x / 10];
                x %= 10;
            }else if(x < 1000){
                ans += fd[x / 100] + td;
                x %= 100;
                if(x)
                    ans += 3;
            }else if(x == 1000){
                ans += 3 + ftd;
                x = 0;
            }
        }
    }
    cout << ans;
    return 0;
}
