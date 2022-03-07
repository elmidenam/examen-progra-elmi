#include"biblioteca1.hpp""
int suma(int A1, int B2) { 
return A1+B2;
} 
int division(int A1, int B2) { 
return A1/B2;
} 

int factorial(int A1){
		if (A1<0){
		return 0;
 		}else{
 			int factor = 1;
			for (int i=1; i<=A1; i++ ){
			factor=factor*i;
		}
		return factor;
		}	
	}
