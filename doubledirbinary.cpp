#include <iostream>
#include <string>
#include <cstdlib>
typedef struct node{
    int data;
    node* up;
    node* left;
    node* right;
    
}node;

class Binary{
private:
    node* root;
    
public:
    Binary();
     ~Binary();
    node* getnode();
    bool addbranch(node* last);
    node* cleanfreestore(node* last);
    };
int main(){
    Binary Bin;
    node* top=Bin.getnode();
    Bin.addbranch(top);
   // Bin.cleanfreestore(top);
    return 0;
}
Binary::Binary(){
    root=new node;
    root->left=root->right=root->up=NULL;
}
node* Binary::getnode(){
    return root;
}

bool Binary::addbranch(node* last){
    try{
        std::cout<<"adding process left or right (L/R) or restart(RE) or quit: "<<std::endl;
        std::string choose;
        std::cin>>choose;
        if(choose=="L"){
            //left turn"
            if(last->left!=NULL){
                return addbranch(last->left);
            }else{
                std::cout<<"adding left"<<std::endl;
                node* temp;
                temp=new node;
                temp->right=temp->left=NULL;
                last->left=temp;
                temp->up=last;
                return addbranch(last->left);
            }
        }else if(choose=="R"){
            //right turn"
            if(last->right!=NULL){
                return addbranch(last->right);
            }else{
                std::cout<<"adding right"<<std::endl;
                node* temp;
                temp=new node;
                temp->right=temp->left=NULL;
                last->right=temp;
                temp->up=last;
                return addbranch(last->right);
            }
            
        }else if(choose=="RE"){
            return addbranch(root);
            
        }else{
            return true;
        }
    }catch(...){
        return false;
    }
    
    
    
    
}
node* Binary::cleanfreestore(node* last){
    if(last->left->left==NULL&&last->left->right==NULL){
        delete last->left;
        last->left=NULL;
    }else{
        cleanfreestore(last->left);
    }
    if(last->right->left==NULL&&last->right->right==NULL){
        delete last->right;
        last->right=NULL;
    }else{
        cleanfreestore(last->right);
    }
    if(last->up!=NULL){
        cleanfreestore(last->up);
    }
    return last;
    
}
Binary::~Binary(){

 }