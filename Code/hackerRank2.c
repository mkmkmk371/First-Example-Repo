#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char s[50];
    char sen[50];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");/* If you do not put this, the next scanf will read the enter pressed to terminate the scanf above Gives error*/
    scanf("%[^\n]%*c",&sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    return 0;
}