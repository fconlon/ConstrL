#ifndef CONSTR_PARSER_H
#define CONSTR_PARSER_H
#include <string>
#include <fstream>
#include "AST.h"

class ConstrParser {
	AST ast;
	int lineNum, colNum, opcount, errcount;
	std::ifstream *inFile;
	std::string inFileName, curr_constr, errors;
	bool start_new_terms_list, valid_program;
	char next_token();
	void return_token();
	std::string get_name();
	void clear_space();
	void add_error(std::string);
	bool is_keyword(std::string);
	void constraint();
	void expr();
	void terms_list();
	void terms();
	void term();
	void varlist();
	void compop();
public:
	ConstrParser();
	ConstrParser(std::string);
	~ConstrParser();
	std::string get_inFileName() { return this->inFileName; }
	void set_inFile(std::string fn);
	void parse();
	void build_asp();
	std::string get_asp();
	bool valid() { return this->valid_program; }
	std::string get_errors() { return this->errors; }
};
#endif