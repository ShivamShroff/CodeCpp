#include "bits/stdc++.h"
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;

    node(int d){
        this->data = d;
        next = NULL;
    }
};

void ReverseList(node*head){
    node*prev = NULL;
    node*curr = head;    
    node*next = NULL;
    //when node is single or null
    if(curr->next!=NULL && curr==NULL){
        return;
    }

    while(curr != NULL){
        node*forward = curr->next;
        curr->next = prev;
        //now incrementing prev and curr
        prev = curr;
        curr = forward;
    }
}

int main(){
}