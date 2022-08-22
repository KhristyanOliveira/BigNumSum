#include <stdio.h>
#include <stdlib.h>
#include "num.h"

int main(int argc, char **argv)
{ 

 // const char * s = "1234";
 //Num *  n = numCreate(s);
 // numPrint (n, stdout);
  
  
  Num *n1=NULL, *n2=NULL, *ad =NULL, *exp=NULL, *mult=NULL;
  char *nUm, *nDois; // tirei o const
  char c = '\0';

  
  c = getchar (); // operacao
  scanf("%s %s", nUm, nDois); // 'numeros'


  n1 = numCreate(nUm);
  n2 = numCreate(nDois);
  

  switch (c)
  {
    case 'a' : // adicionar
    ad =  numAdd(n1,n2);
    numPrint(ad, stdout);
    break;
    
    case 'm' : // multiplicar
    mult =  numMultiply(n1,n1);
    numPrint(mult, stdout);
    break;
    
    case 'e' : // elevar
    exp = numExp(n1,n2); 
    numPrint(exp, stdout);
    break;
  }

    numDestroy(n1);
    numDestroy(n2);

  // alocar para mult, ad e exp para dar free
  
    return 0;
}