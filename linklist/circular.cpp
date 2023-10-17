#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void InsertAtPo(node*tail,int keyAft,int data){
    if(tail == NULL){
        node*temp = new node(data);
        tail = temp;
        temp->next = temp;
    }
    else{
        node*curr = tail;

        while(curr->data != keyAft) {
            curr = curr->next;
        }
        node*temp = new node(data);
        temp->next = curr->next;
        curr->next = temp;

    }
}

void deletionOfNode(node*&tail,int data){
    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }
    else{
        node*prev = tail;
        node*curr = prev->next;

        while(curr->data != data){
            prev = curr;
            curr = curr->next;
        }

        if(curr == prev){
            tail = NULL;
        }

        else if(tail == curr ){
            
        }
    }
}

void print(node*tail){
    node*temp = tail;

        if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do{
        cout << tail->data <<" ";
        tail = tail->next;
    }
    while(tail != temp);

    cout << endl;
}

int main(){
    node*n1 = new node(10);
    node* tail = n1;
    print(tail);
    InsertAtPo(tail,10,20);
    print(tail);
}