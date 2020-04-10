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

void Insertmiddle(int x){
    struct node *new1;
    struct node *pred;
    if(new1->data<=head->data)
    {
        cout<<"Not Possible ";
    }
    else{
        while(head->data <= new1->data || head->link!=NULL)
        {
            pred=head;
            head=head->link;
        }
        new1->link=head->link;
        pred->link=new1;
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
    create(50);
    create(60);
    Insertmiddle(45);
    display();
    }
