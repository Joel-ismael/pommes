#include<stdio.h>
int main(){
        int n,p;
        int matrice[n][p],vecteur[n],resultat[p]; 
            printf("entrer la taille du vecteur ligne n \n");
            scanf("%d",&n);
            printf("entrer le nombre de colonne de la matrice (p)\n");
            scanf("%d", &p);
            printf("entrerles elements du vecteur ligne\n");
      for(int i=0; i<n; i++){     
                scanf("%d",&vecteur[i]);
       }
                
        printf("entrer les elements de la matrice\n");
        for(int i=0;i<n;i++){
        for( int j=0;j<p;j++){
                scanf("%d",&matrice[i][j]);
                }
                }
       for( int j=0;j<p;j++){
                   resultat[j]=0;
}
                if(n!=p){
                printf("operation impossibe");
                }else{
        for(int j=0;j<p;j++){
         for(int i=0;i<n;i++){
                  resultat[j]+=vecteur[i]*matrice[i][j];
         }        
         }
        }
        printf("le produit vecteur ligne* matrice est: \n");
         for( int j=0;j<p;j++){
            printf("%d",resultat[j]);
            }
            return 0;
        }