#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
 
 int a, b, c;
 float x1, x2, D;
 
 cout<<"=========================================\n";
 cout<<"| <<<<<<PROGRAM PERSAMAAN KUADRAT>>>>>> |\n";
 cout<<"=========================================\n\n";
 cout<<"Masukkan nilai a = "; cin>>a;
 cout<<"\nMasukkan nilai b = "; cin>>b;
 cout<<"\nMasukkan nilai c = "; cin>>c;
 
 D=((b*b)-4*(a*c));
 
 if (a==0){
  cout<<"Bukan Persamaan Kuadrat";
 }
 else if (D>0){
  x1=((-b)+(sqrt(D)))/(2*a);
  x2=((-b)-sqrt(D))/(2*a);
  cout<<"persamaan kuadrat ("<<a<<"^2)x + "<<b<<"x +"<<c<<" mempunyai akar-akar yang berbeda yaitu : \n";
  cout<<"X1 = "<<x1<<endl;
  cout<<"X2 = "<<x2<<endl;
 }
  else if (D==0){
  x1=(-b)/(2*a);
  x2=x1;
  cout<<"persamaan kuadrat "<<a<<"^2 + "<<b<<"x +"<<c<<" mempunyai akar-akar kembar yaitu : \n";
  cout<<"X1 = "<<x1<<endl;
  cout<<"X2 = "<<x2<<endl;
  }  else { cout<<"Akar Imaginer";
  }
 return 0;
}
