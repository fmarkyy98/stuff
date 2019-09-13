#include <stdio.h>

double toCelsius(int farenheit){ 
	double result = farenheit - 32 * 5 / 9;
	return result;
}


int main(){
	for(int i = -20; i <= 120; i = i + 10){
		printf(i + " farenheit " + toCelsius(i) + " celsiu");
	}
}
