tiny_add: main.o external/add.o
	clang++ -o tiny_add -I"./external" main.o external/add.o

main.o: main.cc
	clang++ -I"./external/" -o main.o main.cc

external/add.o: external/add.cc
	clang++ -o external/add.o external/add.cc
