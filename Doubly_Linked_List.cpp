#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *pre;

    Node(int d){
        this->data=d;
        this->next=NULL;
        this->pre=NULL;

    }
} ;

void printNode(Node* &head){

    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->" ;
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}

//for insertAtHead

void insertAtHead(Node* &head,int d){

    Node*temp=new Node(d);
    temp->next=head;
    head->pre=temp;
    head=temp;
}
//for insertAtTail
void insertAtTail(Node* &tail,int d){

    Node*temp=new Node(d);
    temp->pre=tail;
    tail->next=temp;
    tail=temp;

}

// insert at any position
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *nodeToinsert = new Node(d);

    nodeToinsert->next = temp->next;
    temp->next->pre = nodeToinsert;
    temp->next=nodeToinsert;
    nodeToinsert->pre=temp;
}

//delete the nodes

void deleteNode(int position, Node *&head)
{

    if (position == 1)
    {
        Node *temp = head;
        temp->next->pre = NULL;
        head = temp->next; // this is the every important line
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prepointer = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prepointer = curr;
            curr = curr->next;
            cnt++;
        }
         curr->pre=NULL;
        prepointer ->next = curr->next;
      //curr->next->pre=prepointer ->next ;
        curr->next = NULL;
       
        delete curr;
    }
}


int main(){
    Node*node1=new Node (10);
    Node*head=node1;
    Node*tail=node1;
    insertAtHead(head,20);
    insertAtHead(head,15);
  insertAtTail(tail,4);
insertAtTail(tail,5);

  insertAtTail(tail,8);
  insertAtPosition(tail,head,1,30);
  deleteNode(2,head);
    printNode(head);
}