#include <votca/tools/version.h>
#include <iostream>
#include "version.h"
#include "config.h"

namespace votca { namespace csg {

#ifdef HGVERSION
  static const std::string version_str = VERSION " " HGVERSION " (compiled " __DATE__ ", " __TIME__ ")";
#else
  static const std::string version_str = VERSION "(compiled " __DATE__ ", " __TIME__ ")";
#endif

const std::string &CsgVersionStr()
{
    return version_str;
}

void HelpTextHeader(const std::string &tool_name)
{
    std::cout << tool_name << ", version " << votca::csg::CsgVersionStr() 
         << "\nvotca_tools, version " << votca::tools::ToolsVersionStr() 
         << "\n\n";
}

}}
