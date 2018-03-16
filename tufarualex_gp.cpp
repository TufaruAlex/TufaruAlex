#include<iostream>
#include<fstream>
using namespace std;
int S[100];
int n;

int read_data()
{
fstream f;
f.open("input.dat",ios::in);
f>>n;
}
int carrier=n;
int init_data()
{
for(int i=1;i<=n;i++) S[i]=n-i+1;
}

int search_index()
{

while ( (carrier>=1) && (S[carrier]<S[carrier-1]) ) carrier--;
return carrier;

}


int sort_data(int some_data[],int from_start,int to_final)
{
int done=0;
while (done==0)
    {
      done=1;
      for(int i=from_start;i<=to_final-1;i++)
        {
           if (some_data[i]>some_data[i+1])
            {
              swap(some_data[i],some_data[i+1]);
              done=0;
            }
        }
       to_final=to_final-1;
    }
}
int k=1;

int print_data()
{cout<<endl;
for(int i=1;i<=n;i++)
    {
     cout<<S[i]<<" ";
    }
}
int factorial(){
for(int i=1;i<=n;i++){
    k=k*(i);
}
}



int main()
{
read_data();
init_data();
search_index();
sort_data(S,1,n);
print_data();
cout<<endl;
cout<<factorial();
}

