#include <iostream>

using namespace std;
/*Program to Generate Fibonacci Sequence up to a Certain Number (Take
input from user*/
int main() 
{
	int num1=0,num2=1,num,sum=0; //variables declaration
	cout<<"\n\n\t\t\t\"FIBONACCI SEQUENCE\"\n";
	cout<<"\n\n\t\tEnter a positive number: "; cin>>num; /*squence will run 
	                                                      upto a"num"entered by user*/
	cout<<endl;
	if(num>=0) //for positive entry
	{
	cout<<"\n\t\tFabonacci Sequence=  "<<num1<<" , "<<num2<<" , "; //will run fixed number 0, 1
	sum=num1+num2;
	while(sum<=num) //while loop condition 
	{
		cout<<sum<<" , ";
		num1=num2;  //will store the value of num2 in num1
		num2=sum;   //will store the value of "sum" in num2
		sum=num1+num2; // both the new values be stored in "sum"
	}
}
    else 
    cout<<"Invalid Entry"; //if other than a positive number is entered
	 
	return 0;
}
