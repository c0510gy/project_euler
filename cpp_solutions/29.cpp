#include <iostream>
#include <set>
#include <map>
using namespace std;

set<map<int, int>> cnt;
void add(int a, int b){
	map<int, int> fac;
	for(int j = 2; a > 1; j++){
		if(a % j)
			continue;
		int c = 0;
		while(a % j == 0){
			c++;
			a /= j;
		}
		fac[j] = c * b;
	}
	cnt.insert(fac);
}
int main(){
	for(int a = 2; a <= 100; a++)
		for(int b = 2; b <= 100; b++)
			add(a, b);
	cout << cnt.size();
	return 0;
}
