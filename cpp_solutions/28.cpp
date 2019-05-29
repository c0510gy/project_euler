#include <iostream>
#include <algorithm>
#define MAXN 1001
using namespace std;

int M[MAXN][MAXN], cnt, ans, dir[4][2] = {{0,1},{-1,0},{0,-1},{1,0}};
void get(){
	int x = MAXN / 2;
	int y = MAXN / 2;
	int c = 0, mc = 0, d = 3;
	while(cnt <= MAXN * MAXN){
		M[y][x] = ++cnt;
		if(c == mc){
			if(d == 3){
				x++; c = 1; mc += 2; d = 0;
				continue;
			}
			d++;
			x += dir[d][0];
			y += dir[d][1];
			c = 1;
		}else{
			x += dir[d][0];
			y += dir[d][1];
			c++;
		}
	}
}
int main(){
	get();
	for(int j = 0; j < MAXN; j++){
		ans += M[j][j];
		ans += M[j][MAXN - 1 - j];
	}
	ans -= M[MAXN / 2][MAXN / 2];
	cout << ans;
	return 0;
}
