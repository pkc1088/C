#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "This is a simple string";
  char* pch;
  pch = strstr(str, "simple");
  if(pch)
  	printf("matched\n");
//  strncpy(pch, "sample", 6);
 // puts(str);
  return 0;
}
