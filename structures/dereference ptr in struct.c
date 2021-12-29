#include <stdio.h>

int main()
{
    struct student 
    {
        char name [25];
        int age;
        
    };
    
    struct student anil = {"anil",30};
    
    struct student *ptr;
    ptr=&anil;
    (*ptr).age = 50;
    ptr ->age =20;
    
    
    printf("name=%s, age=%d \n",anil.name,anil.age);
    

    return 0;
}
