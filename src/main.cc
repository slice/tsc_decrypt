#include <iostream>
#include "tsc.h"

int main(int argc, char* argv[], char* envp[]) {
  if (argc < 2) {
    std::cerr << "usage: tscdecrypt [file]" << std::endl;
    return -1;
  } else {
    tsc* tsc_script = new tsc(std::string(argv[1]));
    std::cout << tsc_script->decrypt() << std::flush;
    delete tsc_script;
    return 0;
  }
}
