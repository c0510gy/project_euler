#include <iostream>
using namespace std;

int ans;
bool is_leap(int year){
    if(year % 400 == 0 || (year % 4 == 0 && year % 100))
        return true;
    return false;
}
int main(){
    int d = 0;
    for(int j = 1; j <= 12; j++){
        if(j == 2){
            if(is_leap(1900))
                d += 29;
            else
                d += 28;
        }else if(j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
            d += 31;
        else
            d += 30;
    }
    for(int y = 1901; y <= 2000; y++){
        for(int j = 1; j <= 12; j++){
            if(d % 7 == 1)
                ans++;
            if(j == 2){
                if(is_leap(y))
                    d += 29;
                else
                    d += 28;
            }else if(j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                d += 31;
            else
                d += 30;
        }
    }
    cout << ans;
    return 0;
}
