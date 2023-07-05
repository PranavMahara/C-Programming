// C program to display its own source code

#include <stdio.h>
int main() {
    FILE *fp;
    int c;
   
    // open the current input file
    fp = fopen(__FILE__,"r");

    do {
         c = getc(fp);   // read character 
         putchar(c);     // display character
    }
    while(c != EOF);  // loop until the end of file is reached, EOF is end-of-file (EOF) is a condition in a computer operating system where no more data can be read from a data source.
    
    fclose(fp);
    return 0;
}