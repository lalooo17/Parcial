#!/usr/bin/awk -f

{
    for (i = 1; i <= NF; i++) {  
        token = $i
        if (token ~ /^\+$/) {
            print token, "SUMA"
        } 
        else if (token ~ /^\+\+$/) {
            print token, "INCR"
        } 
        else if (token ~ /^[0-9]+$/) {
            print token, "ENTERO"
        } 
        else if (token ~ /^[0-9]+\.[0-9]+$/) {
            print token, "REAL"
        } 
        else {
            print token, "TOKEN DESCONOCIDO"
        }
    }
}

