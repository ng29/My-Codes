#include<bits/stdc++.h>
using namespace std;


struct Node{
	int data;
	Node* next;
};
struct Node* head;  //globally

void Insert(int x){
	Node* temp=new Node();
	temp->data=x;
	temp->next=head;
	head=temp;
}
void Print(){
	Node* temp=head;
	cout<<"List is ";
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	head=NULL;   //empty list
	cout<<"How mamy nos"<<endl;
	int n,i,x;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		Insert(x);
		Print();
	}
}
