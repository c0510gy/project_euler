  #include <iostream>
#include <vector>
#define MAXN 28123
using namespace std;

int get_d(int n){
    int ret = 0;
    for(int j = 1; j * j <= n; j++){
        if(n % j)
            continue;
        if(j * j == n)
            ret += j;
        else
            ret += j + n / j;
    }
    ret -= n;
    return ret;
}
vector<int> abd;
bool V[MAXN + 1];
int ans;
int main(){
    for(int j = 1; j <= MAXN; j++)
        if(get_d(j) > j)
            abd.push_back(j);
    for(int j = 0, cnt = abd.size(); j < cnt; j++){
        for(int i = 0; i < cnt; i++){
            int n = abd[j] + abd[i];
            if(n <= MAXN)
                V[n] = true;
        }
    }
    for(int j = 1; j <= MAXN; j++)
        if(!V[j])
            ans += j;
    cout << ans;
    return 0;
}
