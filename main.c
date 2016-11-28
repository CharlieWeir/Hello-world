#include <stdio.h>
#include <stdlib.h>


void myfunc(int a, int b, int *myarraypointer[2])
{
    //try to return more than one thing
    int sum, product;
    sum = a + b;
    // ans should be 7
    product = a * b;
    //ans should be 10
    printf("\nthe sum is %d \n the product is %d",sum,product);

    *myarraypointer[0] = sum;
    *myarraypointer[1] = product;


}


int main()
{

    int myarray[2], *myarraypointer[2];

    myarray[0]= 1;
    myarray[1]= 3;

    myarraypointer[0] = &myarray[0];
    myarraypointer[1] = &myarray[1];

    //shows that the pointer accessing the values stored in the array
    printf("\nmy array 0: %d , 1: %d",*myarraypointer[0],*myarraypointer[1]);

    myfunc(2,5,myarraypointer);
    
    //passes numbers a b and a pointer array so that the function can access the memory locations of the array and return 

    printf("\nmy array using pointer 0: %d , 1: %d",*myarraypointer[0],*myarraypointer[1]);
    //prints out the contents by accessing the memory address stored in a pointer

    printf("\n my array vars 0: %d , 1: %d",myarray[0],myarray[1]);
    // shows that a permanant change has been made by the function as now are using the actual array.





    return 0;
}
