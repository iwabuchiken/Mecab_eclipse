#!/bin/bash

############## Get time label
#if $1 = ""; then
echo "arguments=$@"
if [ -n $1 ]; then
	echo "No argument"
#	time_label = `date '+%Y%m%d_%k%M%S'`
	time_label=`date '+%Y%m%d_%k%M%S'`

else
	time_label=$1
#	echo "\$1=$1"
fi

echo "time_label=$time_label"

echo "\$@=$@"

#for x in $@; do
##	echo "x=$x"
	
#done

############## Touch relevant files
for arg in $@; do
	flag=`echo $arg|cut -d "=" -f 1`
#	echo "flag=$flag"
#	if $flag = "-T"; then
#	if $flag="-T"; then
	if [ "$flag" == "-T" ]; then
		file_name=`echo $arg|cut -d "=" -f 2`	
		touch $file_name
		echo "$file_name => Touched"
	fi
done

############## Set debug flag
dflag=0

for arg in $@; do
	echo "arg=$arg"
	if [ "$arg" == "-D" ]; then
		echo "-D!"
		dflag=1
		break
	else
#		make > make_$time_label.log
#		sudo make install > install_$time_label.log
#		mecab
		echo "No -D"
	fi	
done

############## Execute make
if [ $dflag -eq 0 ]; then
	echo "Starting make"
	make > build-log/make_$time_label.log
	echo "Starting make istall"
	sudo make install > build-log/install_$time_label.log
	mecab
fi

