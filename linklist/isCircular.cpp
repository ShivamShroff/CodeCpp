#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next = NULL;

    node(int d){
        data = d;
        next = NULL;
    }
 };

bool isCircular(node*head){
    //if only one node there
    if(head == NULL){
        return true;
    }
    node*temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == NULL){
        return false;
    }
        return true;
}


node* insertAtTail(node*tail,int p){
    node*newNode = new node(p);

    if(tail == NULL){

        tail = newNode;  //temp ko tail bnaya ja rh h guys
        tail->next = newNode;

    }

    else{
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
    return tail;

}

void print(node*tail){
    node*temp = tail;

    if(tail == NULL ){
        cout<<"list is empty"<<" ";
    }
    do{
        cout << temp->data <<" ";
        temp = temp->next;
    }
    while(temp != tail);
    cout << endl;
}


int main(){
    node*tail = new node(1);
    insertAtTail(tail,15);
    insertAtTail(tail,15);
    print(tail);

    if(isCircular(tail)){
        cout << "circular hai!"<< " ";
    }
        cout << "nahi hai!"<< " ";


}