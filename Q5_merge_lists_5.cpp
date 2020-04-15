#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

// A linked list node
struct node{
    int data;
    struct node *link;
};

struct node *head=NULL;     //global declaration
    void create(node **head,int x)  //function for create node
    {
        struct node* ptr=(struct node*)malloc(sizeof(struct node));     //allocate node
        ptr ->data=x;           //put in the data
        ptr ->link=(*head);     //make link of new node as head
        (*head) = ptr;          //assign head to pointer
    }

    void display(node *head){   //function for display the list
            node* ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->link;
        }
        }

    void merge1(node *first,node **second){     //function for merge two lists
        node *fir = first;                      //take one temporary pointer
        while(fir->link!=NULL){
            fir=fir->link;
        }
        fir->link=*second;                      //merge second list with first list
    }

    int main(){
    node *first=NULL;                           //both list are NULL at first
    node *second=NULL;
    create(&first,3);                           //create node for first list
    create(&first,3);
    create(&first,2);
    cout<<"first list:"<<endl;
    display(first);                             //result should be 2 3 3

    create(&second,55);
    create(&second,44);
    create(&second,33);
    cout<<"second list:"<<endl;
    display(second);                            //result should be 33 44 55
    merge1(first,&second);                      //call merge1 function for merging both lists
    cout<<"merge list:"<<endl;
    display(first);                             //result should be 2 3 3 33 44 55

    }
