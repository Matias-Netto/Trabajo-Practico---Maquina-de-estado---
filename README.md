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

    #include <stdlib.h>
    #include <stdio.h>

    enum 
    {
    espera = 1,
    llenar = 2
    };

    int f_inicio (void)
    {
    int cap_set, delta_c;
    printf("ingrese capacidad maxima:\t");
    scanf("%d",&cap_set);
    printf("\nIngrese delta de la capacidad maxima:\t");
    scanf("%d",&delta_c);
    return cap_set+delta_c;
    }
    
    int f_lectura (void)
    {
        int cap_leida;
        printf("\nCapacidad leida:\t");
        scanf("%d",&cap_leida);
        return cap_leida;
    }

    int f_switch (int cap_leida)
    {
        int limite, e;
        limite=f_inicio();
        if (limite<cap_leida)
        {
            e = espera;
        }
        else
        {
            e = llenar;
        }
        return e;
    }

    void f_espera (void)
    {
        printf("Estado de espera\n");
    }

    void f_llenar (void)
    {
        printf("Estado de llenado\n");
    }



### Archivo main.c


    #include "libreria.h"
    int main()

    {
        int estado, e;
        estado = f_switch(e);
        f_lectura();
        switch (estado)
        {
            case espera:
                f_espera();
                break;
            case llenar:
                f_llenar();
                break;
        }
        system ("PAUSE");
        return 0;
    }









