#include <iostream>
using namespace std;

int main() {
   int postitot, adulti, bambini, sommaadulti;
   float nbambini, perseccesso, somma, sommabambini;
   postitot=30;
   sommaadulti=0;
   sommabambini=0;
   somma=0;
   while(somma<postitot)
   {
    cout<<"Quanti adulti salgono?"<<endl;
    cin>>adulti;
    sommaadulti= adulti+sommaadulti;
    cout<<"Quanti bambini salgono?"<<endl;
    cin>>bambini;
    nbambini=bambini*0.5;
    sommabambini=nbambini+sommabambini;
    somma=sommaadulti+sommabambini;
   }
   cout<<"La giostra è piena"<<endl;
   if(somma>postitot)
   {
    perseccesso=somma-postitot;
    cout<<"Devono scendere "<<perseccesso<<" persone";
   }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
