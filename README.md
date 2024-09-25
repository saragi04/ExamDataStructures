# ExamDataStructures

## NAME: Santiago Ramirez Giraldo
## CODE: 1.114.151.294

## PREGUNTA 1

## 1
Es necesario y mejor opción hacer un resize de un vector cuando este se llena en lugar de simplemente inicializarlo con un espacio "grande" de memoria para que siga almacenando datos a medida de que estos van siendo ingresados. Su razón de ser consiste en que el vector es una estructura de datos que se puede redimensionar, es decir, agrandar, como reducir su tamaño, además de esto, el propósito de una estructura de datos no es apartar espacio en memoria que no va a ser utilizado y tal vez el programa que haga uso de ella necesite para realizar otras operaciones, es decir, a medida de que voy necesitando espacio, lo voy solicitando por medio del riseze con el fin de optimizar la memoria que consuma el programa que utilice la estructura de datos "VECTOR".

## 2 
Si comparamos ambas estructuras de datos (vector vs lista enlazada) en términos de eficiencia, se debe pensar en el funcionamiento que requerimos de la estructura como tal. El vector puede ser más eficiente en términos de espacio, ya que sus elementos se organizan de manera consecutiva en memoria (a diferencia de la lista), en una misma región, lo que nos puede ayudar en el acceso rápido de sus elementos, y teniendo en cuenta también que no maneja nodos, que son un espacio adicional que ocupan las listas para su funcionamiento. Sin embargo, si pensamos en el funcionamiento de una lista, esta puede ser eficiente al momento de insertar elementos, ya que no hay necesidad de mover otros elementos (como si lo requiere el vector) para realizar estas operaciones. Otro de los casos a considerar es el tamaño que cada una maneja, que en ambos casos es dinámico, pero teniendo en cuenta que para el vector es necesario realizar resize, mientras que en la lista no. 

Dicho esto, creo que el vector puede ser más eficiente que la lista o viceversa, según la necesidad del programador para solucionar el problema que tenga en sus manos.



## PREGUNTA 2 

## 1

# Opción 1 (X)
Capacity = 5
Resize = Capacity*2.0

Para llegar hasta 10k:
5 10 20 40 80 160 320 640 1280 2560 5120 *10240*

Para el vector X su capacidad final es de 10240, por lo tanto su desperdicio es de *240*.

# Opción 2 (Y)
Capacity = 10 
Resize = Capacity*1.8

Para llegar hasta 10k:
10 18 32 57 102 183 329 592 1065 1917 3450 6210 *11178*

Para el vector Y su capacidad final es de 11178, por lo tanto su desperdicio es de *1178*

# Opción 3 (Z)
Capacity = 100
Resize = Capacity*2.0

Para llegar hasta 10k:
100 200 400 800 1600 3200 6400 *12800*

Para el vector Z su capacidad final es de 12800, por lo tanto su desperdicio es de *2800*

## 2

A la hora de ejecutar el programa, podemos considerar la eficiencia en términos de cantidad de veces que cada uno de los vectores realizó resize y también en cuanto a desperdicio de memoria, así que, consideremos lo siguiente:

Vector X
- Desperdicio: 240
- Cantidad de resize: 11

Vector Y
- Desperdicio: 1178
- Cantidad de resize: 12

Vector Z
- Desperdicio: 2800
- Cantidad de resize: 7

Dicho esto, podemos concluir que el vector X es más eficiente en términos de "DESPERDICIO DE MEMORIA", mientras que el vector Z es más eficiente en términos de "VELOCIDAD". 
