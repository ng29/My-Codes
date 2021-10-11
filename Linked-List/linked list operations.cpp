#include <bits/stdc++.h>
using namespace std;

class node{
	public:
	
	int data;
	node* next;
	
	node(int val){
		data= val;
		next = NULL;
	}
};

void insertAtHead(node* &head, int val){
	node* n = new node(val);
	n->next= head;
	head = n;
	
}
void Delete(node* &head ,int val){
	if(head=NULL){
		return;
	}
	if(head->next = NULL){
		return deleteAtHead(head);
	}
	
	node* temp= head;
	while(temp->next->data != val){
		temp = temp->next;
	}
	node* todelete = temp->next;
	temp->next = temp->next->next;
	delete todelete;
	
}



void insertAtTail(node* &head, int val){
	
	node* n = new node(val);
	
	if(head==NULL){
		head =n;
		return;
	}
	
	node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = n;
	
	
}

void display(node* head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

void deleteATHead{
	
	node* todelete = head;
	head = head->next;
	delete todelete;
}



int main(){
	node* head =NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	display(head);
	cout<<endl;
	Delete(head, 3);
	display(head);
	cout<<end l;
	dleteAtHead(head);
	display(head)

	
	return 0;
}
