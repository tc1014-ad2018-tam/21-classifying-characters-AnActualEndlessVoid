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
    int alfabetos = 0;
    int vocales = 0;
    int consonantes = 0;
    int digitos = 0;
    int espacios = 0;
    int especiales = 0;

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
            alfabetos++;
        //Estableciendo los valores para que se considere vowel
            if ((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u')||(arr[i]=='A')||(arr[i]=='E')||(arr[i]=='I')||(arr[i]=='O')||(arr[i]=='U'))
            {
                printf ("\t%c is a vowel\n", arr[i]);
                vocales++;
            }
            //Si no es vowel, es consonant
            else
            {
                printf ("\t%c is a consonant\n", arr[i]);
                consonantes++;
            }
            //Estableciendo los valores para que se considere digit
        }
        else if ((arr[i]>='0')&&(arr[i]<='9'))
        {
            printf ("%c is a digit \n", arr[i]);
            digitos++;
        }
        //Estableciendo el valor del espacio
        else if (arr[i]==' ')
        {
            printf ("%c is a space \n", arr[i]);
            espacios++;
        }
        //Si no es ninguna otra clasificacion, es caracter especial
        else
        {
            printf ("%c is a special character\n", arr[i]);
            especiales++;
        }
    printf ("There are %i alphabets in the string\n",alfabetos);
        printf ("\t Out of which %i are vowels, and %i are consonants\n", vocales,consonantes);
        printf ("There are %i digits in the string \n", digitos);
        printf ("There are %i spaces in the string\n", espacios);
        printf ("There are %i special characters in the string\n", especiales);
    }
    return 0;
}