#include<iostream>
#include<cstdlib>
using namespace std;

// A linked list node
struct node{
    int data;
    struct node *link;
};

struct node *head=NULL;     //global declaration
    void create(int x)      //function for create node
    {
        struct node* ptr=(struct node*)malloc(sizeof(struct node));     //allocate node
        ptr ->data=x;       //put in the data
        ptr ->link=head;    //make link of new node as head
        head = ptr;         //assign head to pointer
    }

    void Deletemiddle(int x){ //function for delete middle node of list
    if(head==NULL){           //check if the head is NULL or not
        cout<<"No node"<<endl;
    }
    struct node *prev = head;
    struct node *next = head;
    struct node *pre;

    while(next!=NULL && next->link!=NULL){  //check whether chosen node is not last node
        next = next->link->link;
        pre = prev;                         //assign data in middle node
        prev = prev->link;                  //assign address in middle node
    }
    pre->link=prev->link;                   //which address given to middle assign to it's previous node
    delete prev;                            //delete middle node
    }

    void display(){             //function for display the list
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
    Deletemiddle(40);       //result should be 20 30 50 50 60
    display();              //display whole list
    }
