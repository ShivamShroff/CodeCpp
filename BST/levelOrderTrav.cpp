#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int key;
    Node*left;
    Node*right;

    Node(int data){
        key = data;
        left = NULL;
        right= NULL;
    }
};

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> key << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

int main(){
    Node*root = new Node(10);
    root -> left = new Node(20);
    root -> right =new Node(30);
    root -> left -> left = new Node(40);
    root -> left -> right = new Node(50);
    root -> right -> right = new Node(70);
    levelOrderTraversal(root);

    return 0;
}