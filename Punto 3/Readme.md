#  Contador de Palabras en un Archivo de Texto (C)

Este programa en **C** permite contar cuántas veces aparece una palabra clave dentro de un archivo de texto.

##  Descripción

El programa lee un archivo de texto y busca cuántas veces se repite una palabra específica. 
Utiliza `fgets()` para leer línea por línea y `strstr()` para localizar las coincidencias dentro de cada línea.

## Requisitos para su correcta ejecución: 
Instalar:

    sudo apt update && sudo apt install gcc 

Compilamos:
    
    gcc -o buscar contadorDePalabra.c

Ejecutamos: 
    
    ./buscar key.txt Arroz

##Salida esperada: 

    La palabra 'Arroz' se repite 10 veces en el texto. 

