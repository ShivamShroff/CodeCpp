#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
   // node*pre;
    node(int data){
        this->data=data;
        this->next=NULL;
       // pre=NULL;
    }
    ~node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
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
//1st way

// node* ReverseList(node*head){
//     //when node is single or null
//     if( head==NULL || head->next==NULL ){
//         return head;
//     }
//     node*phle = NULL;
//     node*av = head;    
//     node*forward = NULL;

//     while(av != NULL){
//         forward = av->next;
//         av->next = phle;
//         //now incrementing prev and curr
//         phle = av;
//         av = forward;
//     }
//     return phle;
// }

//2ND WAY

void reVersed(node*&head,node*prev,node*curr){
    //base condition
    if(curr == NULL){
        head = prev;
        return;
    }
    node*forward = curr->next;

    reVersed(head,curr,forward);

    curr->next = prev;   
}
node*RLL(node*&head){
    node*prev = NULL;
    node*curr = head;
    reVersed(head,prev,curr);
    return head;
}

// 3RD WAY

// node*reversedList(node*&head){
//     if(head == NULL || head->next == NULL){
//         return head;
//     }

//     node*chotuHead = reversedList(head->next);

//     head->next->next = head;
//     head = NULL;
//     return chotuHead;
// }

// node*RLL(node*&head){
// head =reversedList(head);
// return head;
// }


    

void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtPosition(node*head,node*tail,int data,int position){
    if(position == 1){
        addElementInStart(head,data);
        return;
    }

    node*temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;  //at cnt 1 it will gone to 2nd position and at cnt 2 at 3rd
        cnt++;
    }

    if(temp->next == NULL){
        addElementInLast(tail,data);
        return;
    }

    node*N2I = new node(data);
    N2I->next = temp->next;
    temp->next = N2I;
}

void deleteANode(node*&head,node*&tail,int position){
    if(position == 1){
        node*temp = head;
        head = head->next;         //head ke next ko head bna rhe
        tail=tail->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node*curr = head;
        node*prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;

            
        }
        prev->next = curr->next;
            curr->next = NULL;
            delete curr;

    }
}


int main(){
    node*node1 =new node(0);

    node*head=node1;
    node*tail=node1;
    addElementInStart(head,1);
    addElementInStart(head,2);
    addElementInStart(head,3);
    // addElementInStart(head,4);
    // addElementInStart(head,5);
    // addElementInStart(head,7);

    // addElementInLast(tail,6);

    // insertAtPosition(head,tail,9,5);
    print(head);

    RLL(head);

    // deleteANode(head,tail,1);
    // cout << "head is" << head->data <<" ";
    // cout << "tail is" << tail->data <<" ";
    // cout<<endl;
    print(head);
    // // head = RLL(head);
    // // print(head);
    // return 0;
}



