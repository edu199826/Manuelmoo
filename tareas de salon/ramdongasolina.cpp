#include<iostream>// cin y cout
#include<cstdlib>
#include<ctime>
using namespace std;   

int main(){

int costo_total; 
srand(time(NULL));
int lim_inf = 50;
int lim_sup = 150;


for(int i=0;i<2000;i++)
{
int valor = lim_inf + rand()%(lim_sup + 1- lim_inf);
if (valor>100){

valor = costo_total;
costo_total = costo_total+(12*19);

}
else {
	
costo_total = costo_total+(10*19);
}

}
cout<<" el valor total de la gasolina :"<<costo_total<<endl;
return 0 ;

}
