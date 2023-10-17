#include "bits/stdc++.h"
using namespace std;

    class node
    {
    public:
        int data;
        node *next;
        
        node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

void addElementInStart(node*&head,int data){
    node*temp = new node(data);
    temp->next = head;
    head = temp;
    
}
void addElementInLast(node*&tail,int data){
    node*temp = new node(data);
    tail->next = temp;
    tail = temp;
}


node* reverseToK(node*&head,int k){
    if(head == NULL){
        return NULL;
    }
    node*next = NULL;
    node*curr = head;
    node*prev = NULL;
    int cnt = 0;

    while(curr != NULL && cnt<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    if(next != NULL){
        head->next = reverseToK(next,k);
    }
    return prev;

}

void print(node*head){
    node*temp = head;
    while(temp != NULL){
        cout << temp->data <<"  ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    node*node1 =new node(69);

    node*head=node1;
    node*tail=node1;

    // addElementInStart(head,1);
    // addElementInStart(head,2);
    // addElementInStart(head,3);
    // addElementInStart(head,4);
    // addElementInStart(head,5);
    // addElementInStart(head,6);
    addElementInLast(tail,11);
    addElementInLast(tail,12);
    addElementInLast(tail,13);
    addElementInLast(tail,14);
    addElementInStart(head,6);

    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    head = reverseToK(head,2);
    print(head);
}