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

    void Insertlast(int x){  //function for insert new node at the last
        node *temp = new node;
        while(head!=NULL){   //check if the head is NULL or not
            temp ->link =NULL;//make link of new node as next of head
            head ->link =temp;//move the link of head as new node
        }
    }

        void display(){       //function for display the list
            struct node* ptr;
            ptr = head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->link;
        }
        }

int main(){
    create(20);     //create node and insert 20
    create(30);     //create node and insert 30 so list become 20 30
    create(40);
    create(50);
    Insertlast(50); //insert at last so list become 20 30 40 50 50
    Insertlast(60);
    display();      //display whole list
    return 0;
}

