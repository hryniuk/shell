/*
 * author: Lukasz Hryniuk
 * e-mail: lukequaint@gmail.com
 * */
#include "host.h"

extern "C" {
#include <unistd.h>
}

std::string get_username()
{
  char* cusername = getlogin();
  if (cusername != nullptr) {
    return std::string(cusername); 
  } else {
    return std::string("unknown");
  }
}

std::string get_cwd() // current working directory
{
  char* cwd = get_current_dir_name();
  if (cwd != nullptr) {
    return std::string(cwd); 
  } else {
    return std::string("unknown");
  }
}

std::string get_hostname()
{
  char hostname[100];
  if (!gethostname(hostname, NULL)) {
    return std::string(hostname);
  } else {
    return std::string("unknown");
  }
}
