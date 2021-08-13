#! /bin/bash

if [ $# -ne 1 ]
then
	echo "usage: $0 <cpp-file>"
	exit
fi

export CPLUS_INCLUDE_PATH=$PWD
g++ $1 -g && ./a.out
