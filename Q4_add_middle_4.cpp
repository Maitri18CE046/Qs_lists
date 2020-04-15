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

void Insertmiddle(int x){   //function for insert middle
    struct node *new1;
    struct node *pred;
    if(new1->data<=head->data) //if condition is true that mean new node can be first node
    {
        cout<<"Not Possible ";
    }
    else{
        while(head->data <= new1->data || head->link!=NULL)
        {
            pred=head;        //data assign to new pred node
            head=head->link;
        }
        new1->link=head->link; //address assign to new node
        pred->link=new1;       //data assign to new node
    }
}

void display(){                 //function for display the list
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
    Insertmiddle(45);       //result should be 20 30 40 45 50 50 60
    display();              //display whole list
    }
