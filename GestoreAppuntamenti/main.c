//
//  main.c
//  GestoreAppuntamenti
//
//  Created by Carlo Contardi on 06/03/25.
//

#include <stdio.h>
typedef struct{
    int giorno;
    int mese;
    int anno;
}Data;
typedef struct{
    int ore;
    int minuti;
    int secondi;
}Ora;
typedef struct{
    char nome[256];
    char cognome[256];
    Data data_nascita;
}Persona;
typedef struct{
    Persona persona;
    Data data_appuntamento;
    Ora ora_appuntamento;
    char motivo[256];
}Appuntamento;

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
