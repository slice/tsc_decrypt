#include "tsc.h"

#include <iostream>
#include <fstream>
#include <sstream>

tsc::tsc(const std::string& filename): m_filename(filename) {
}

void tsc::read() {
  std::ifstream file(m_filename);
  std::stringstream contents_stream;
  contents_stream << file.rdbuf();

  m_contents = contents_stream.str();
  m_did_read = true;
}

const std::string tsc::decrypt() {
  if (!m_did_read) read();

  const char& key = m_contents[m_contents.size() / 2];

  std::string decrypted;

  for (const char& byte : m_contents) {
    decrypted += byte - key;
  }

  return decrypted;
}
