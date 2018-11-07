#include<iostream>
using namespace std;
class stack {
public :
        stack(){ top=0; }
        int push(int value){
          if (top<maxsize)  {
                              top++;
                              S[top]=value;
                              return 1;}
           return 0;}
        int pop(int *old){
            if  (isempty()) { return 0;}
            *old=S[top];top--;
            return 1;}

        int whathight() { return top;}
        int isempty() { return (top<1);}
private :
         int top;
         int S[100];
         int maxsize=100;
         };
int n;
stack somestack;
int main()
{
cout<<"n=";cin>>n;
somestack.push(n);
int old;
while(somestack.whathight()>1){
        if(n>=12){
                somestack.pop(&old);
                somestack.pop(&old);
                somestack.push(n-1);
        }
        else{
            somestack.push(n+2);
            }
}
cout<<"f("<<n<<")="<<n-1;
}
