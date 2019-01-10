#include <iostream>
using namespace std;

struct node{
	int num;
	node *next;
};
node* createNode(int);
node* push(node *ptr , int);
void printlist(node *head, node *ptr);

int main(){
	start:
	cout << "push = 1 || pop = 2 || print = 3 || exit = 4" << endl;
	int key;
	cout << "輸入一個數字 : ";
	cin >> key;
	node *head = createNode(key);
	node *ptr = head;
	printlist(head, ptr);
	int mode = 0;
	cout << "請輸入模式 : "; 
	while(cin >> mode){
		if(mode == 1){
			int addnum;
			cout << "請輸入欲新增的數字 : ";
			cin >> addnum;
			ptr = push(ptr, addnum);
		}else if(mode == 2){
			node *newhead = head->next;
			head = newhead;	
			if(head == NULL){
				cout << "內容為空！" << endl ;
				
			}
		}
		else if(mode == 3){
			printlist(head, ptr);
		}
		else if(mode == 4){
			break;
		}
		if(head == NULL){
			goto start;
		}
		cout << "請輸入模式 : "; 
	}
	cout << "fin";
	
	
}

node* createNode(int num){
	node *head = new node;
	head->num = num;
	head->next = NULL;
	return head;
}

node* push(node *ptr, int num){
	node *newNode = new node;
    newNode->num = num;
    newNode->next = NULL;
    ptr->next = newNode;
    ptr = ptr->next;
    return ptr;
}

void printlist(node *head, node *ptr){
	ptr = head;
	cout << "queue 內容 : ";
	while(ptr != NULL){
		cout << ptr->num << " ";
		ptr = ptr->next;
	}
	cout << endl;
}
