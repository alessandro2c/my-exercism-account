#include "acronym.h"

char *abbreviate(const char *phrase){

  if (phrase == NULL || *phrase == '\0' ) return NULL;

  char *acronym = malloc(10 * sizeof(char));

  int store = 1;
  int j = 0;


  while(*phrase) {
    if(((store == 0) && (isalpha(*phrase) == 0 && *phrase != '\''))){ //
      store = 1;

    }else if(((store == 1) && (isalpha(*phrase) != 0))){
      acronym[j] = toupper((unsigned char)*phrase);
      j++;
      store = 0;
    }
    phrase++;

  }

  acronym[j]='\0';

  return acronym;

}
