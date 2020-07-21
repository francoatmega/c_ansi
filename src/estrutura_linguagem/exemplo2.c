#include <stdio.h>
#include <string.h>
#include "exemplo.h"

// gcc -save-temps exemplo2.c -o exemplo2.exe
// gcc -v -save-temps exemplo2.c -o exemplo2.exe
 
int main(){

    char retorno[50] = "Ola mundo versao: ";
    
    strcat(retorno, VERSION);

    escreve_tela(retorno);

    return 0;
}