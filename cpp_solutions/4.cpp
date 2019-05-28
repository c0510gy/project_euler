#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int ans;
string numtostr(int n){
    string ret = "";
    stack<int> stk;
    while(n){
        stk.push(n % 10);
        n /= 10;
    }
    while(!stk.empty()){
        ret += stk.top() + '0';
        stk.pop();
    }
    return ret;
}
int main(){
    for(int j = 100; j < 1000; j++){
        for(int i = 100; i < 1000; i++){
            int n = j * i;
            string str = numtostr(n);
            bool pos = true;
            int s = 0, e = str.size() - 1;
            while(s < e){
                if(str[s] != str[e])
                    pos = false;
                s++; e--;
            }
            if(pos){
                ans = max(ans, n);
            }
        }
    }
    cout << ans;
    return 0;
}
