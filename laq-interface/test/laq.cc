/*
 * Copyright (c) 2017 João Afonso. All rights reserved.
 */
#include <iostream>
#include "laq-driver.hh"

int
main(int argc, char *argv[]) {
  laq::driver driver;
  for (int i = 1; i < argc; ++i)
  {
    if (argv[i] == std::string ("-p"))
      driver.trace_parsing = true;
    
    else if (argv[i] == std::string ("-s"))
      driver.trace_scanning = true;
    
    else if (!driver.parse (argv[i]))
      std::cout << "Parse completed" << std::endl;
  }
}