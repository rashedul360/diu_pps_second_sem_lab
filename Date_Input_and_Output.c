#include <stdio.h>
int main()
{
     char str[9];
     scanf("%s", &str);
     printf("%c%c/%c%c/%c%c\n", str[3], str[4], str[0], str[1], str[6], str[7]);
     printf("%c%c/%c%c/%c%c\n", str[6], str[7], str[3], str[4], str[0], str[1]);
     printf("%c%c-%c%c-%c%c\n", str[0], str[1], str[3], str[4], str[6], str[7]);
     return 0;
}