#include <stdio.h>
#include <string.h>

void main()
{
    char str[20];
    printf("enter a string");
    scanf("%[^\n]", &str);
    printf("%s", str);
}