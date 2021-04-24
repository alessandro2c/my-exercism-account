#include "isogram.h"


bool is_isogram(const char phrase[]){
	if(phrase==NULL){
		return false;
	}

	//for (size_t i = 0, len = strlen(phrase); i < len; i++)
	// or
	//for (size_t i = 0; phrase[i];  i++)
	// or
	//for (const char *cp = phrase; *cp; cp++)


	for (size_t i = 0; phrase[i];  i++){
		char selected = tolower((unsigned char)phrase[i]);
	    uint8_t occurrence = 0;
		if(selected != '-' && selected != ' '){
			for (const char *cp = phrase; *cp; cp++)
			{
				if(selected == tolower((unsigned char)*cp))
					occurrence++;
				if(occurrence>1)
					return false;
			}
	}
	}


	return true;
}