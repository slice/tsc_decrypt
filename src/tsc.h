#pragma once

#include <string>

class tsc {
  const std::string m_filename;
  std::string m_contents;
  bool m_did_read;
public:
  tsc(const std::string& filename);
  void read();
  const std::string decrypt();
};
