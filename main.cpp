#include <iostream>
using namespace std;


#include<iostream>
using namespace std;

//tower of HANOI function implementation
void TOH(int n,char A, char B,char C)
{ 
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<A<<" to "<<C<<endl;
		return;
	}
	
	TOH(n-1,A,C,B);
	cout<<"Move Disk "<<n<<" from "<<A<<" to "<<C<<endl;
	TOH(n-1,B,A,C);
}




int factorialR (int);

int main() {
  int number;
  //input from user
  cout << "Enter an integer value and it will display\n";
  cout<< "the factorial : ";
  cin>> number;

  //display
  cout<< "The factorial of "<<number<<" is ";
  cout<<factorialR(number)<<endl;


  	int n;
    //display of TOH
	cout<<"*****TOWER OF HANOI*****"<<endl;
	cout<<"Enter no. of disks:";	
	cin>>n;
	//calling the TOH 
	TOH(n,'A','B','C');
  return 0;
  
}
int factorial (int n)
{
  if (n==0)
  return 1;//Base case
  else 
  return n * factorial (n-1);//Recursive case
}
/*Recursivion is the answer to stopping of a problem.
The user inputs a number to get it's factorial of the input. 
While in TOWER of HANOI, gives the steps to solving the problem. Letting the user know what disk should be moved first.
*/