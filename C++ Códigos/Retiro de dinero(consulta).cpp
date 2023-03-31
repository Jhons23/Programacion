
#include <iostream>

using namespace std;

int main()
{
   float a,b,c;
   cout <<"*****************Programa de retiro de dinero**********************";
   cout <<"Ingrese el valor de la consulta"<<endl;
   cin >>a;
   cout <<"Ingrese el valor a sacar"<<endl;
   cin >>b;
   c=a-b;
   if(c>=0)
   {
       cout <<"Si hay saldo";
   }else{
       cout <<"No hay saldo";
   }
   return 0;
}
