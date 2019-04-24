test: test.cpp AST.cpp ConstrParser.cpp
	g++ test.cpp ConstrParser.cpp AST.cpp -o test -ggdb
