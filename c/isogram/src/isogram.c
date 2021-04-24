#include "isogram.h"


bool is_isogram(const char phrase[]){
	if(phrase==NULL){
		return false;
	}

  char repetitions[26] = {0}; //char from 97 -112

  for (const char *cp = phrase; *cp; cp++)
  {
    int selected = tolower((unsigned char)*cp);
    if(selected != 45 && selected != 32 ){
      int index = selected - 97;

      repetitions[index]++;

      if(repetitions[index] > 1)
        return false;
    }
  }

	return true;
}