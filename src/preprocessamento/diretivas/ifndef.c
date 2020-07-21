#include <stdio.h>

#define MAX 90

#ifndef MAX
      #define MIN 90
#else
      #define MIN 100
#endif

int main() {
    
    printf("O valor minimo foi definido em: %d", MIN);

   return 0;
}