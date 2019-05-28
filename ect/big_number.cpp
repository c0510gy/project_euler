#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

// 큰 수 문제가 자주 나오길래 매번 구현하기 귀찮아서 올려둠.

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
