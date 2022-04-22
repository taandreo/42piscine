#!/bin/sh
NBR=$(echo "$FT_NBR1 + $FT_NBR2" | tr "\'" '0' |  tr '\\\"\?\!mrdoc' "123401234") && echo "obase=13;ibase=5; $NBR" | bc | tr '0123456789ABC' 'gtaio\ luSnemf'