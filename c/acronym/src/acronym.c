#include "acronym.h"

/*void clear_str(const char *orig, char *dest){

  size_t i = 0;

  for (const char *cp = orig; *cp; cp++){

    int selected = (unsigned char)*cp;
    if(isalpha(selected) != 0)
      dest[i] = (char)selected;
    else
      dest[i] = (char)SPACE;

    //printf("%c\n", clstr[i]);
    i++;

  }
}
*/

char *abbreviate(const char *phrase){

  char *acronym = malloc(10 * sizeof(char));
  //char* acronym[256]={0};
  //char *pacronym = acronym;

  int store = 1;
  int i,j = 0;


  //while( phrase[i] != '\0') {
  while(*phrase) {
    //int selected = (unsigned char)phrase[i];
    //printf("%c\n",selected);
    //printf("%c,isalpha  %d\n", phrase[i],isalpha(phrase[i]));

    //printf("store: %d, isalpha: %d\n",store,isalpha(phrase[i]));
    //printf("%d\n", ((store == 0) && (isalpha(phrase[i]) == 0)));
    //if(((store == 0) && (isalpha(phrase[i]) == 0))){ //
    if(((store == 0) && (isalpha(phrase[i]) == 0))){ //
      //printf("uno\n");//il successivo lo metto a uno
      store = 1;

    }else if(((store == 1) && (isalpha(phrase[i]) != 0))){
      //printf("due\n"); //salvo il dato nell'array
      acronym[j] = toupper((unsigned char)*phrase);
      //printf("%c,%c\n", acronym[j],phrase[i]);
      j++;
      store = 0;
    }
/*    if((store == 1) && (isalpha(phrase[i]) == 0)){
      acronym[j] = (char)phrase[i];
      printf("%c", acronym[j]);
      j++;
      store = 0;
    }

    if((store == 0) && (isalpha(phrase[i]) == 0))
      store = 1;*/

    i++;

  }

  //printf("res: %s\n",pacronym);



  return acronym;

}
