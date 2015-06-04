pool_puzzle: pool_puzzle.c
	gcc pool_puzzle.c -o pool_puzzle

scuba_diver: scuba_diver.c
	gcc scuba_diver.c -o scuba_diver

enumtest: enumtest.c
	gcc enumtest.c -o enumtest

tour: tour.c
	gcc -g  tour.c -o tour

spies: spies.c
	gcc -g spies.c -o spies

find: find.c
	gcc find.c -o find

test_drive: test_drive.c
	gcc test_drive.c -o test_drive

dear_johns: dear_johns.c
	gcc dear_johns.c -o dear_johns

price_drinks: price_drinks.c
	gcc price_drinks.c -o price_drinks

encrypt.o: encrypt.c
	gcc -c encrypt.c -o encrypt.o

checksum.o: checksum.c
	gcc -c checksum.c -o checksum.o

libhfsecurity.a: encrypt.o checksum.o
	ar -rcs libhfsecurity.a encrypt.o checksum.o

bank_vault: bank_vault.c libhfsecurity.a
	gcc bank_vault.c -I .  -L . libhfsecurity.a  -o bank_vault



















