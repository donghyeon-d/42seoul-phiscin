cat testcase | while read line
do
	./rush-01 $line
done | tee output
ERROR=$(grep -r 'Error' ./output)
echo $ERROR
