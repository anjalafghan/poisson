#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
double probability;
double lambda=0, k=0;
double factorial(double n)
{
	if (n)
	{
		return n*factorial(n - 1);
	}
	else
	{
		return 1;
	}
}

double poisson(){
	
	cout << fixed << setprecision(3) << pow(lambda, k)*exp(-lambda) / factorial(k) << endl;
	
	while(lambda <100){
		probability = (lambda/k+1)*probability;
	lambda++; k++;
	poisson();	
	}
	return 0;
}

int main() {

	probability = pow(lambda, k)*exp(-lambda) / factorial(k);
	poisson();
	return 0;
}