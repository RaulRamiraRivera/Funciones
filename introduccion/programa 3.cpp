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
