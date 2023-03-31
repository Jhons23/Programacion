/* SUMA DE Fracciones */
#include <iostream>

using namespace std;

int main()
{
 float a1,b1,a2,b2,C,R,S,M,E;

 cout<<"SUMA de Fracciones "<<endl;
 
 cout<<"Ingrese el primer número del númerador "<<endl;
 cin>>a1;
 cout<<"Ingrese el segundo número del denominador "<<endl;
 cin>>b1;
 
 cout<<"Ingrese el primer número del númerador  "<<endl;
 cin>>a2;
 cout<<"Ingrese el segundo número del denominador "<<endl;
 cin>>b2;
 if (b1==b2)
 {
     S=a1+a2;
     
     cout<<"El valor  de la Fraccion es :"<<S<<"/"<<E<<endl;
 }
 else 
{
    S=(a1*b2) + (a2*b1);
    
    E=(b1*b2);
    cout<<"El resultado de la suma de Fracciones "<<S<<"/"<<E<<endl;
    
}
return 0;

}