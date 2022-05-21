#include <iostream>
#include <fstream>
using namespace std;

void calcSum(int n1, int n2, int n3, int n4,int& sum);

int main()
  
{
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int numSum = 0;
	



	cout << "First number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;
	cout << "Third number: ";
	cin >> num3;
	cout << "Fourth number: ";
	cin >> num4;

	
	calcSumA(num1, num2, num3, num4, numSum);
	
	
	cout << "Sum: " << numSum << endl;
	

	return 0;
  
}

void calcSum(int num1, int num2, int num3, int num4, int numSum)
  
{
  
	sum = n1 + n2 + n3 + n4;	
  
}
