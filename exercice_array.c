#include <stdio.h>
#include<string.h>
int main()
{
  // algorithme qui calcule la somme des elemen paire 
  // le produit des element impaire 
  // le nombre des valeur null 
  
  
    int i, N_nulle ;
    float S_paire , P_impaire ; 
    float Tab[7];
    N_nulle = 0 ;
    S_paire = 0 ;
    P_impaire = 1 ;
    //remplisage du tableau 
      
    for (int i = 0 ; i <7;i++){
        scanf("%f",&Tab[i]);
    }

    //la somme des elements paire 
    
    for (i = 0 ; i<7;i++){
        if ((int)Tab[i] % 2 ==0){
            S_paire += Tab[i];
        }else {
            P_impaire *= Tab[i];
        }
        if(Tab[i] == 0){
            N_nulle +=1;
        }
    }
    
    printf("la somme des nombre paire est %f\n : ",S_paire);
    printf("la somme des nombre impaire est %f\n : ",P_impaire);
    printf("la somme des nombre null est %d\n : ",N_nulle);

    return 0;
}
