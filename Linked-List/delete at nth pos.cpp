#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
};
struct Node* head;
void Insert(int data){
	Node* temp=new Node();
	temp->data=data;
	temp->next=head;
	head=temp;
}
void Print(){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
}
void Delete(int n){
	Node*temp= head;
	if(n==1){
		head=temp->next;
		delete temp;
		return;
	}
	for(int i=0;i<n-2;i++){
		temp=temp->next;
		Node*temp1=new Node();
		temp1=temp->next;
		temp->next=temp1->next;
		delete temp1;
	}
}
int main(){
	head=NULL;
	Insert(2);
	Insert(3);
	Insert(4);
	Insert(5);
	Print();
	Delete(3);
	Print();
}
