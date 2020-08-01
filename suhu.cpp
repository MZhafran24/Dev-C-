#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{	
cout<<"===================================================================================\n";
cout<<"\t\t\t Selamat Datang Di Program Zhafran\n";
cout<<"===================================================================================\n";

cout<<"\t\n                     Muhammad I'Lauddin Zhafran     >>     TI-1B"<<endl;
cout<<"===================================4817070982======================================\n";	

{
		
	int menu;
	
float cl, re, kl, fh;
cout<<"suhu-suhu :\n";
cout<<"\n 1.Celcius\n";
cout<<"\n 2.Kelvin\n";
cout<<"\n 3.Reamur\n";
cout<<"\n 4.Fahrenheit\n";
cout<<"\n Silahkan masukan suhu yang di pilih (1-4) = ";cin>>menu;
switch(menu)
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
    break;
default:
            cout<<"Maaf !! Pilihan Anda Salah Silahkan ulangi memilih rumus yang sudah tersedia di DAFTAR RUMUS !"<<endl;
            
            break;
}
    

}
char LG;
cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y / N ] ?";cin>>LG;
if (LG=='Y' || LG=='y')main(); 
else if (LG=='T' || LG=='t') goto x;
x:
cout<<"Terima Kasih Atas Perhatiannya\n";
cout<<"good bye";   
}

