#include<iostream>
#include<fstream>

using namespace std;

int main()

{
	
	char fileName[256];
	cout << "What is the file name that should be processed?";
	cin >> fileName;
	
	ifstream input;
	input.open(fileName);
	
	ofstream output;
	output.open(fileName);
	
   int num = 0;
   
   int temp = 0;
   int i;
   int total = 0;
   
   while(!input.eof()) 
   {
   
	   total=0;
	   i=0; 
	   cout<<"Number of numbers to read from file: "; 
	   cin>>num; 
	   while(i<num && !input.eof()) 
	   {
		input>>temp; 
		output<<temp<<" "; 
		total = total + temp; 
		cout<<temp<<" ";
		i++;
    
		}
    
	cout<<"\n"<<"Average: "<<(double)total/num<<endl; 
	  output<<endl; 
    output<<"Average: "<<(double)total/num<<endl;
  
   }
   
   input.close(); 
   output.close(); 
   
   return 0;
}
