#include <iostream>
#include <string>
#include <stack>
using namespace std;

string big_sum(string n1, string n2){
    string ret = "";
    stack<int> stk1, stk2, stk;
    for(int j = 0, cnt = n1.size(); j < cnt; j++)
        stk1.push(n1[j] - '0');
    for(int j = 0, cnt = n2.size(); j < cnt; j++)
        stk2.push(n2[j] - '0');
    int re = 0;
    while(!stk1.empty() || !stk2.empty()){
        if(!stk1.empty()){
            re += stk1.top();
            stk1.pop();
        }
        if(!stk2.empty()){
            re += stk2.top();
            stk2.pop();
        }
        stk.push(re % 10);
        re /= 10;
    }
    while(re){
        stk.push(re % 10);
        re /= 10;
    }
    while(!stk.empty()){
        ret += stk.top() + '0';
        stk.pop();
    }
    return ret;
}
int ans;
int main(){
    string a = "1", b = "1";
    for(ans = 3; ; ans++){
        string t = big_sum(a, b);
        a = b;
        b = t;
        if(t.size() == 1000)
            break;
    }
    cout << ans;
    return 0;
}
