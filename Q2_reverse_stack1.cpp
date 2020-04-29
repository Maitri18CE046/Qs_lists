#include<iostream>
#include<stack>
using namespace std;

void insert_into_stack(stack<int> *s,int data){
    if ((*s).empty()) {
        (*s).push(data);        //insertion of element in stack
        return;
    }
    int top=(*s).top();
    (*s).pop();

    insert_into_stack(s, data);
    (*s).push(top);
}

void reverse_stack(stack<int> *s){  //function for reverse stack
    if(!(*s).empty()) {
        int data=(*s).top();
        (*s).pop();
        reverse_stack(s);           //calling function itself(recursion)

        insert_into_stack(s, data);
    }
}

int main() {
    int n,e;                        //n=number of element
    stack<int> s;                   //Creating stack
    cout<<"Enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>e;                     //enter elements
        s.push(e);
    }
    // Function to reverse the stack
    reverse_stack(&s);
    cout<<"\nStack elements after reverse: \n\n";
    while(!s.empty()) {
        cout<<s.top()<<"\n";
        s.pop();
    }
    return 0;
}

