#include <iostream>
#include <fstream>
using namespace std;

int main ()
	
{
	double num, sum=0;
	int counter=0;
	in >> num; 
	
	ifstream in;
	in.open("---");
	ofstream out;
	out.open("---");
	
while(num !=-99)

 {
	 cout << num << endl;  
	 out << num << endl;
	 sum+=num;
	 counter++;
	 in >> num;
 }
 
	cout << "average = " << sum/10 << endl;
	out << "average = " << sum/10 << endl;

in.close();
out.close();

return 0;
	
}
