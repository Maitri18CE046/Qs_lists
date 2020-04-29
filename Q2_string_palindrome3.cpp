#include <iostream>
using namespace std;

int main(){
    char string1[20];
    int i,length;
    int flag=0;

    cout<<"Enter a string: ";
    cin>>string1;                       //input for string

    length=strlen(string1);             //length of string is assign to variable
    for(i=0;i<length;i++){
        if(string1[i]!=string1[length-i-1]){ //Check if letters of string are same
            flag = 1;
            break;
   }
}
    if(flag){                               //flag is false then string is not palindrome
        cout<<string1<<" is not a palindrome";
    }
    else{
        cout<<string1<<" is a palindrome";
    }
    return 0;
}
