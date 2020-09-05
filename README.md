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


	#include <stdio.h>
    #include <stdlib.h>

    main()
    {
	   float Cset;
	   float C;
	   float DC;
	
	   printf("Ingresar valor de Capacidad deseada:\t");
	   scanf("%f",&Cset);
	   printf("Ingresar valor de Delta Capacidad deseada:\t");
	   scanf("%f",&DC);
	   printf("Capacidad actual recibida:\t");
	   scanf("%f",&C);	
	   while (C<Cset)
	      {
		     C=C+1;
	      }
	   while (C>Cset)
	      {
		      C=C-1;
	      }
    }
.




