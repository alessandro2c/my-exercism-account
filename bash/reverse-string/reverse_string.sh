#!/usr/bin/env bash

main () {
  foo="$1"
  bar=""
  for (( i=${#foo}; i>=0; i-- )); do
    bar+="${foo:$i:1}"
  done
  echo "$bar"
}

main "$@"


