#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=0,i=1,j=1,prim=0,c=0;
cout<<"numar=";cin>>n;
cout<<"numerele prime de la "<<i<<" la "<<n<<" sunt: ";
for(i=1;i<=n;i++){
    if(i%j==0){
        c++;
    }
    if(c==2){
        prim=i;
        cout<<prim<<" ";
        c=0;
    }
}
}
