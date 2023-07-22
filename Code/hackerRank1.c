#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];

    scanf("%[^\n]%*c", &s); /*This syntax is used to get a string untill enter is pressed. */
  	scanf("%[^'k']%*c", &s); /* You can also use this as any letter or anything */
    /* Here it will take until it takes to first k letter */
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("Hello, World!\n");
    printf("%s",s);
    
    return 0;
}
