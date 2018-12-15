/*Program mancari nilai minimum dan maksimum*/
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
   //deklarasi
    int nilai[3],a,min,maks;

   //input-output array
    for(a=1;a<=5;a++){
   cout<<"Masukkan nilai ke-"<<a<<":";
   cin>>nilai[a];
    }

   //proses looping array
   min = nilai[1];
   maks = nilai[1];
   for(a=1;a<=5;a++){
   if(nilai[a] < min){
   min = nilai[a];
   } else if(nilai[a] > maks){
   maks = nilai[a];
   }
   }

   //output minimum dan maksimum
   cout<<"nilai minimum adalah : "<<min<<endl;
   cout<<"nilai maksimum adalah : "<<maks<<endl;

getch();
return 0;
}
