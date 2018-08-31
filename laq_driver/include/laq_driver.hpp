/*
 * Copyright (c) 2018 João Afonso. All rights reserved.
 */
#ifndef LAQ_DRIVER_INCLUDE_LAQ_DRIVER_H_
#define LAQ_DRIVER_INCLUDE_LAQ_DRIVER_H_
#include <set>
#include <string>
#include <vector>
#include "build/laq_parser.hpp"
#include "include/database.hpp"

// Tell Flex the lexer's prototype ...
#define YY_DECL                                 \
  yy::laq_parser::token_type                    \
  yylex(yy::laq_parser::semantic_type* yylval,  \
        yy::laq_parser::location_type* yylloc,  \
        laq::driver* driver)
// ... and declare it for the parser's sake
YY_DECL;

namespace laq {

// Conducting the whole scanning and parsing
// of LAQ (Linear Algebra Query language)
class driver {
 public:
  driver();
  virtual ~driver();

  // Handling the scanner
  void scan_begin();
  void scan_end();
  bool trace_scanning;

  // Run the parser. Return 0 on success
  int parse(const std::string& f);
  std::string file;
  bool trace_parsing;

  // Error handling
  void error(const yy::location& l, const std::string& m);
  void error(const std::string& m);

  // Check variable definition
  void add_var(const std::string& var);
  bool var_exists(const std::string& var);

  // Add list of variables to load from disk
  void addDatabaseVar(const std::string& table, const std::string& attribute);

  // Inserts a new statement in the list. Return 0 on success
  int insertStatement(const std::string& lvar,
                      const std::string& op,
                      const std::vector<std::string>& rvars = {},
                      const std::string& expr = "");

  // Provides parsed query in string format
  std::string getQuery();
  std::string toCpp(engine::Database db);

  // Return the number of expvars
  size_t count_exp_vars();
  // Add variable contained in any expression
  void add_exp_var(const std::string& var);
  // Get variables of current expression and clear the temporary storage
  std::vector<std::string> clear_exp_vars();

 private:
  // Staments of a LA script
  class ParsingTree;

  // Assigned variables of a LA script
  std::set<std::string> variables;

  // Variables to be loaded from disk
  std::set<std::pair<std::string, std::string>> dbvars;

  // Temporarily stores the list of variables inside expressions
  std::vector<std::string> expvars;

  // List of statements
  ParsingTree* laquery;
};  // class driver
}  // namespace laq

#endif  // LAQ_DRIVER_INCLUDE_LAQ_DRIVER_H_
