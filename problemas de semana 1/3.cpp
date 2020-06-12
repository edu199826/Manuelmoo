#include <iostream>
#include <string>

using namespace std;


int valor1(long* a1,long* a2,long a3,int a4,long a5){
     int x=0;
           for(int i=0;i<a4;i++){
            for(long j=0;j<a3;j++){
             if((a1[j]<=(a2[i]+a5))&&(a1[j]>=(a2[i]-a5))){
                 x+=1;a2[i]=0;}
                                 }}

return x;

               }
long* valor2(long a3){
long* a1=new long[a3];
for(int i=0;i<a3;i++)
cin>>a1[i];
return a1;
}

         long* valor3(int a4){
             long* a2=new long[a4];
             for(int i=0;i<a4;i++)
                cin>>a2[i];
                        return a2;
}

int main(){

int a4;
    long a3,a5;
       cin>>a3>>a4>>a5;
       long* a1=new long[a3];
       long* a2=new long[a4];
               if(a3>=1&&a4<=200000&&(0<=a5<=1000000000)){
    a1=valor2(a3);
    a2=valor3(a4);
    int x=valor1(a1,a2,a3,a4,a5);
    cout<<x<<endl;
}
return 0;

}
