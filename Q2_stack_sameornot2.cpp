#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool SameStack(stack<string> stack1,stack<string> stack2)
{
    bool flag = true;                    //flag variable
    if(stack1.size()!=stack2.size()){    //Check size of both stacks are same or not
        flag = false;
        return flag;
    }
while(stack1.empty()==false){
    if(stack1.top()==stack2.top()){      //Check top of both stacks are same or not
            stack1.pop();                //Pop top of both stacks
            stack2.pop();
        }
        else {
            flag=false;
            break;
        }
    }
    return flag;
}

int main()
{
    stack<string> stack1;               //Creating stacks
    stack<string> stack2;

    stack1.push("Hi");                //Inserting elements to stack1
    stack2.push("Hello");             //Inserting elements to stack2

    if(SameStack(stack1, stack2))
        cout<<"Stacks are Same";
    else
        cout<<"Stacks are not Same";
    return 0;
}
