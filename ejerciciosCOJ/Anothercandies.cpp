#include <iostream>
using namespace std;
int T;
int NK;
int cnds;
int resu[25];

void candies()
{
    for(int i=0;i<T;i++)
    {

        for(int j=0;j<NK;j++)
        {
            cin>>cnds;
            resu[j] = resu[j]+cnds;
        }
        if(resu[i]%NK==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}


int main()
{
    cin>>T;
    cin>>NK;
    candies();
}    
