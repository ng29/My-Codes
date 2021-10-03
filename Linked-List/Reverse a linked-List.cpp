

//Algorithm for Reversing a Linked list;

#include <iostream>
using namespace std;

//creating nodes for linked list//
struct node{
int val;
node* next;
node(int n)
{
  val = n;
  next = NULL;
}
};

//Function to insert or Link other nodes in linked-list; 
void insert(int data,node* head)
{
    node* newnode = new node(data);
    while(head->next!=NULL)
    {
        head = head->next;
    }
    head->next = newnode;
    newnode->next = NULL;
}

//Function to display Linked-list;
void display(node* head)
{
      while(head!=NULL)
    {
        cout<<head->val<<" ";
        head = head->next;
    }    
}
//Function which reverse a linked-list by changing pointers;

node* reverse(node* head)
{
    node* curr = head;
    node* prev = NULL;
    while(curr!=NULL)
    {
        node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main()
{
  node* head = new node(1); //Creating head node or starting node you can also take inputs from user;
  head->next = NULL;

  //Adding some more nodes at the end of linked-list by insert Function ;
  insert(2,head);
  insert(3,head);
  insert(4,head);
  insert(5,head);

//linked-list before reverse function = 1->2->3->4->5->null;

  node* ans  = reverse(head);//reverse function will return new head of reversed linked list;
//linked-list after reverse function  = 5->4->3->2->1->null;

 display(ans);

  return 0;
}