mkdir test0 && chmod 715 test0 && touch -m -t 06012047 test0
mkdir test2 && chmod 504 test2 && touch -m -t 06012245 test2
ln -s test0 ./test6 && touch -h -t 06012220 test6
echo -n '0000' > test1 && chmod 714 test1 && touch -m -t 06012146 test1
echo -n '0'    > test3 && chmod 404 test3 && touch -m -t 06012344 test3
echo -n '00'   > test4 && chmod 641 test4 && touch -m -t 06012343 test4
echo -n '0'    > test5 && chmod 404 test5 && touch -m -t 06012344 test5