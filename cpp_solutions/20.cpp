#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

typedef long long int lli;
string big_multi(string n1, string n2){
    string ret = "";
    vector<int> v;
    for(int j = n2.size() - 1; j >= 0; j--){
        for(int i = n1.size() - 1; i >= 0; i--){
            int idx = n1.size() - i - 1 + n2.size() - j - 1;
            while(v.size() <= idx)
                v.push_back(0);
            v[idx] += (n1[i] - '0') * (n2[j] - '0');
        }
        lli re = 0;
        for(int j = 0, cnt = v.size(); j < cnt; j++){
            v[j] += re;
            re = v[j] / 10;
            v[j] %= 10;
        }
        while(re){
            v.push_back(re % 10);
            re /= 10;
        }
    }
    for(int j = v.size() - 1; j >= 0; j--)
        ret += v[j] + '0';
    return ret;
}
string num = "1";
int ans;
int main(){
    for(int j = 1; j <= 100; j++){
        string n = "";
        stack<int> stk;
        for(int x = j; x; x /= 10)
            stk.push(x % 10);
        while(!stk.empty()){
            n += stk.top() + '0';
            stk.pop();
        }
        num = big_multi(num, n);
    }
    for(int j = 0, cnt = num.size(); j < cnt; j++)
        ans += num[j] - '0';
    cout << ans;
    return 0;
}
