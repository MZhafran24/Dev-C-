#include <iostream>
#include <math.h>
using namespace std;
int main() 

{

cout<<"===================================================================================\n";
cout<<"\t\t\t Selamat Datang Di Program Zhafran\n";
cout<<"===================================================================================\n";

cout<<"\t\n                     Muhammad I'Lauddin Zhafran     >>     TI-1B"<<endl;
cout<<"===================================4817070982======================================\n"<<endl;

a:
	
int valid = 1;
	float x=1;
	float number=0;
	float sum=0;
int pilihan;
char mad1;
do

{
	
cout<<"=================PILIHAN RUMUS=================="<<endl;
cout<<"1. Mencari Konfersi Suhu \t "<<endl;
cout<<"2. Luas Bangun Datar \t "<<endl;
cout<<"3. Mendisplaykan Angka & Huruf \t"<<endl;
cout<<"4. Penghitungan Persamaan Kuadrat \t"<<endl;
cout<<"5. Exit"<<endl;
cout<<"================================================"<<endl;
cout<<"Pilih Salah Satu Rumus:  \t ";
cin>>pilihan;

switch(pilihan)

{
float a,t,p,l,r,luas;
int pilihan1;	
char mad;
do

{
	
case 2:
	

cout<<"=================BANGUN DATAR=============="<<endl;
cout<<"1. Segitiga \t "<<endl;
cout<<"2. Persegi Panjang \t "<<endl;
cout<<"3. Lingkaran \t"<<endl;
cout<<"4. Kembali ke Menu awal \t"<<endl;
cout<<"==========================================="<<endl;
cout<<"Pilih Luas Bangun Datar:  \t ";
cin>>pilihan1;

switch(pilihan1)

{
	

//luas segetiga
case 1:
cout<<"===LUAS SEGITIGA==="<<endl;
cout<<"masukan alas \t " ;
cin>>a;
cout<<"masukkan tinggi \t "  ;
cin>>t;
luas=a*t/2;
cout<<"luas segitiga adalah \t "<<luas<<endl;
cout<<"coba lagi? Y/N \t";
cin>>mad;
break;

//luas persegi
case 2:
cout<<"===LUAS PERSEGI PANJANG==="<<endl;
cout<<"masukan panjang \t ";
cin>>p;
cout<<"masukan lebar \t ";
cin>>l;
luas=p*l;
cout<<"luas persegi panjang adalah \t "<<luas<<endl;
cout<<"coba lagi Y/N \t";
cin>>mad;
break;

//luas lingkaran
case 3:
cout<<"===LUAS LINGKARAN==="<<endl;
cout<<"masukan jari-jari \t ";
cin>>r;
luas=3.14*r*r;
cout<<"luas lingkaran adalah \t "<<luas<<endl;
cout<<"coba lagi? Y/N \t";
cin>>mad;
break;

case 4:
	goto a;

default:
	cout<<"\n============================================================================="<<endl<<endl;	
 	cout<<"====Angka yg anda masukan tidak ada==== "<<endl;
	cout<<"Coba Lagi? Y/N   : ";
	cin>>mad;
	break;
	
}
	
} 
 while (mad/='Y');
 goto exit;
		{
float suhu, hasil;
int kode;
char mad;
do
{
case 1:
cout<<"===============Konversi Suhu=================="<<endl;
float cl, re, kl, fh;
cout<<"suhu-suhu :\n";
cout<<"1.Celcius\n";
cout<<"2.Kelvin\n";
cout<<"3.Reamur\n";
cout<<"4.Fahrenheit\n";
cout<<"5.Kembali ke Menu awal"<<endl;
cout<<"=============================================="<<endl;
cout<<"Pilih Salah Satu Rumus Mencari Suhu: \t";
cin>>kode;
switch(kode)
{ 

case 1:
cout<<"\n \n \t _____Celcius_____ \n";
cout<<"\n  Silahkan asukan nilai suhu =  ";cin>>cl;
kl=cl+273;
cout<<"\n Kelvin = "<<kl<<endl;
re=cl*0.8;
cout<<"\n Reamur = "<<re<<endl;
fh=(cl*1.8)+32;
cout<<"\n Fahrenheit = "<<fh<<endl;
cout<<"coba lagi Y/N  ";
cin>>mad;
break;

case 2:
cout<<"\n \n \t _____Kelvin_____ \n";
cout<<"\n Silahkan masukan nilai suhu = ";cin>>kl;
cl=kl-273;
cout<<"\n Celcius = "<<cl<<endl;
re=(kl-273)*0.8;
cout<<"\n Reamur = "<<re<<endl;
fh=kl*1.8-459.67;
cout<<"\n Fahrenheit = "<<fh<<endl;
cout<<"coba lagi Y/N  ";
cin>>mad;
break;

case 3:
cout<<"\n \n \t _____Reamur_____ \n";
cout<<"\n Silahkan masukan nilai suhu = ";cin>>re;
cl=re/0.8;
cout<<"\n Celcius = "<<cl<<endl;
kl=re/0.8+273;
cout<<"\n Kelvin = "<<kl<<endl;
fh=re*2.25+32;
cout<<"\n Fahrenheit = "<<fh<<endl;
cout<<"coba lagi Y/N  ";
cin>>mad;
break;

case 4:
cout<<"\n \n \t _____Fahrenheit_____ \n";
cout<<"\n Silahkan masukan nilai suhu = ";cin>>fh;
cl=(fh-32)/1.8;
cout<<"\n Celcius = "<<cl<<endl;
kl=(fh-32)/1.8+273;
cout<<"\n Kelvin = "<<kl<<endl;
re=(fh-32)/2.25;
cout<<"\n Reamur = "<<re<<endl;
cout<<"coba lagi Y/N  ";
cin>>mad;
break;

case 5:
	goto a;
	break;

	
default:
	cout<<"=====Angka yg anda masukan tidak ada======"<<endl;
	cout<<"coba lagi Y/N  ";
	cin>>mad;
}
}

while (mad/='Y');
 
goto exit;
{
char mad;
char i;
int a,pilih2; 
do

{
case 3:
cout<<"===MENDISPLAYKAN ANGKA & HURUF==="<<endl;
cout<<"1. Displaykan A-Z"<<endl;
cout<<"2. Displaykan Z-A"<<endl;
cout<<"3. Displaykan 0-9"<<endl;
cout<<"4. Displaykan 9-0"<<endl;
cout<<"5. Kembali ke Menu awal"<<endl;
cout<<"================================="<<endl;
cout<<"Pilih Pendisplayan: \t";
cin>>pilih2;
switch(pilih2)
{
case 1:
cout<<"=====Display A-Z====="<<endl;
for(i='A';i<='Z';i++)
cout<<i;
cout<<endl;
cout<<"coba lagi Y/N \t";
cin>>mad;
break;

case 2:
cout<<"=====Display Z-A====="<<endl;
for(i='Z';i>='A';i--)
cout<<i;
cout<<endl;
cout<<"coba lagi Y/N \t";
cin>>mad;
break;

case 3:
cout<<"=====Display 0-9====="<<endl;
for(a=0;a<=9;a++)
cout<<a;
cout<<endl;
cout<<"coba lagi Y/N \t";
cin>>mad;
break;

case 4:
cout<<"=====Display 9-0====="<<endl;
for (a=9;a>=0;a--)	
cout<<a;
cout<<endl;
cout<<"coba lagi Y/N \t";
cin>>mad;
break;

case 5:
	goto a;
	break;

default:
	cout<<"=====Angka yg anda masukan tidak ada======"<<endl;
	cout<<"coba lagi Y/N  ";
	cin>>mad;
}
}

 while (mad/='Y');
 goto exit;
{

int pilih3;
char operater,mad;
float bil1, bil2,a,b,x1,x2,D,c,hasil;
do

{
case 4:
cout<<"=========PENGHITUNGAN========="<<endl;
cout<<"1.PERSAMAAN KUADRAT"<<endl;
cout<<"2.Kembali ke Menu awal"<<endl;
cout<<"============================="<<endl;
cout<<"Pilih Salah Satu: \t";
cin>>pilih3;
switch(pilih3)
{
cout<<"coba lagi Y/N \t";
cin>>mad;
break;
{
case 2:
goto a;
break;

case 1:
 cout<<"=========================================\n";
 cout<<"| <<<<<<PROGRAM PERSAMAAN KUADRAT>>>>>> |\n";
 cout<<"=========================================\n\n";
	cout<<"masukan nilai a \t"; cin>>a;
	cout<<"masukan nilai b \t"; cin>>b;
	cout<<"masukan nilai c \t"; cin>>c;
	
	D=((b*b)-4*(a*c));
	if (a==0){
		cout<<"bukan persamaan kuadrat";
	}else if (D>0){
		x1=((-b)+(sqrt(D)))/(2*a);
		x2=((-b)-sqrt(D))/(2*a);
		cout<<"persamaan kuadrat("<<a<<"^2)x +"<<b<<"x +"<<c<<"\n mempunyai akar-akar yang berbeda yaitu : \n";
		cout<<"x1 ="<<x1<<endl;
		cout<<"x2 ="<<x2<<endl;
	}
	else if (D==0){
		x1=(-b)/(2*a);
		x2=x1;
		cout<<"persamaan kuadrat"<<a<<"^2 +"<<b<<"x +"<<c<<" \n mempunyai akar-akar kembar yaitu : \n";
		cout<<"x1 ="<<x1<<endl;
		cout<<"x2 ="<<x2<<endl;
	} else {cout<<"akar imaginer"<<endl;
	
	}
cout<<"coba lagi Y/N \t";
cin>>mad;
break;
}

default:
	cout<<"=====Angka yg anda masukan tidak ada======"<<endl;
	cout<<"coba lagi Y/N  ";
	cin>>mad;
}
}
 while (mad/='Y');
 
goto exit;


}
case 5:
	exit:
{
cout<<"============================Terima Kasih Atas Perhatiannya===========================\n";
cout<<"========================================good bye====================================="; 

}
{

    return 0;
}

}
}
	default:
	cout<<"\n====================================================================================="<<endl<<endl;	
 	cout<<"\t Anda Memasukkan Kode Yang Salah, Coba ulang kembali program ini (: "<<endl<<endl;
	cin>>mad1;
	
}
	
}
	while (mad1/='Y');
goto exit;
    		}
