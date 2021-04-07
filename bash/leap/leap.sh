#!/usr/bin/env bash

	main () {

		re='^[0-9]+$'
		year="$1"

		output="none"

		if  (! [[ $year =~ $re ]]); then
			echo "Usage: leap.sh <year>";
			exit 1;
		fi

		if [[ $# -ne 1  ]]; then
			echo "Usage: leap.sh <year>";
			exit 1;
		fi

		if  [[ $(expr $year % 100) = 0 ]] && [[ $(expr $year % 400) > 0 ]] ; then
			echo "false"
			exit 0;
		fi
		
 		if [[ $(expr $year % 4) > 0 ]]; then
			echo "false"
			exit 0;
		fi

		if [[ $(expr $year % 4) = 0 ]]; then
			echo "true"
			exit 0;
		fi

 		if  [[ $(expr $year % 400) = 0 ]]; then
			echo "true"
			exit 0;
		fi


 		if  [[ $(expr $year % 20	) = 0 ]]; then
			echo "true"
			exit 0;
		fi		
		
		echo "false"
		exit 0;

	}

	main "$@"
