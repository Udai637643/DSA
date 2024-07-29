#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;

    }
};

void insertNode(Node* &tail,int element,int d){
    if(tail==NULL){
        Node *temp=new Node(d);
        tail=temp;
        temp->next=temp;

    }
    else{
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;

        }
        Node * temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deletNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        Node* prepoint=tail;
        Node* currpoint=prepoint->next;

        while(currpoint->data!=value){
            prepoint=currpoint;
            currpoint=currpoint->next;
        }
        prepoint->next=currpoint->next;

if(currpoint==prepoint){
    tail=NULL; 
}

        //for >=2 Node have in the list
      else if(tail==currpoint){
            tail=prepoint;
        }
        currpoint->next=NULL;
        delete currpoint;
    }
}

bool iscircular(Node* head){
    if(head==NULL){
        return true;
    }

    Node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;

    }
    if(temp==head){
        return true;

    }
    return false;
}
void print(Node *tail){
    Node *temp=tail;

    if(tail==NULL){
        cout<<"the list is empty"<<endl;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

bool detectLoop(Node* head){
    if(head==NULL){
        return true;

    }
    map<Node*,bool>visited;
    Node* temp=head;
    while(temp!=NULL){
            if(visited[temp]==true){
                return 1;
            }
            visited[temp]=true;
            temp=temp->next;
    }
    return false;
}
int main(){

    Node* tail=NULL;
    insertNode(tail,1,5);
    //print(tail);
     insertNode(tail,5,6);
     print(tail);
    //   insertNode(tail,6,9);
    //  print(tail);
    //   insertNode(tail,9,10);
    //  print(tail);
    //   insertNode(tail,10,16);
    //  print(tail);
    //  deletNode(tail,9);
    //  cout<<"after delete the Node"<<endl;
    //   print(tail);
     // deletNode(tail,5);
     //cout<<"after delete the Node"<<endl;

      //print(tail);
      if(iscircular(tail)){
        cout<<"this is circular "<<endl;
      }
      else{
         cout<<"this is not circular "<<endl;
      }


 if(detectLoop(tail)){
        cout<<"this is cycle present "<<endl;
      }
      else{
         cout<<"this is not cycle present "<<endl;
      }



    return 0;
}