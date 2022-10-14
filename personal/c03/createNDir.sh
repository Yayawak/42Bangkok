#!/bin/sh

# echo "Enter number of "
# n=$1
# if [ $# -eq 0 ]
# then
# 	echo "Enter number of directory to make."
# fi


echo "Enter prefix of directory (i.e. ex)"
read prefix_name
echo "Enter number of directory to make"
read n

for ((i=0; i<n; i++))
do
	# echo "$i"
	if [[ $i -lt 10 ]]
	then
		# create_name="$prefix_name 0$i"
		create_name="${prefix_name}0${i}"
	else	
		create_name="$prefix_name$i"
	fi
	 mkdir $create_name
	echo "$create_name"
	# echo "$create_name created."
done
