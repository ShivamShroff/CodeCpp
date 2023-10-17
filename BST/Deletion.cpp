#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node*left;
    node*right;

    node(int d){
        this->data = d;
        left = NULL;
        right= NULL;
    }
};

void levelOrderTraversal(node* root) {
    if(root==NULL){
        return;
    }

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
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
node*insertTobst(node*&root,int d){
    //base case
    if(root == NULL){
        root = new node(d);
        return root;
    }

    if(root->data > d){
        root->left = insertTobst(root->left,d);
    }
    else{
        root->right = insertTobst(root->right,d);
    }

    return root;

}

void takeinput(node*&root){
    int data;
    cin >> data;

    while(data !=-1){
      root=insertTobst(root,data);
        cin >> data;
    }
}

//min value
node*MinVal(node*&root){
    node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}



node*deletation(node*&root,int d){
    if(root==NULL){
        return NULL;
    }


if(root->data==d){
        //0 child
    if(root->left==NULL && root->right==NULL){
    delete root;
    return NULL;
   }

        //1 child
//left child
    if(root->left!=NULL && root->right==NULL){
    node*temp=root->left;
    delete root;
    return temp;
   }
//right child
if(root->left==NULL && root->right!=NULL){
    node*temp=root->right;
    delete root;
    return temp;
}

        //2 child

        if(root->left!=NULL && root->right!=NULL){
            node*ans=MinVal(root->right);
            int min=ans->data;
            root->data=min;

            root->right=deletation(root->right, min);

            return root; 

        }
}
else if(root->data >d){
        root->right=deletation(root->right,d);
        return root;
}
else{
        root->left=deletation(root->left,d);
        return root;
}

}





int main(){

    node*root = NULL;

    cout << "enter data to create BST:" <<endl;
     takeinput(root);

    cout << "printing BST: "<< endl;
    levelOrderTraversal(root);

    cout<<endl<<endl;
    int d;
    cin>>d;
    
deletation(root,d);
 cout<<endl<<endl;
levelOrderTraversal(root);
    return 0;
}