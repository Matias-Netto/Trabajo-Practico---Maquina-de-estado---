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

    { 
	
	int cap_leida;
    int cap_set;
    int delta_c;

    }

	estado_t;

    typedef enum

    {

    espera = 0,
    llenar = 1
   
    }
   
    estado;

    estado f_inicio(void);
    estado_t f_espera(estado);
    estado_t f_llenar(estado);


### Archivo main.c

    #include <stdio.h>
    #include <stdlib.h>
    #include "libreria.h"

    int main()

    {

    estado_t config;
    estado(espera) = espera;

    config = inicio();

    while(1)
    {
        switch(estado)
      {
        case espera: estado = f_espera(config);
                    break;
        case llenar: estado = f_llenar(config);
                    break;
      }

    return 0;

    }


### Archivo config.conf

    # Capacidad seteada
    cap_set 75
    # Delta de capacidad
    delta_c 5






