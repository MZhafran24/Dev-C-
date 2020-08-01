#include<iostream>
using namespace std;

main()

{

	cout<<"Assalamu'alaikum..."<<endl<<endl;
	cout<<"Bismillahhirahmanirahim"<<endl<<endl;
	
	char abjad;
	
	cout<<"+++++++++++++++++Yang ini aku buat dari A sampai Z :+++++++++++++++++++++\n";
	for ( abjad='A'; abjad<='Z';abjad++)
	cout<<abjad<<" ";
	cout<<endl<<endl;
	
	cout<<"-----------------Yang ini aku buat dari Z sampai A :---------------------\n";	
	for (abjad='Z'; abjad>='A';abjad--)
	cout<<abjad<<" ";
	cout<<endl<<endl;

	cout<<"+++++++++++++++++Yang ini aku buat dari a sampai z :+++++++++++++++++++++\n";
	for (abjad='a'; abjad<='z';abjad++)
	cout<<abjad<<" ";
	cout<<endl<<endl;

	cout<<"-----------------Yang ini aku buat dari z sampai a :---------------------\n";
	for (abjad ='z'; abjad>='a';abjad--)
	cout<<abjad<<" ";
	cout<<endl<<endl;
	
	int n;
	
	cout<<"+++++++++++++++++Yang ini aku buat dari 0 sampai 9 :+++++++++++++++++++++\n";
	for(n=0;n<=9;n++)
	{cout<<n<<" ";}
	cout<<endl<<endl;
	
	cout<<"-----------------Yang ini aku buat dari 9 sampai 0 :---------------------\n";
	for(n= 9;n>=0 ;n--)
	{cout<<n<<" ";}
	cout<<endl<<endl;
	
	return 0;
	}
	

