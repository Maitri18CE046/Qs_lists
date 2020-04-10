#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
    int data;
    struct node *link;
};
struct node *head=NULL;
    void create(int x)
    {
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr ->data=x;
        ptr ->link=head;
        head = ptr;
    }

    void Deletefirst(int x){
    if(head==NULL){
        cout<<"No node"<<endl;
    }
    else{
        head = head ->link;
    }
    }

    void display(){
            struct node* ptr;
            ptr = head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->link;
        }
        }

    int main(){
    create(60);
    create(50);
    create(50);
    create(40);
    create(30);
    create(20);
    Deletefirst(60);
    Deletefirst(50);
    display();
    }
