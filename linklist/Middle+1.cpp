#include"bits/stdc++.h"
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
// int nodeLength(node*head){
//     node*temp = head;
//     int len = 0;
//     while(temp != NULL){
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// node*FindMiddle(node*&head){
//     int len = nodeLength(head);
//     int ans = len/2;
//     node*temp = head;

//     int cnt = 1;
//     while(cnt < ans){
//         temp = temp->next;
//         cnt++;
//     }
//     return temp;
    
// }

node*FindMiddle(node*head){
    //null and 1 node
    if(head == NULL || head->next == NULL)
    return head;

    //2
    if(head->next->next == NULL)
    return head->next;

    //more than 2
    node*fast = head->next;
    node*slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next;
        if(fast !=NULL)
        fast = fast->next;
        slow = slow->next;
    }
        return slow;
    } 

void print(node*head){
    node*temp = head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    node*node1 =new node(0);

    node*head=node1;
    node*tail=node1;
    addElementInStart(head,1);
    addElementInStart(head,2);
    addElementInStart(head,3);
    addElementInStart(head,4);
    addElementInStart(head,5);
    addElementInStart(head,2);
    addElementInStart(head,3);
    addElementInStart(head,4);
    addElementInStart(head,5);

    node*temp = FindMiddle(head);
    cout << "middle is = " << temp->data << endl;

}