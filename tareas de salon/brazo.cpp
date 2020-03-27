#include<iostream>
#include<math.h>
using namespace std;

int calcular(int masa, int Tension){
int Area,teta,w;

w=masa*9.81;

teta=acos(w/Tension);

Area=Tension*sin(teta);
return Area;

}

int main(){

int Tension,masa,Area; 

cout<<"Ingrese la tension en el cable"<<endl;
cin>>Tension;
cout<<"Ingrese la masa"<<endl;
cin>>masa;

Area=calcular(masa,Tension);

cout<<"La fuerza requerida en A es: "<<Area<<" N"<<endl;

return 0;

}
