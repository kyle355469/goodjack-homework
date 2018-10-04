#include <iostream>
#include <math.h>

using namespace std;
int main(){
	int jump = 1;
	int x_point = 0;
	int y_point = 0;
	int through[100];
	for(int k = 0; k < 100; k++){
		through[k] = 0;	
	}
	through[0] = 1;
	cin >> x_point;
	cin >> y_point;
	int x_check = 0;
	int y_check = 0;
	int time = 0;
	for(int i = 1; i < 100; i++){
		if(x_check - i >= 0){
			if(through[x_check - i]== 0){
				x_check -= i;
				through[x_check] = 1;
			}else if(through[x_check + i] == 0){
				x_check += i;
				through[x_check] = 1;
			}
		}else if(x_check - i <= 0){
			if(through[x_check + i] == 0){
				x_check += i;
				through[x_check] = 1;
			}else if(through[x_check - i]== 0){
				x_check -= i;
				through[x_check] = 1;
			}
		}
		time += 1;
		if(x_check == x_point){
			cout << time;
			break;
		}
		
		
	}
	
	
	return 0;
}


	/*	float range = float(i / 2);
		float x2 = float(pow(x_point - i, 2));
		float y2 = float(pow(y_point, 2));		
		if((x2 + y2) == range){
			cout << time << endl;
			break;
		}	*/
		 
		 	 
	/*	float range = float(i / 2);
		float x2 = float(pow(x_point - i, 2));
		float y2 = float(pow(y_point, 2));		
		if((x2 + y2) == range){
			cout << time << endl;
			break;
		}	*/
		 
