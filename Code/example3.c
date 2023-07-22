#include <stdio.h>
#include <stddef.h> //size_t here defined as variable type to hold size of variables
#include <stdlib.h> //exit function is defined here


int main(){
    char x[10];
    fgets(x,sizeof(x),stdin);
    fputs(x,stdout);
    size_t size;
    size = sizeof(x);
    printf("%lu",size);
    if(size == 10)
        exit(EXIT_SUCCESS);
    else 
        exit(EXIT_FAILURE);
    return 0;
}
