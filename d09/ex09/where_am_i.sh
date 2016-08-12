#!/bin/sh
ip=$(ifconfig | grep "inet" | cut -d' ' -f2 | grep -o -E '([0-9]{1,3}.){3}[0-9]{1,3}')
if test -z "$ip"
then
    echo "Je suis perdu!"
else
    echo $ip | tr ' ' '\n'
fi