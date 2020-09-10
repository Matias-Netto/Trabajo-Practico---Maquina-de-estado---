# Trabajo Practico - Maquina de estado
## Maquina de Estado - Control de llenado de un tanque de agua 


## Memoria descriptiva

Mi sistema representa un control de llenado de un tanque con capacidad y delta capacidad configurable. La capacidad es leida por solo un sensor. 

En primer lugar, se carga el tanque siempre que la capacidad leida sea menor a la seteada menos el delta. Una vez que supera a la capacidad seteada, se frena el llenado del tanque hasta que la capacidad leida vuelva a ser menor a la configurada. 

## Diagrama 

![./imagenes/DiagramaCTanque.png](https://github.com/Matias-Netto/Trabajo-Practico---Maquina-de-estado---/blob/master/Imagenes/DiagramaCTanque.jpg)

- C: Capacidad leida
- Cset: Capacidad seteada 
- DC: Delta de la capacidad

## Código

### archivo de cabecera libreria.h

    #include <stdio.h>

    typedef struct tanque
    
    int cap_leida;
    int cap_set;
    int delta_c;
    };

    typedef enum estado{
        espera = 0,
        llenar = 1,
    ;

    tanque f_inicio(void)
    estado f_espera(tanque);
    estado f_llenar(tanque);


### Archivo main.c

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


### Archivo config.conf

    # Capacidad seteada
    cap_set 75
    # Delta de capacidad
    delta_c 5






