#include <stdio.h>
#include <string.h>

//https://gcc.gnu.org/onlinedocs/gcc-3.1.1/cpp/Pragmas.html
//https://docs.microsoft.com/en-us/windows/win32/winsock/creating-a-basic-winsock-application

#pragma GCC poison strcpy

int main(){

    char destino[10];

    strcpy(destino, "Maligno");

    printf("A funcao strcpy foi criada pelo %s, nao use ela!!!", destino);

    return 0;
}