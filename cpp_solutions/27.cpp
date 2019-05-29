#include <iostream>
using namespace std;

bool is_prime(int n){
	if(n <= 1)
		return false;
	bool ret = true;
	for(int j = 2; j * j <= n; j++){
		if(!(n % j)){
			ret = false;
			break;
		}
	}
	return ret;
}
int get_f(int n, int a, int b){
	return n * n + a * n + b;
}
int ans, ans_n;
int main(){
	for(int a = -999; a < 1000; a++){
		for(int b = -1000; b <= 1000; b++){
			int cnt = 0;
			for(int j = 0; ; j++){
				if(is_prime(get_f(j, a, b))){
					cnt++;
				}else
					break;
			}
			if(ans_n < cnt){
				ans_n = cnt;
				ans = a * b;
				cout << cnt << endl;
			}
		}
	}
	cout << ans;
	return 0;
}
