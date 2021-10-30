#include <iostream>

using namespace std;
 
 typedef unsigned int UNIT;

UNIT ToggleBit (int iNo , int iPos)
{
int iMask =0x0000001;
int iResult=0;
iMask = iMask<<(iPos -1);
iResult= iNo^iMask;
return iResult;


}



int main() 
{
	int iValue =0, iRet =0, i=0;

	cout<<"enter number\n";

	cin>>iValue ;


	cout <<"enter the position of bit\n";
	cin>>i;

	iRet= ToggleBit(iValue,i);
	cout<<"Updated number is : "<<iRet<<"\n";
	



	return 0;

}