#include <iostream>
using namespace std;
#include <cstdlib>
class node{
	public:
		int data;
		node *next;
		
};
node *start =NULL;
void insert(int info){
	node *temp;
	temp =new node();
	temp -> data =info;
	temp-> next = start;
	start= temp;
	 
}
void display(){
	node *ptr;
	ptr = start;
	while(ptr!= NULL){
		cout<< ptr->data <<" ";
		ptr= ptr->next;
	}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	insert(2);
	insert(10);
	insert(15);
	insert(20);
	cout<<"linked list:"<<endl;
	display();
	return 0;
}