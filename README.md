# Trabajo Practico - Maquina de estado
## Maquina de Estado - Control de llenado de un tanque de agua 


## Memoria descriptiva

Mi sistema representa un control de llenado de un tanque con capacidad y delta capacidad configurable. La capacidad es leida por solo un sensor. 

En primer lugar, se carga el tanque siempre que la capacidad leida sea menor a la seteada menos el delta. Una vez que supera a la capacidad seteada, se frena el llenado del tanque hasta que la capacidad leida vuelva a ser menor a la configurada. 

## Diagrama 

![./imagenes/DiagramaCTanque.png]

- C: Capacidad leida
- Cset: Capacidad seteada 
- DC: Delta de la capacidad  

