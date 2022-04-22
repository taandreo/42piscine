#!/bin/bash
for FILE in $(ls); do
	if test -d $FILE; then
		if test -d $FILE/.git; then
			echo "moving $FILE/.git to $FILE/.git2"
			mv $FILE/.git $FILE/.git2
		fi
	fi
	git add $FILE
done