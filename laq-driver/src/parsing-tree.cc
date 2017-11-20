/*
 * Copyright (c) 2017 João Afonso. All rights reserved.
 */
#include <utility>
#include "src/laq-statement.h"
#include "src/parsing-tree.h"

namespace laq {

driver::parsing_tree::parsing_tree() {
}


void
driver::parsing_tree::insert_statement(const std::string& lvar,
                                       const std::string& op,
                                       const std::vector<std::string>& rvars,
                                       const std::string& expr) {
  statement stt(op, expr, rvars);
  tree.insert(std::pair<std::string, statement>(lvar, stt));
  vars.push_back(lvar);
}

std::string
driver::parsing_tree::getQuery() {
  std::string res = "";
  for (auto& v : vars) {
    if (v != "$$")
      res += v + "=";
    res += tree.at(v).toString() + "\n";
  }
  return res;
}

}  // namespace laq
