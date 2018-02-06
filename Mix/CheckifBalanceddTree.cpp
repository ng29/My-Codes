#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node*left;
	struct node*right;
};
int check(node *root,int* ht){
	int lh=0,rh=0;
	int l=0,r=0;
	
	if(root==NULL){
		*ht=0;
		return 1;
	}
	l=check(root->left,&lh);
	r=check(root->right,&rh);
	
	if(lh-rh>=2 || rh-lh>=2)	return 0;
	else						return l&&r;
}
struct node* newNode(int data){
	node* bnode=new node;
	bnode->data=data;
	bnode->left=NULL;
	bnode->right=NULL;
	return bnode;
}
int main(){
	int ht=0;
	struct node *root = newNode(1);  
  		root->left = newNode(2);
  		root->right = newNode(3);
  		root->left->left = newNode(4);
  		root->left->right = newNode(5);
  		root->right->left = newNode(6);
  		root->left->left->left = newNode(7);
  		
  	if(check(root,&ht)==1)	cout<<"BALAnCED"<<endl;
  	else					cout<<"HAWWWWW"<<endl;
}
