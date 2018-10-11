#include <iostream>

using namespace std;
int main(){
	while(1){
		int i;
		int time = 1;
		char check[10] = {};
		cin >> i >> check;
		int checkA;
		int ans = 0;
		int right = 0;
		while(time <= i){
			for(checkA = 0; checkA < 10; checkA++){
				if(check[checkA] == '\0'){
					break;
				}
			}
			//cout << i << " " << check;
			char word[100] = {};
			cin >> word;
			int wordA;
			for(wordA = 0; wordA < 100; wordA++){
				if(word[wordA] == '\0'){
					break;
				}
			}
			for(int listW = 0; listW < wordA; listW++){		
				if(word[listW] == check[0]){
					for(int listC = 0; listC < checkA; listC++){
						if(word[listW + listC] == check[listC]){
							right++;
						}else{
							continue;
						}
					}
					if(right == checkA){
						ans++;
						right = 0;
						break;
					}else{
						break;
					}
				}
			}
			time++;
		}
		cout << ans;
	}
	return 0;
}
