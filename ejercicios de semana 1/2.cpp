#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

int fac(int n1){
int i, fa=1;
      if(n1<0)
                fa=0;
            else if(n1==0)
                fa=1;
                else
{
        for(i=1;i<=n1;i++)
        fa=fa*i;
}
return fa;
}

int main()
{
srand(time(NULL));

int n1, suma, s1=0, a1, b1, c1, d1, e1;
      cin>>n1;
      cin>>suma;
                  int nu[n1];
                     for(int i=0;i<n1;i++)
                         cin>>nu[i];
a1=fac(n1);
b1=fac(4);
c1=n1-4;
d1=fac(c1);
e1=a1/(b1*d1);

int size=4;
int ind;

            for(int i=0;i<=e1;i++)

{
            for(int i=0;i<n1;i++)
                cout<<nu[i]<<" ";
 while(size>0)
 
{
ind=rand()%size;
s1=s1+nu[ind];
int aux;
        while(ind<size)
        {
        nu[ind]=nu[ind+1];
        nu[ind+1]=0;
        ind++;
                }
 size--;
           for(int i=0;i<=n1;i++)
        cout<<nu[i]<<" ";
                          }
        cout<<"la suma resultante es: "<<s1<<endl;
}
cout<<endl;
return 0;
}
