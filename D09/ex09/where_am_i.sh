tst=$(ifconfig | grep "inet " | cut -d' ' -f2)
if test -z "$tst"
then
	echo "Je suis perdu!"
else
	echo $tst | tr ' ' '\n'
fi
