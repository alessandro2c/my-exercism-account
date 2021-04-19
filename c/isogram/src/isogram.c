#include "isogram.h"


bool is_isogram(const char phrase[]){
	if(phrase==NULL){
		return false;
	}

	for(uint8_t i = 0; i < strlen(phrase); i++){
		char selected = tolower(phrase[i]);
	    uint8_t occurrence = 0;
		if(selected != '-' && selected != ' '){
			for(uint8_t j = 0; j < strlen(phrase); j++){
				if(selected == tolower(phrase[j]))
					occurrence++;
				if(occurrence>1)
					return false;
			}
	}
	}


	return true;
}