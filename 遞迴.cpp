#include <iostream> 
#include <math.h>
#include <stdlib.h>
using namespace std; 
int total(int x);
int main() { 
	int num;
	cin >> num;
	int ans;
	ans = total(num);
	cout << ans;
}
int total(int x){
	if(x / 10 >= 1){
		return total(x / 10) + total(x % 10);
	}else{
		return x % 10;
	}
}
