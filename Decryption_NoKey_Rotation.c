#include <stdio.h>

int main()
{
unsigned char str[1024];
char k = 1;

FILE *in;
in = fopen("in.txt", "r");

FILE *out;
out = fopen("out.txt", "w");
    
    while (feof(in) == 0){
        fscanf(in, "%s\n", str);

