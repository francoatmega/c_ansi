#include <stdio.h>

#define KBYTE 1024
#define MBYTE KBYTE * 1024
#define GBYTE MBYTE * 1024

//https://docs.microsoft.com/pt-br/windows/win32/winprog/using-the-windows-headers?redirectedfrom=MSDN

int main() {
    
    printf("Um KiloByte tem %d bytes\n", KBYTE);
    printf("Um MegaByte tem %d bytes\n", MBYTE);
    printf("Um GigaByte tem %d bytes\n", GBYTE);

   return 0;
}