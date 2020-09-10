#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  FILE *fptr;
  char data[100];
  char c;

  // Opening a file
  fptr = fopen("data.txt", "r");
  if (fptr == NULL){
    printf("Error!\n");
    return 0;
  }

  // getc: It returns the next character from the file pointed to by the file pointer.
  //       When the end of the file has been reached, the EOF is sent back.
  while((c = getc(fptr)) != EOF){
    printf("%c", c);
  }

  // fgets: It reads n-1 characters from the file and stores the string in a buffer
  //        in which the NULL character '\0' is appended as the last character.
  while(fgets(data, 100, fptr) != NULL){
    printf("%s", data);
  }

  // Closing the file pointer
  fclose(fptr);

  return 0;
}
