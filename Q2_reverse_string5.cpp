#include<iostream>
#include<stack>
#include<string>
using namespace std;

void reverse(string &st)
{
	stack<int> stk;             //Create a stack
	for(char ch:st){
		stk.push(ch);           //Push character in the string to the stack
	}

	for(int i=0;i<st.length();i++){
		st[i]=stk.top();
		stk.pop();              //Pop all characters from the stack and put as input string
	}
}

int main()
{
	string st="Hello";
	reverse(st);                //Calling function
	cout<<st;
	return 0;
}
