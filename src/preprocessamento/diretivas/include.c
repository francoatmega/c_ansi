#include <stdio.h>
#include <windows.h>

#include "constantes/contantes.h"

int main(){ 

    char mensagem[100];
    
    sprintf(mensagem, "O tamanho maximo que um PATH pode ter eh: %d", MAX_PATH_LENGHT); 

    MessageBox(NULL, mensagem, "Info", MB_ICONINFORMATION);

    return 0;
}