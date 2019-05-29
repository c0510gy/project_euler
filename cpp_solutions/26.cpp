#include <iostream>
#include <vector>
#include <map>
using namespace std;

int get(int n){
	map<int, int> m;
	int rm = 1, ret = 0;
	for(int j = 0; rm > 0; j++){
		rm %= n;
		if(m.find(rm) != m.end()){
			ret = j - m[rm];
			break;
		}
		m[rm] = j;
		rm *= 10;
	}
	return ret;
}
int ans, ans_n;
int main(){
	for(int j = 2; j < 1000; j++){
		int d = get(j);
		if(ans_n < d){
			ans = j;
			ans_n = d;
		}
	}
	cout << ans;
	return 0;
}
