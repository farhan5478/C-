#include<iostream>
using namespace std;
main()
{
	/* *  
	  **  
	 ****
	*******   */
	
	for(int i=1; i<=4;i++)
	{
		//Loop For Making The Rows
	for(int j=i;j<=4;j++)
	{
		//Loop For Making The Space
		cout<<"@";
	}
	for(int k=1;k<=(2*i-1);k++)
	{
		//Loop For Put The Astrick 
		cout<<"*";
	}
	cout<<"\n";
	
}
}
