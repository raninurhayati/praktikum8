#include <iostream>
#include <conio.h>
using namespace std;

int matrik1[2][2];
int matrik2[2][2];
int matrik3[2][2];
int temp;

//input matrik pertama
void matrik_1(){

int matrik1[2][2];
int matrik2[2][2];
int matrik3[2][2];
int temp;

for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<"masukan nilai matrik pertama baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : ";
cin>>matrik1[x][y];
}
}

cout<<endl;
//output matrik pertama
cout<<"Matrik Pertama :"<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<matrik1[x][y]<<"   ";
}
cout<<endl;
}
}

void matrik_2(){
int matrik1[2][2];
int matrik2[2][2];
int matrik3[2][2];
int temp;


//input matrik kedua
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<"masukan nilai matrik kedua baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : ";
cin>>matrik2[x][y];
}
}
cout<<endl;
//output matrik kedua
cout<<"Matrik Kedua :"<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<matrik2[x][y]<<"   ";
}
cout<<endl;
}
}

void hasil(){
int matrik1[2][2];
int matrik2[2][2];
int matrik3[2][2];
int temp;

//rumus perkalian matrik
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
matrik3[x][y]=0;
for (int z =0;z<2;z++){
temp=matrik1[x][z]*matrik2[z][y];
matrik3[x][y]=matrik3[x][y]+temp;
}
}
}




//output matrik hasil perkalian
cout<<endl;
cout<<"Matrik hasil perkalian :"<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<matrik3[x][y]<<"   ";
}
cout<<endl;
}
}



main (){

matrik_1();
matrik_2();

hasil();
getch();
return 0;
}
