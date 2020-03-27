#include <iostream>
#include <string>
using namespace std;

float n(char *v){
char temp[10];
	for(int i=0;(i<sizeof(v)||9);i++)
	temp[i] = v[i+1];
	return stof(temp);
}

int main(){

char str[10];

cin>>str;

float total =0;

float f =0;
	while(cin)
	{

        f = n(str);
	if(str[0]=='>')
	total -= f;
	else
        total += f;
	cin>>str;

	}
cout<<"TOTAL:"<<total<<endl;
return 0;
}
