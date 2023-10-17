#include<bits/stdc++.h>
#include<queue>
using namespace std;
class node{
    public:
    int key;
    node*left;
    node*right;

    node(int data){
        this-> key = data;
        left = NULL;
        right= NULL;
    }
};



node* buildTree(node* &root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }
    if(root->key > data)
        cout << "Enter data for inserting in left of " << data << endl;
        root->left = buildTree(root->left);
    
        if(root->key < data)
        cout << "Enter data for inserting in right of " << data << endl;
        root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
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
   node*root;

   buildTree(root);
   cout<<endl;
   levelOrderTraversal(root);
   cout<<endl;
   
   cout << "printing the BST: "<< endl;
   levelOrderTraversal(root);
   return 0;
}

