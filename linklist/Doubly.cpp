#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;
    

    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(node*&head,node*&tail,int d){

    //empty list
    if(head == NULL){
        node*temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node*temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(node*&head,node*&tail,int d){
    if(tail == NULL){
        node*temp = new node(d);
        tail = temp;
        head = temp;
    }
    else{
        node*temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertInMiddle(node*head,node*tail,int position,int value){

    if(position == 1){
        insertAtHead(head,tail,value);
        return;
    }

    node*temp = head;
    int cnt = 1;
    
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,head,value);
        return;
    }

    node*n2i = new node(value);
    n2i->next = temp->next;
    temp->next->prev = n2i;
    temp->next = n2i;
    n2i->prev = temp;

}

void print(node*head){
    node*temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void reversedList(node*&head,node*prev,node*curr){
    if(curr == NULL){
        head = prev;
        return;
    }
    node*forward = curr->next;
    reversedList(head,curr,forward);
    curr->next = prev;


}
node*RLL(node*&head){
    node*prev = NULL;
    node*curr = head;
    reversedList(head,prev,curr);
}

int main(){
    node*head = NULL;
    node*tail = NULL;

    insertAtHead(head,tail,12);
    insertAtTail(head,tail,22);
    insertAtTail(head,tail,32);
    insertAtTail(head,tail,42);

    
    print(head);

    RLL(head);

    print(head);
    return 0;

}
