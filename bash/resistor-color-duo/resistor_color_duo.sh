#!/usr/bin/env bash


   main () {
     declare -A colors_of_resistor=( [black]=0 [brown]=1 [red]=2 [orange]=3 [yellow]=4 [green]=5 [blue]=6 [violet]=7 [grey]=8 [white]=9 )

     COUNTER=0
     result=""

     
	 for i in $@; do

		let COUNTER=COUNTER+1 
	    
	    if [[ -z ${colors_of_resistor[$i]} ]];
	    then
	    	echo "invalid color"
	    	exit 1;
	    fi

	    result="$result${colors_of_resistor[$i]}"

	    
	    if [[ $COUNTER == 2 ]];
	    then
	    	echo $result
	    	exit 0;
	    fi
	 done
	 
	 echo $result

   }

   main "$@"