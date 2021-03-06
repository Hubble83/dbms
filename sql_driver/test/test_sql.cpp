/*
 * Copyright (c) 2018 João Afonso. All rights reserved.
 *
 * Unit tests for SQL parser
 */
#include <gtest/gtest.h>
#include "include/sql_driver.hpp"

#include <iostream>

TEST(sqlParser, q6) {
  sql::driver d;
  ASSERT_FALSE(d.parse("queries/sql/6.sql"));
  // ASSERT_EQ(d.getQuery(),
  //     "a=filter(args[0]>=\"1994-01-01\"&&args[0]<\"1995-01-01\")\n"
  //     "b=filter(args[0]>=0.05&&args[0]<=0.07)\n"
  //     "c=hadamard(a,b)\n"
  //     "d=filter(args[0]<24)\n"
  //     "e=hadamard(c,d)\n"
  //     "f=lift(args[0]*args[1])\n"
  //     "g=hadamard(e,f)\n"
  //     "h=sum(g)\n"
  //     "return(h)\n");
}

int
main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
