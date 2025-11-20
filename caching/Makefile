all:
	gcc -O0 -g main.c -o main
	gcc -O0 -g main-unoptimized.c -o main-unoptimized

benchmark: all
	sudo chrt -f 99 /usr/bin/time --verbose ./main
	sudo chrt -f 99 /usr/bin/time --verbose ./main-unoptimize
