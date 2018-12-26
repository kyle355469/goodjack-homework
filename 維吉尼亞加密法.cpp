#include <iostream>
#include <string>
#include <cstring>
#define PL password.length()
#define KL key.length()
using namespace std;

int shift(char c)
{
   if(c >= 'A' && c <= 'Z'){
   		return c - 'A';
   }else if(c >= 'a' && c <= 'z'){
   		return c - 'a';
   }else{
   		return c;
   }
}

int main(){
	cout << "維吉尼亞加密法" << endl << "明文 : "; 
	string password;
	string key;
	char put;
	
	while(put = cin.get()){
		if(put == '\n'){
			break;
		}else{
			password += put;
		}
	}
	cout << "密鑰 : "; 
	char pass[PL];
	strcpy(pass, password.c_str());
	/*for(int i = 0; i < PL; i++){
		cout << pass[i];
	}*/
	
	while(put = cin.get()){
		if(put == '\n'){
			break;
		}else{
			key += put;
		}
	}
	//cout << key;
	char numkey[KL] = {0};
	
	int check = 0;
	char c[KL];
	strcpy(c, key.c_str());
	//判斷密鑰是否有空白 
	for(int i = 0; i < KL ; i++){
		if(c[i] >= '0' && c[i] <= '9'){
			check = 1;
			break;
		}if(c[i] == ' '){
			check = 2;
			break;
		}
	}

	if(check == 0){
		int point = 0; 
		for(int i = 0; i < KL; i++){//key陣列到第幾個數字 
			//cout << c[i] << " ";
			numkey[i] = (int)shift(c[i]);
			//cout << numkey[i];
		}
		/*for(int i = 0; i < KL; i++){
			cout << numkey[i] << " ";
		}*/
		
		//加密 
		for(int i = 0; i < PL; i++){
			if(pass[i] >= 'a' && pass[i] <= 'z' ){
				if((pass[i] + numkey[point]) > 'z'){
					pass[i] += numkey[point];
					pass[i] -= 26; 
				}else{
					pass[i] += numkey[point];
				}		
				point++;
				if(point >= KL){
					point = 0; 
				}
			}else if(pass[i] >= 'A' && pass[i] <= 'Z'){
				if((pass[i] + numkey[point]) > 'Z'){
					pass[i] += numkey[point];
					pass[i] -= 26; 
				}else{
					pass[i] += numkey[point];
				}
				point++;
				if(point >= KL){
					point = 0; 
				}
			}else{
				continue;
			}
		}
		cout << "密文 : ";
		for(int i = 0; i < PL ; i++){
			cout << pass[i];
		} 
	}else if(check == 1){
		cout << "錯誤：密鑰不能包含數字";
	}else if(check == 2){
		cout << "錯誤：密鑰不能多於一組單詞";
	}
	return 0;
} 
