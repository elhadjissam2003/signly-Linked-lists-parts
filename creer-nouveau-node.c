//Créer une fonction pour créer un nouveau nœud :
#include <stdlib.h>
#include <stdlib.h>
strcut noeud{
  int value ;
  struct node *suivant;
}
struct noeud *creeNouveauNoeud(int val){
struct noeud *nouveauNoeud=(struct node *)malloc(sizeof(struct noeud );
  if(nouveauNoeud!=NULL){
    nouveauNoeud->value=val;
    nouveauNoeud->suivant=NULL;
    
  }
  return nouveauNoeud;

}
int main(){
  return 0;
  
}
