#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  FILE *fptr;
  char data[] = "Channel Name: Idiot Developer\nAuthor: Nikhil Tomar\n";

  // Creating a file
  fptr = fopen("data.txt", "w");
  if (fptr == NULL){
    printf("Error!\n");
    return 0;
  }

  // fputc: It writes a character to the file.
  for(int i=0; data[i]!= '\0'; i++){
    fputc(data[i], fptr);
  }

  // fputs: It is used to write a string to the file.
  fputs(data, fptr);

  // fptintf: It prints a string to the file. It can also include format specifiers.
  fprintf(fptr, "%s", data);


  // Closing the file pointer
  fclose(fptr);

  return 0;
}
