#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <queue>
using namespace std;
int liczba, i=0, reszta[100]; string a; //maksymalnie 100 cyfr wyniku

void kolejka (queue <double> kolejkaa);
	
int zamiana (string binarna);


void zamiana()
{
		cout << "Wprowadz jedna liczbe do pliku ";
		cin >> liczba;
	ofstream plik;
    plik.open("C:\\eryk_kucharski\\szesnastkowy\\x.txt");  	
    if(plik.good())   
	{
	 
			
    	
  		while(liczba>0)
  	{
    	reszta[i++] = liczba % 16; 
    	liczba /= 16; 
  	}

  i--;
 while(i>=0)
 {
 
	 	switch(reszta[i])
	{
		case 10 :
			cout << "A"; plik << "A";
		break;
		case 11 :
			cout << "B"; plik << "B";
		break;
		case 12 :
			cout << "C"; plik << "C";
		break;
		case 13 :
			cout << "D"; plik << "D";
		break;
		case 14 :
			cout << "E"; plik << "E";
		break;
		case 15 :
			cout << "F"; plik << "F";
		break;
		default :
			cout << reszta[i]; plik << reszta[i];
		break;
		
		while(!plik.eof())        
                         {
                         plik<<a;   
                         cout<<a;    
                         cout<<endl;
                         }
	}
	i--;
}
    plik.close();
}
}

void wczytaj()
{
	ifstream plik2;
    plik2.open("C:\\eryk_kucharski\\szesnastkowy\\y.txt");  
    if(plik2.good())  
     while(!plik2.eof())        
                         {
                         plik2>>a;   
                         cout<<a;    
                         cout<<endl;
                         }
    plik2.close();
}

void y()
{
	ofstream plik3;              
    plik3.open("C:\\eryk_kucharski\\szesnastkowy\\y.txt");  	
			plik3<<a;	
    plik3.close(); 

}

int main(int argc, char** argv)
{
  
	int wybor;
    do{
	cout << "------------------------------------\n" << "1. Wprowadz liczbe\n2. Wczytaj liczby z pliku\n3. Zapisz liczby w pierwszym pliku\n4. Zapisz liczby w nowym pliku\n0. Wyjdz\n";
	cin >> wybor;
	switch(wybor)
    	{
    		case 1:
    			zamiana();	
    		break;
    		
    		case 2:
    			wczytaj();
    		break;
    		
    		case 3:
    			y();
    		break;
    		
    		case 4:
    			
    		break;
    		
    		case 0:
    		system("cls");
    		return 0;
    		break;
		}
}while(wybor != 0);


    
  cout << "W systemie szesnastkowym to: ";

  return 0;
}
