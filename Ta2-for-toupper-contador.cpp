#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale>
using namespace std;
int main(int argc, char const *argv[]){
setlocale(LC_ALL, "portuguese");

char nome [30];
int i;

printf ("\nDigite o sobrenome do aluno(a):\n");
gets(nome);
    for (i=0; nome[i]!=' '; i++) 
        nome[i] = toupper (nome[i]);
        printf ("\n\nSobrenome convertido: %s\n\n", nome); 
        //getch();
    
return 0;
}   
