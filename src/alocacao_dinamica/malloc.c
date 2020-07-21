#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){ 

    int tamanho_array = 0;
    char tipo_dado = "";
    enum tipos_dados {
        char = 10,
        int,
        float,
        double,

    }

    if (argc != 3){

        printf("Parametros invalidos");
        
        return -1;
    }



    return 0;
}