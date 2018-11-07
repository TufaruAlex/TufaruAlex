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
stack somestack;
int x,y;
int main(){
cout<<"x=";cin>>x;
cout<<"y=";cin>>y;
somestack.push(x);
somestack.push(y);
int oldval1,oldval2;
oldval1=x;
oldval2=y;
while(somestack.whathight()>1){
    if((x!=0)&&(y!=0)){
        somestack.push(x);
        somestack.push(y-1);
    }
    if(y=0){
        somestack.pop(&oldval1);
        somestack.pop(&oldval2);
        somestack.push(x-1);
        somestack.push(1);
    }
    if(x=0){
        somestack.pop(&oldval1);
        somestack.pop(&oldval2);
        somestack.pop(&oldval1);
        somestack.pop(&oldval2);
        somestack.push(x-1);
        somestack.push(oldval2);
    }
}
cout<<"f("<<x<<","<<y<<")="<<oldval2+1;
}
