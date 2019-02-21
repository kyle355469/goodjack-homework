#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct node {
	node *last;
	int num;
} typedef node;

node* newnode(int, node*);
node* pop(node*);
void output(node*);

int main() {
	int input;
	start:
	cout << "輸入一個數字 : ";
	node *tail = new node;
	cin >> tail->num;
	tail->last = NULL;
	cout << "push = 1 || pop = 2 || print = 3 || exit = 4 : ";
	while(true) {
		cout << endl << "請輸入模式 : ";
		int mode;
		cin >> mode;
		if (mode == 1) {
			cout << "請輸入欲新增的數字 : ";
			cin >> input;
			tail = newnode(input, tail);
		} else if (mode == 2) {
			if (tail == NULL) {
				cout << "內容為空！" ;
				int k;
				cout << "輸入 1 以繼續，輸入其他則結束 : ";
				cin >> k;
				if(k == 1){
					goto start;
				}else{
					goto byebye;
				}
			}
			tail = pop(tail);
		} else if (mode == 3) {
			if (tail == NULL) {
				cout << "內容為空！";
				int k;
				cout  << "輸入 1 以繼續，輸入其他則結束 : ";
				cin >> k;
				if(k == 1){
					goto start;
				}else{
					goto byebye;
				}
			}
			output(tail);
		}else if (mode == 4){
			byebye: 
			break;
		}
	}
	cout << "fin";
}

node* newnode(int input, node *tail) {
	node *newptr = new node;
	newptr->num = input;
	newptr->last = tail;
	return newptr;
}

node* pop(node *tail) {
	node *newhead = tail->last;
	delete tail;
	return newhead;
}

void output(node *tail) {
	node *now = tail;
	while(now->last != NULL) {
		cout << now->num << endl;
		now = now->last;
	}
	cout << now->num << endl;
}
