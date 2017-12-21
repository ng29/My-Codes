#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
Node* Find(Node* root, int data){
	if(root==NULL)	return NULL;
	else if(root->data==data)	return root;
	else if(root->data<data)	return Find(root->right,data);
	else	return Find(root->left,data);
}

struct Node* Getsuccessor(struct Node* root, int data){
	//search -- o(h)
	struct Node* current=Find(root,data);
	if(current==NULL)
	return NULL;
	
	if(current->right!=NULL){
		Node* temp=current->right;
		while(temp->left!=NULL){
			temp=temp->left;
		}
		return root;
	}
	else{
		struct Node* suc=NULL;
		struct Node* anc=root;
		while(anc!=suc){
			if(current->data>anc->data){
				suc=anc;
				anc=anc->left;
			}
			else
				anc=anc->right;
		}
		return suc;
	}
}
void Inorder(Node* root){
	if(root==NULL)	return
	
		Inorder(root->left);
		cout<<root->data<<endl;
		Inorder(root->right);

}
Node* Insert(Node* root, int data){
	if(root==NULL){
		root=new Node();
		root->data=data;
		root->left=root->right=NULL;
	}
	else if(data<=root->data)	root->left=Insert(root->left,data);
	else if(data>root->data)	root->right=Insert(root->right,data);
}
int main(){
	Node* root=NULL;
	root = Insert(root,5); 
	root = Insert(root,10);
	root = Insert(root,3); 
	root = Insert(root,4); 
	root = Insert(root,1);
	 root = Insert(root,11);

	//Print Nodes in Inorder
	cout<<"Inorder Traversal: ";
	Inorder(root);
	cout<<"\n";

	// Find Inorder successor of some node. 
	struct Node* successor = Getsuccessor(root,1);
	if(successor == NULL) cout<<"No successor Found\n";
	else
    cout<<"Successor is "<<successor->data<<"\n";
}
