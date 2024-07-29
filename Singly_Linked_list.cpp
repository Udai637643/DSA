#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
//create node constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
//delete node destructor
~Node(){
    int value=this->data;
    //memory free form here
    if(this->next !=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"memory free for the value:- "<<value<<endl;
}
    //
};

// Insert node//head is liye liya kyoyki pta chal sake new node kaha add kra he & isliye liya he taaki copy create na ho node ki
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// innsert at the head ke tail pr
void insertAtHeadTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    // tail = tail->next; same below
    tail = temp;
}

// insert at any position
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    if (position == 0)
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
    temp->next = nodeToinsert;
}

// delete Node

void deleteNode(int position, Node *&head)
{

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL; // this is the every important line
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *pre = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            pre = curr;
            curr = curr->next;
            cnt++;
        }
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

//check cycle is present or not
 bool detectLoop(Node* head){
    if(head==NULL){
        return true;

    }
    map<Node*,bool>visited;
    Node* temp=head;
    while(temp!=NULL){
            if(visited[temp]==true){
                cout<<"node is"<<temp->data<<endl;;
                return 1;
            }
            visited[temp]=true;
            temp=temp->next;
    }
    return false;
}

//loop is present or not using floy algo

Node* floyDetection(Node* head){
    if(head==NULL){
    return NULL;

    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
             fast=fast->next;
        }
        slow = slow->next;
        if(slow==fast){
            cout<<"this is the node where fast and slow are meet"<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

//get the intersection point 
Node* getintersection(Node* head){
    if(head==NULL)
    return NULL;
    Node* intersection=floyDetection(head);
    Node* slow=head;

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}


//remove the loop
void removeloop(Node* head){
    if(head==NULL){
        return ;
    }

    Node* inersection=getintersection(head);
    Node* temp=inersection;

    while(temp->next!=inersection){
        
        temp=temp->next;
         cout<<"temp go:-"<<temp->data<<endl;
    }
temp->next=NULL;
}
// for print all nodes
void printNodes(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    // creation of new node
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // point head to the node1
    Node *head = node1;
    Node *tail = node1;

    // insertAtHead(head,12);
    insertAtHeadTail(tail, 15);
    insertAtHeadTail(tail, 16);
    insertAtHeadTail(tail, 13);
     insertAtHeadTail(tail, 13);
      insertAtHeadTail(tail, 25);
       insertAtHeadTail(tail, 35);
        insertAtHeadTail(tail, 43);

    //insertAtPosition(tail, head, 3, 5);
    // printNodes(head);
    // deleteNode(5, head);
    // // printNodes(head);
    printNodes(head);

    tail->next=head->next->next;
    //printNodes(head);
    // if(detectLoop(head)){
    //     cout<<"Cycle is present"<<endl;
    // }
    // else{
    //     cout<<"Cycle is present"<<endl;
    // }

    if(floyDetection(head)){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is present"<<endl;
    }

    Node* loopstart = getintersection(head);

    cout<<"The loop start from the node:- "<<loopstart->data;
    removeloop(head);
    printNodes(head);

}