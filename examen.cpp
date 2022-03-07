#include <iostream>
#include"biblioteca1.hpp" 

using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int A1, B2;
cout << "ingrese el primer numero: "<<endl;
cin>> A1; 
cout << "ingrese el segundo numero: "<<endl;
cin>> B2;

int Rsuma= suma(A1,B2);
cout << "la respuesta de la suma es: " << Rsuma<<endl;

int Rdivision=division(A1,B2);
cout << "la respuesta de la division es " << Rdivision<<endl;

int rfactorial=factorial(A1);
cout<<"el factorial del primer numero es: "<< rfactorial<<endl;






	system ("pause");

	
	return 0;
}