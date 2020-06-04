#include<iostream>

using namespace std;

int manuel(int s)
{
        int i;	
        int n[s];	
	     for(i=0;i<s;i++)
		cin>>n[i];

return n[i];
}

int main()
{
	int X, Y, Z;
cin>>X;
cin>>Y;
cin>>Z;
         int s=ingre(X);
              cout<<s<<endl;
	     int soli[X]={manuel(X)};
	           for(int i=0;i<X;i++)
	          cout<<soli[X]<<" ";
return 0;
}
