#include <stdio.h>

int main()
{
char alphatxt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";

/* char subtxt[] = unknown */

char N = 27;
unsigned char str[1024];

FILE *in;
in = fopen("in.txt", "r");

FILE *out;
out = fopen("out.txt", "w");
    
    while (feof(in) == 0){
        fscanf(in, "%s", str);
        printf("%s", str);
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }


   