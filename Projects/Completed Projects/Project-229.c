// Program to find the number of blanks, tabs and newline

#include <stdio.h>

int main(){
  int blank = 0, tab = 0, new_line = 0;

  int c;
  printf("Number of blanks, tabs, and newlines: ");

  char abc[100];
  char *ptr = abc;

  gets(abc);

  while(*ptr!='\0'){
  
        if ( *ptr == ' ' ){
        blank++;
        }
        if ( *ptr == '\t' ){
        tab++;
        }
        if ( *ptr == '\n' ){
        new_line++;
        }
  }  
    printf("blank=%d ,tab=%d ,newline=%d ",blank ,tab ,new_line);

  return 0;
}