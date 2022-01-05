/* In call by reference, original value is modified because we pass reference (address).

Here, address of the value is passed in the function, so actual and formal arguments share the same address space. Hence, value changed inside the function, is reflected inside as well as outside the function*/



#include<iostream>  
using namespace std;    
void swap(int *x, int *y)  
{  
 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
}  
int main()   
{    
 int x=500, y=100;    
 swap(&x, &y);  // passing value to function  
 cout<<"Value of x is: "<<x<<endl;  
 cout<<"Value of y is: "<<y<<endl;  
 return 0;  
}