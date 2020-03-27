#include <iostream>
using namespace std;

int n;
int resu;

void manuel()
{
   do
   {
    resu=resu+n;
    n--; 
   } 
   while (n>0);
   
}

int main()
{
    cin>>n;
    manuel();
    cout<<resu<<endl;
    
}
