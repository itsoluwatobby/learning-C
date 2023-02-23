#include <stdio.h>

int main()
{
  // file mode = w:write, a:append, r:read,
  /*FILE *pF = fopen("test.txt", "a");
  fprintf(pF, "\nPatrick Star");
  fclose(pF);
  */

  // Deleting a FILE
  /*if(remove("test.txt") == 0){
    printf("File deleted successfully");
  }
  else{
    printf("file not found");
  }
  */

  FILE *pR = fopen(".\\test.txt", "r");
  char buffer[255];

  if(pR == NULL){
    printf("Unable to open file");
  }else{
    while (fgets(buffer, 255, pR) != NULL)
    {
      fgets(buffer, 255, pR);
      printf("%s", buffer);
    }
  }
  fclose(pR);

  return 0;
}