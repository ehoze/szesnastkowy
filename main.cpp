#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <queue>

using namespace std;
	string a;
	string liczba;
		string bin;
 int potega = 0;
 int wynik = 0;
 int cyfra;
 

void kolejka (queue <double> kolejkaa)


{
}
int zamiana (string binarna)
{
    int liczba, i=0, reszta[100]; //maksymalnie 100 cyfr wyniku
 
  while(liczba > 0)
  {
     reszta[i++] = liczba % 16; //sprawdzamy resztê z dzielenia liczby przez dwa
     liczba /= 16; //dzielimy liczbê przez dwa, by poszukaæ kolejnej cyfry binarnej
  }

  i--; //jesteœmy na kolejnej "pustej" cyfrze, wracamy do ostatniej niepustej

	 	switch(reszta[i])
	{
		case 10 :
			cout << "A";
		break;
		case 11 :
			cout << "B";
		break;
		case 12 :
			cout << "C";
		break;
		case 13 :
			cout << "D";
		break;
		case 14 :
			cout << "E";
		break;
		case 15 :
			cout << "F";
		break;
		default :
			cout << reszta[i];
		break;
	}
	i--;
  while(i>=0) //wypisanie reszty od koñca
    cout << reszta[i--];
}


int power(int a, int b) {
   int wynik = 1;
   for(int i=0;i<b;i++) {
     wynik *= a;
   }
   return wynik;
}

void plik2()
{
	ifstream plik2;
    plik2.open("C:\\eryk_kucharski\\szesnastkowy\\x.txt");  
    if(plik2.good())  
     while(!plik2.eof())        
                         {
                         plik2>>a;   
                        
                         }
    plik2.close();

}

void plik3()
{
	ofstream plik3;              
    plik3.open("C:\\eryk_kucharski\\szesnastkowy\\y.txt");  	
			plik3<<wynik;	
    plik3.close(); 

}


void zamiana()
{
	string bin;
 int potega = 0;
 int wynik = 0;
 int cyfra;
 bin=a;
 for(int i=bin.length()-1; i>=0; i--) { //od koñca do pocz¹tku stringu
 if(cyfra>='0' && cyfra<='9')
   cyfra = bin[i] - 48; //zamiana znaku char z kodu ASCII na cyfrê int
   else 
   cyfra=bin[i] -65;
   
   wynik += power(16, potega++) * cyfra;
 }

 cout<<"W systemie dziesietnym: "<<wynik;

}


int main()
{
    string liczba;
    int wybor;
    do
	{
	cout <<"1."<<endl;
	cout<<"2.Wczytaj liczby z pliku "<<endl;
	cout<<"3.Zapisz liczby w pliku"<<endl;
	 cout<<"4.Zamien z 16 na 10"<<endl;
	cin >> wybor;
	switch(wybor)
    	{
    	
    		
    		case 2:
    			plik2();
    		break;
    		
    		case 3:
    			plik3();
    		break;
    		
    		case 4:
    			zamiana();
    		break;
    		
    		case 0:
    		system("cls");
    		return 0;
    		break;
		}
}while(wybor!=0);
}
