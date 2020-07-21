#include <stdio.h>

#undef _WIN32

int main() {
    
    printf("Ola mundo.\n Estou em um Windows 32 bits\n");

    #ifdef _WIN32
    printf("Estou em um Windows 64 bits\n");
    #endif

   return 0;
}