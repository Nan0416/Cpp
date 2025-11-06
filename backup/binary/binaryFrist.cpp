/* binary tree */
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
typedef struct node{
    int data;
    node* up;
    node* left;
    node* right;
    
} node;
/* with the number of data, complete binary tree, repeated data only save once */
node* create(int data,node* point);
/* output */
node* output(node* point);
/* artifical binary tree */
node* artifical();
/* delete_in_output */
node* delete_output(node* point);
/* delete */
node* delete_(node* point);
int main(){
   /* initilize the root node*/
    node* root;
    root=new node;
    root->data=0;
    root->up=root->left=root->right=NULL;
    /* create binary tree */
    cout<<"enter (press 0 to exit): ";
    int h;
    cin>>h;
    while (h!=0){
        create(h,root);
        cout<<"enter (press 0 to exit): ";
        //int h  very dangerous!!!
        cin>>h;
    }
   //node* root;
    //root=artifical();
    output(root);
    cout<<"\n";
    delete_(root);
    cout<<"\n";
    return 0;

}
node* create(int data,node* point){
    if(data==point->data){
        cout<<"exsited"<<endl;
        return point;
    }else if(data<point->data){
        if(point->left==NULL){
            node* temp= new node;
            temp->data=data;
            temp->up=point;
            point->left=temp;
            temp->left=temp->right=NULL;
            cout<<"success"<<endl;
            return temp;
        }else{
            return create(data,point->left);
        }
        
    }else{
        if(point->right==NULL){
            node* temp= new node;
            temp->data=data;
            temp->up=point;
            point->right=temp;
            temp->left=temp->right=NULL;
            cout<<"success"<<endl;
            return temp;
        }else{
            return create(data,point->right);
        }
        
    }
}

node* output(node* point){
    /* basic condition */
    node* temp;
    if(point->left==NULL&&point->right==NULL){
        cout<<point->data<<" ";
        return point->up;
    }else{
        if(point->left!=NULL){
            
            cout<<output(point->left)->data<<" ";// left first in, then do (output)
        }
        if(point->right!=NULL){
            if(point->left==NULL){ // if it has left, first in, then do, cannot do directly
                cout<<point->data<<" ";
                /* don't touch central point, it belongs to left work*/
                
            } // right first do
            temp=output(point->right); // then in;
            // if only in don't need return
        }
        return point->up;
        
    }
    
}
node* delete_output(node* point){
    /* basic condition */
    node* temp;
    if(point->left==NULL&&point->right==NULL){
        cout<<point->data<<" ";
        return point->up;
    }else{
        if(point->left!=NULL){
            
            temp=delete_output(point->left);
            /* avoid repeated output(delete) */
            if(temp->right==NULL||temp->left==NULL){
                cout<<temp->data<<" ";
            }
        }
        if(point->right!=NULL){
        
            cout<<delete_output(point->right)->data<<" ";

        }
        return point->up;
        
    }
    
}


node* delete_(node* point){
    /* basic condition */
    node* temp;
    node* temp2,temp3;
    if(point->left==NULL&&point->right==NULL){
        if(point->up->left!=NULL){// first delete left
            point->up->left=NULL;
            temp=point->up;
            cout<<point->data<<" ";
            delete point;
        }else{
            point->up->right=NULL;
            temp=point->up;
            cout<<point->data<<" ";
            delete point;
        }
        return temp;
    }else{
        if(point->left!=NULL){
            
            temp=delete_(point->left);// first in
            /* avoid repeated delete */
            if(temp->right==NULL){
                cout<<temp->data<<" ";
                delete temp;
            }
        }
        if(point->right!=NULL){
            temp2=delete_(point->right);
            cout<<temp2->data<<" ";
            delete temp2;
        }
        return point->up;
    }
}

node* artifical(){
    node * root =new node;
    root->data=0;
    root->left=new node;
    root->left->data=-2;
    root->left->up=root;
    root->left->left=new node;
    root->left->left->data=-3;
    root->left->left->up=root->left;
    root->left->left->left=NULL;
    root->left->left->right=NULL;
    root->left->right=new node;
    root->left->right->data=-1;
    root->left->right->up=root->left;
    root->left->right->left=root->left->right->right=NULL;
    root->right=new node;
    root->right->data=2;
    root->right->up=root;
    root->right->left=new node;
    root->right->left->data=1;
    root->right->left->up=root->right;
    root->right->left->left=root->right->left->right=NULL;
    root->right->right=new node;
    root->right->right->data=3;
    root->right->right->up=root->right;
    root->right->right->left=root->right->right->right=NULL;
    return root;
    
}