/*
 * Author: BHAGYASREE G
 * Date: FEB-2025
 * Version: 1.0
 *
 * Description: sample arthmetic program
 * Repository: https://github.com/Bhagi-emb/C_udemy_sample.git
 *
 * Usage:
 *   Compile: gcc -o main filename.c
 *   Run: ./filename 
 */
#include <stdio.h>
int main()
{
    int a , b, c;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("sum : a+b = %d\n", c);
    c = a - b;
    printf("sub : a-b = %d\n", c);
    c = a * b;
    printf("multiply : a*b = %d\n", c);
    c = a / b;
    printf("divide : a/b = %d\n", c);
    c = a % b;
    printf("Remainder when a divided by b = %d\n", c);

    /* post : increment and decrement */
    printf("post : increment and decerment\n");
    printf("a = %d , b =%d \n", a,b);
    a++;
    b--;
    printf("a++ = %d\n", a);
    printf("b-- = %d\n", b);

    /* pre : increment and decrement */
    printf("pre : increment and decerment\n");  
    printf("a = %d , b =%d \n", a,b);
    ++a;
    --b;
    printf("++a = %d\n", a);
    printf("--b = %d\n", b);
    
    return 0;
}