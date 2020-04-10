#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};
struct node *head=NULL;
    void create(node **head,int x)
    {
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr ->data=x;
        ptr ->link=(*head);
        (*head) = ptr;
    }

    void display(node *head){
            node* ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->link;
        }
        }

    void merge1(node *first,node **second){
        node *fir = first;
        while(fir->link!=NULL){
            fir=fir->link;
        }
        fir->link=*second;
    }

    int main(){
    node *first=NULL;
    node *second=NULL;
    create(&first,3);
    create(&first,3);
    create(&first,2);
    cout<<"first list:"<<endl;
    display(first);

    create(&second,55);
    create(&second,44);
    create(&second,33);
    cout<<"second list:"<<endl;
    display(second);
    merge1(first,&second);
    cout<<"merge list:"<<endl;
    display(first);

    }
