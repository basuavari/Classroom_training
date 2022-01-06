<<<<<<< HEAD
#include<stdio.h>
#include<limits.h>
 
int main()
{
  int n, array[20];
 
  printf("Enter the size: ");
  scanf("%d",&n);
 
  printf("Enter the elements: ");
  for(int i=0; i<n; i++){
    scanf("%d",&array[i]);
  }
    
  //initialize max and second max with the minimum possible value
  int max = INT_MIN;
  int secondmax = INT_MIN;
    
  //Iterate through array elements
  for(int i=0; i<n; i++){
    /*
      *If element is greater than max then
      *update max with new value and secondmax with old
    */
    if(array[i]>max){
      secondmax = max;
      max = array[i];
    }
    
    /*
      *Otherwise if element is less than max but
      *greater than secondmax, then only update secondmax
    */
    else if(array[i]<max && array[i]>secondmax){
      secondmax = array[i];
    }
  }
 
  printf("Second largest element is %d",secondmax);
 
  return 0;
}





Output:


Enter the size: 5
Enter the elements: 10,20,15,5,100
Second largest element is 20
=======
#include<stdio.h>
#include<limits.h>
 
int main()
{
  int n, array[20];
 
  printf("Enter the size: ");
  scanf("%d",&n);
 
  printf("Enter the elements: ");
  for(int i=0; i<n; i++){
    scanf("%d",&array[i]);
  }
    
  //initialize max and second max with the minimum possible value
  int max = INT_MIN;
  int secondmax = INT_MIN;
    
  //Iterate through array elements
  for(int i=0; i<n; i++){
    /*
      *If element is greater than max then
      *update max with new value and secondmax with old
    */
    if(array[i]>max){
      secondmax = max;
      max = array[i];
    }
    
    /*
      *Otherwise if element is less than max but
      *greater than secondmax, then only update secondmax
    */
    else if(array[i]<max && array[i]>secondmax){
      secondmax = array[i];
    }
  }
 
  printf("Second largest element is %d",secondmax);
 
  return 0;
}





Output:


Enter the size: 5
Enter the elements: 10,20,15,5,100
Second largest element is 20
>>>>>>> 0ac4945 (added)
