#include <iostream>
#include <string>
#include <cstdlib>
typedef struct node{
    int data;
    node* left;
    node* right;
    
}node;

class Binary{
private:
    node* root;
    
public:
    Binary();
   // ~Binary();
    node* getnode();
    bool construct(node* last);// true left, false right
    bool addbranch(node* last);
    node* cleanfreestore(node* last);
    /*class Iterator{
    private:
        node store;
        node* spide[3];
    public:
        output();
    }*/
    
};
int main(){
    Binary Bin;
    node* top=Bin.getnode();
    Bin.construct(top);
    Bin.addbranch(top);
   // Bin.cleanfreestore(top);
    return 0;
}
Binary::Binary(){
    root=new node;
    root->left=root->right=NULL;
}
node* Binary::getnode(){
    return root;
}
bool Binary::construct(node* last){
    try{
    node* temp;
    temp=new node;
    temp->right=temp->left=NULL;
    std::cout<<"left or right (L/R) or restart(RE) or quit: "<<std::endl;
    std::string choose;
    std::cin>>choose;
    if(choose=="L"){
        //left turn
        if(last->left!=NULL){
            std::cout<<"left is not empty, are you sure you want to overwrite this branch? (y/n): ";
            std::string str;
            std::cin>>str;
            if(str=="y"){
                last->left=temp;
            }else{
                std::cout<<"exit or turn right? (R/e): ";
                std::cin>>str;
                if(str=="R"){
                    last->right=temp;
                }else{
                    //return temp;
                }
            }
        }else{
            last->left=temp;
        }
        return construct(temp);
    }else if(choose=="R"){
        //right turn
        if(last->right!=NULL){
            std::cout<<"right is not empty, are you sure you want to overwrite this branch? (y/n): ";
            std::string str;
            std::cin>>str;
            if(str=="y"){
                last->right=temp;
            }else{
                std::cout<<"exit or turn left? (L/e): ";
                std::cin>>str;
                if(str=="L"){
                    last->left=temp;
                }else{
                    //return temp;
                }
            }
        }else{
            last->right=temp;
        }
        return construct(temp);
    }else if(choose=="RE"){
        return construct(root);
    }else{
        return true;
    }
    }catch(...){
        return false;
    }
    

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
    if(last->left=NULL&&last->right=NULL){
        delete last;
        last->up->left=NULL;
        return last->up;
    }else{
        if(cleanfreestore(last->left)->left!=NULL){
            delete cleanfreestore(last->left);
            return last;
        }else{
            delete cleanfreestore(last->right);
            return last;
        }
    }

}
/*Binary::~Binary(){
    cleanfreestore();
}*/