#include <iostream>
using namespace std;

int ans, cs[8] = {1, 2, 5, 10, 20, 50, 100, 200};
void dfs(int j, int sum){
	if(sum > 200)
		return;
	if(j == 8){
		if(sum == 200)
			ans++;
		return;
	}
	for(int c = 0; c <= 200; c++)
		dfs(j + 1, sum + cs[j] * c);
}
int main(){
	dfs(0, 0);
	cout << ans;
	return 0;
}
