#include <stdio.h>

int main() {
    
    printf("Ola mundo.\n");

    #ifdef _WIN32
    printf("Estou em um Windows 32 bits\n");
    #endif

   return 0;
}