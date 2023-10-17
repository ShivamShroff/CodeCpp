#include<bits/stdc++.h>
#include<queue>
using namespace std;
class Node{
    public:
    int key;
    Node*left;
    Node*right;

    Node(int data){
        this-> key = data;
        left = NULL;
        right= NULL;
    }
};
bool searchINbst(Node*root,int x){

    Node*temp = root;

    while(temp != NULL){
       if(temp->key == x) {
            return true;
       }
       if(temp->key > x ){
          temp = temp->left;          
       }
       else{
           temp = temp ->right;
       } 
    }
    return false; 
    
}
int main(){
    Node*root = new Node(100);
    root -> left = new Node(80);
    root -> right =new Node(110);
    root -> left -> left = new Node(40);
    root -> left -> right = new Node(50);
    root -> right -> right = new Node(170);
    cout << searchINbst(root,170) << endl;
}