/*              <===== Pointer Arithmatic =====>
In C language we can Perform Arithmatic on Pointers by two Ways either it's Increment or Decrement.
When we perform Increment on the pointer :  int *ptr = &age ; Where age is declared ,
                                            ptr ++ ; It will take address of ptr to another integer allocated.
                                                    Example: if memory address of ptr is : 7892100 it will increase to 7892104
*/
#include <stdio.h>
int main()
{
    // // For Integers
    // int age = 22;
    // int *ptr = &age;
    // printf("Stored adress of ptr before increment is %p |\t| %u \n", ptr, ptr);
    // ptr++;
    // printf("Stored adress of ptr After increment is %p |\t| %u \n", ptr, ptr);
    // ptr++;
    // printf("Stored adress of ptr After 2nd increment is %p |\t| %u \n", ptr, ptr);
    // ptr--;
    // printf("Stored adress of ptr After decrement is %p |\t| %u \n", ptr, ptr);

    // // For Characters
    // char age = '*';
    // char *ptr = &age;
    // printf("Stored adress of ptr before increment is %p |\t| %u \n", ptr, ptr);
    // ptr++;
    // printf("Stored adress of ptr After increment is %p |\t| %u \n", ptr, ptr);
    // ptr++;
    // printf("Stored adress of ptr After 2nd increment is %p |\t| %u \n", ptr, ptr);
    // ptr--;
    // printf("Stored adress of ptr After decrement is %p |\t| %u \n", ptr, ptr);

    /* For Floats
    float age = 22.23;
    float *ptr = &age;
    printf("Stored adress of ptr before increment is %p |\t| %u \n", ptr, ptr);
    ptr++;
    printf("Stored adress of ptr After increment is %p |\t| %u \n", ptr, ptr);
    ptr++;
    printf("Stored adress of ptr After 2nd increment is %p |\t| %u \n", ptr, ptr);
    ptr--;
    printf("Stored adress of ptr After decrement is %p |\t| %u \n", ptr, ptr);
*/
// We can also compare pointers subtract pointers from another pointer.

	int age = 22;
	int _age = 23;
	int *ptr = &age;
	printf("The valur of ptr : %u \t %p \n" , ptr , ptr);
	int *_ptr = &_age;
	printf("The valur of ptr : %u \t %p \n" , _ptr , _ptr);
	printf("The Difference of two pointers are : %d \n" , _ptr - ptr);
	printf("The Difference of two pointers are : %p \n" , _ptr - ptr);
	printf("The Difference of two pointers are : %u \n" , _ptr - ptr);
 	_ptr = &age;
	printf("On comparing\n %u\t\n %u\t\n ========== \n %u" , ptr , _ptr , ( ptr == _ptr));
}
