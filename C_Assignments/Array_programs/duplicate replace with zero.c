<<<<<<< HEAD
 #include<stdio.h>
int main()
{
  int n, list[100],i,j,k;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &list[i]);
    for(i=0; i<n; i++)
    {
      for(j=i+1; j<n; )
      {
        if(list[j]==list[i])
        {
        for(k=j; k<n; k++)
     list[k]=list[k+1];
      // list[j]=0;
          n--;
        }
         else
         {
           j++;
         }
      }
    }
for(i=0; i<n; i++)
  printf("%d\n", list[i]);
 return 0;
}





Test cases Sample Input :

(Length:) 5 (Values:) 2 3 4 3 6

Sample Output:

=======
 #include<stdio.h>
int main()
{
  int n, list[100],i,j,k;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &list[i]);
    for(i=0; i<n; i++)
    {
      for(j=i+1; j<n; )
      {
        if(list[j]==list[i])
        {
        for(k=j; k<n; k++)
     list[k]=list[k+1];
      // list[j]=0;
          n--;
        }
         else
         {
           j++;
         }
      }
    }
for(i=0; i<n; i++)
  printf("%d\n", list[i]);
 return 0;
}





Test cases Sample Input :

(Length:) 5 (Values:) 2 3 4 3 6

Sample Output:

>>>>>>> 0ac4945 (added)
2  3  4  0  6