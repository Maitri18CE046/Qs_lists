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

    void Deletefirst(int x){    //function for delete first node
    if(head==NULL){             //check if the head is NULL or not
        cout<<"No node"<<endl;
    }
    else{
        head = head ->link;     //if not NULL then it is first node
    }
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
    create(60);             //create node and insert 60
    create(50);
    create(50);
    create(40);
    create(30);
    create(20);
    Deletefirst(60);        //delete at first so list become 30 40 50 50 60
    Deletefirst(50);        //after this 40 50 50 60
    display();              //display whole list
    }
