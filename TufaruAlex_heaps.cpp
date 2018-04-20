#include<iostream>
using namespace std;
int n,v[100];
int read_data(){
cout<<"n=";cin>>n;
for(int i=1;i<=n;i++){
    cout<<"v["<<i<<"]=";cin>>v[i];
}
}
int make_heap(){
for(int i=2;i<=n;i++){
    int element=v[i];
    int Vader=i/2;
    int Luke=i;
    while((Vader>=1)&&(v[Vader]<v[Luke])){
        swap(v[Vader],v[Luke]);
        Luke=Vader;
        Vader=Luke/2;
    }
}
}
int print_data(){
for(int i=1;i<=n;i++){
    cout<<v[i]<<" ";
}
}
int main(){
read_data();
make_heap();
print_data();
}
