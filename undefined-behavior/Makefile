all:
	gcc -fwrapv main.c -o main-fwrapv
	gcc main.c -O0 -o main-nooptimize
	gcc main.c -o main-default

benchmark: all
	@echo "Default:"
	./main-default
	@echo "Nooptimize:"
	./main-nooptimize
	@echo "Fwrapv:"
	./main-fwrapv
