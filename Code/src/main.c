#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

int main()
{
    int tanque = (int)config;
    int estado = (int)estado.espera;

    config = inicio(void);
    while(1)
    {
        switch(estado)
      {
        case espera: estado = espera(config);
                    break;
        case llenar: estado = llenar(config);
                    break;
      }
    return 0;
    }