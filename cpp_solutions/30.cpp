#include <iostream>
using namespace std;

int power(int x, int n){
	if(n == 1)
		return x;
	if(n == 0)
		return 1;

	if(n % 2)
		return x * power(x, n - 1);
	int re = power(x, n / 2);
	return re * re;
}
int ans;
int main(){
	for(int j = 10; j < 10000000; j++){
		int sum = 0;
		int x = j;
		while(x > 0){
			int d = x % 10;
			x /= 10;
			sum += power(d, 5);
		}
		if(sum == j){
			ans += j;
			cout << j << endl;
		}
	}
	cout << ans;
	return 0;
}
