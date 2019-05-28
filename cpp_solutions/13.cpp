#include <iostream>
#include <string>
#include <stack>
using namespace std;

string ans = "0";
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
int main(){
    for(int j = 0; j < 100; j++){
        string n; cin >> n;
        ans = big_sum(ans, n);
    }
    for(int j = 0; j < 10; j++)
        cout << ans[j];
    return 0;
}
