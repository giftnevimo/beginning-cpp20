// A simple C++ exception type

#ifndef DB_EXCEPTION_H
#define DB_EXCEPTION_H

import <stdexcept>;

class DataBaseException : public std::runtime_error
{
public:
  using std::runtime_error::runtime_error;  // Inherit constructor
};
