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

    void Deletemiddle(int x){
    if(head==NULL){
        cout<<"No node"<<endl;
    }
    struct node *prev = head;
    struct node *next = head;
    struct node *pre;

    while(next!=NULL && next->link!=NULL){
        next = next->link->link;
        pre = prev;
        prev = prev->link;
    }
    pre->link=prev->link;
    delete prev;
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
    create(20);
    create(30);
    create(40);
    create(50);
    create(50);
    create(60);
    Deletemiddle(40);
    display();
    }
