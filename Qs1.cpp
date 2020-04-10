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

    void Insertlast(int x){
        node *temp = new node;
        while(head!=NULL){
            temp ->link =NULL;
            head ->link =temp;
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
    create(20);
    create(30);
    create(40);
    create(50);
    Insertlast(50);
    Insertlast(60);
    display();
    return 0;
}

