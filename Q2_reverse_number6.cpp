#include<iostream>
#include<stack>
using namespace std;

int reverse(int n)
{
    stack<int> stk;                     //Creating a stack
    int reverse=0;
    int i=1;
    while(!stk.empty())                //Check if stack is empty or not
    {
        reverse=reverse+(stk.top()*i);
        stk.pop();
        i=i*10;
    }
    return reverse;
}

int main()
{
	int n=123;
	reverse(n);                //Calling function
	cout<<n;
	return 0;
}
