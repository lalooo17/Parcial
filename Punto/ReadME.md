# Analizador Léxico en AWK

Este script en **AWK** analiza tokens en una línea de texto e identifica si son operadores (`+`, `++`), números enteros, números reales o tokens desconocidos.

---

## Descripción

El script recorre cada palabra (token) en la entrada y la clasifica en una de las siguientes categorías:

| Token | Clasificación |
|--------|----------------|
| `+`    | SUMA          |
| `++`   | INCR (Incremento) |
| `42`   | ENTERO        |
| `3.14` | REAL          |
| `xyz`  | TOKEN DESCONOCIDO |

### Ejemplo de uso:

Instalar:

    sudo apt install gawk

Ubicamos la carpeta donde se encuentra el archivo "Automata.awk" y "token.txt":

    cd "Nombre de la carpeta"


Otorgamos permisos con:

    chmod +x Automata.awk

Ejecutamos con:
    
    ./Automata.awk token.txt

##Salida esperada: 

    '+' SUMA
    ++ INCR
    1239212 ENTERO
    45.3 REAL
