#include<iostream>
using namespace std;

 int numimpar(int num)
{
  int resul=(num*3)+1;
        return resul;
                      }

              int numpar(int num)
              {
                 int resul=num/2;
                   return resul;
                                 }

            int decimal(int num)
          {
      	if(num%2==0){
     		num=numpar(num);
		    cout<<" "<<num;}
        	else{
	    	num=numimpar(num);
	     	cout<<" "<<num;}
                   
				   return num;
                                }

int main()
{
	int num;
cin>>num;
	if(num>=1&&num<=106){
		cout<<" "<<num;
		
		while(num!=1)
		num=decimal(num);}
	
		return 0;
}




