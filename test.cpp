#include "ConstrParser.h"
#include "AST.h"
#include <iostream>

int main(){
  ConstrParser *myParser = new ConstrParser("test.txt");
  myParser->parse();
  if(myParser->valid()){
    std::cout << "pass\n";
    myParser->build_asp();
    std::cout << myParser->get_asp();
  }
  else{
    std::cout << myParser->get_errors();
  }
  /*
    std::ifstream teststream("test.txt", std::ifstream::in);
    std::string teststring;
    teststream >> teststring;
    std::cout << teststring << std::endl;
    //teststream.unget();
    teststream.seekg(-3, std::ios_base::cur);
    teststream >> teststring;
    std::cout << teststring << std::endl;

    char c;
    do {
      c = teststream.get();
      std::cout << c << std::endl;
    }while(c >= 0);

    //myParser->set_inFile("test.txt");
    //std::cout << "The file is: " << myParser->get_inFile() << std::endl;
    teststream.close();
     */
    delete myParser;

    return 0;
}
