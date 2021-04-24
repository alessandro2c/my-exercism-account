#include "isogram.h"


bool is_isogram(const char phrase[]){
  const int GAP_FROM_ZERO_INDEX = 97; 
  
  if(phrase==NULL){
		return false;
	}

  char repetitions[26] = {0}; //char from 97 -112

  for (const char *cp = phrase; *cp; cp++)
  {
    int selected = tolower((unsigned char)*cp);

    if(selected >= '0' && selected <= '9' )
      return false;

    if(selected >= 'a' && selected <= 'z' ){
      int index = selected - GAP_FROM_ZERO_INDEX; 

      if(++repetitions[index] > 1)
        return false;
    }
  }

	return true;
}