/*
 * Este programa fue hecho para clasificar caracteres en un string
 *
 * Mario Emilio Aguilar Chung
 * A01411210@itesm.mx
 * 10/15/2018
 *
 */
#include <stdio.h>
#include <string.h>

int main(void) {

    char arr[100];
    int i;

    //Obteniendo el string del usuario
    printf ("Give me a series of characters:");
    fgets (arr, sizeof(arr),stdin);

    //Guardando el string en arr
    for (i = 0; i < strlen(arr); i++)
    //Estableciendo los valores para que se considere alphabet
    {
        if ((arr[i]>='a' && arr[i]<='z') || (arr[i]>='A' && arr[i]<='Z'))
        {
            printf ("%c is an alphabet\n", arr[i]);
        //Estableciendo los valores para que se considere vowel
            if ((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u')||(arr[i]=='A')||(arr[i]=='E')||(arr[i]=='I')||(arr[i]=='O')||(arr[i]=='U'))
            {
                printf ("\t%c is a vowel\n", arr[i]);
            }
            //Si no es vowel, es consonant
            else
            {
                printf ("\t%c is a consonant\n", arr[i]);
            }
            //Estableciendo los valores para que se considere digit
        }
        else if ((arr[i]>='0')&&(arr[i]<='9'))
        {
            printf ("%c is a digit \n", arr[i]);
        }
        //Estableciendo el valor del espacio
        else if (arr[i]==' ')
        {
            printf ("%c is a space \n", arr[i]);
        }
        //Si no es ninguna otra clasificacion, es caracter especial
        else
        {
            printf ("%c is a special character\n", arr[i]);
        }

    }
    return 0;
}