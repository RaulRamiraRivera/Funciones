#include <iostream>

using namespace std;

void Suma(int a, int b);

int main(){
	int N1, N2;
	cout <<"Introduzca el valor del primer operando:" <<endl;
	cin >> N1 ;
	cout <<"Introduzca el valor del segundo operando: " <<endl;
	cin >>N2 ;
	Suma(N1,N2);
	return 0;
}

void Suma (int a, int b){
	int c = a + b; 
	cout <<"El resultado de " << a << " + " << b << " es: " << c << endl;
}
/*
# include <iostream>

using namespace std ;

void  Max ( int a, int b);

// funcion principal
int  main () {
	int a, b;
       cout << " Introduzca el primer numero: " ;
	   cin >> a;
	   cout << " Introduzca el segundo numero: " ;
	   cin >> b;
	   Max (a, b);
}

void  Max ( int a, int b) {
	if (a>b){
		cout << a << " es mayor " << endl;
	}
	else if (b> a) {
		cout << b << " es mayor " << endl;
	}
	else {
		cout << " Error " << endl;
	}
}
*/
/*
# include <iostream>

using namespace std ;

int  Max ( int a, int b);

int  main () {
	int a, b, c;
	cout << " introduzca el valor del primer numero: " ;
	cin >> a;
	cout << " ingrese el valor del segundo numero: " ;
	cin >> b;
	cout << " ingrese el valor del tercer numero: " ;
	cin >> c;
	int max1 = Max (a, b);
	int max2 = Max (max1, c);
	cout << " EL numero mayor es: " << max2 << endl;
}

int  Max ( int a, int b) {
	int c;
	if (a> b) {
		c = a;
	}
	else {
		c = b;
	}
}
*/
/*
#include<iostream>
using namespace std;
int Max(int a, int b);

int main (){
	int N1, N2, N3;
	cout <<"Introduzca el valor del primer numero: " <<endl;
	cin >> N1;
	cout <<"Introduzca el valor del segundo numero: " <<endl;
	cin >> N2;
	cout <<"Introduzca el valor del tercer numero: " <<endl;
	cin >> N3;
	int max = Max(Max(N1, N2), N3);
	cout <<"El numero mayor es " <<max << endl;
	return 0 ;
}

int Max(int a, int b){
	int c;
	if(a>b){
    return a;
	}
	else{ 
	return b;
}
}
*/
/*
#include<iostream>

using namespace std;

int Factorial (int a);

int main(){
	int N1;
	cout<<"Introduzca el valor del numero: " <<endl;
	cin >>N1;
	int fact=Factorial(N1);
	cout <<"El factorial de ese numero es: " <<fact <<endl;
	return 0;	
}

int Factorial(int a){
	int i;
	int resultado=1;
	for(i=1;i<=a;i++){
		resultado *=i;		
	}
	return resultado;
}
*/

