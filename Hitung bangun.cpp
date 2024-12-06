#include <iostream>
using namespace std;

main(){
	int pilihan;
	
      cout << "Menu: \n";
	   cout << "1. Hitung bangun datar\n";
	   cout << "2. Hitung bangun ruang\n";
	   cout << "Pilih salah satu: ";
	   cin >> pilihan;	
	    
	   if (pilihan == 1) {
	   	double a,b,c;
          cout << "Luas segitiga \n"; 
          cout << "massukan panjang alas: ";
          cin >> a;
		  cout << "massukan tinggi segitiga: ";
		  cin >> b;
		  c= a * b *1/2;
		  cout << "luas segitiga: " << c;
		  
       } else if (pilihan == 2) {
       	float a,b,c,d;
            cout << "Keliling segitiga \n";
            cout << "masukan nilai 1: ";
            cin >> a;
            cout << "masukan nilai 2: ";
            cin >> b;
            cout << "masukan nilai 3: ";
            cin >> c;
            
            d= a+b+c;
            cout << "keliling segitiga: " << d; 
           
}
}
