#ifndef STL_STL_H
#define STL_STL_H

#include <curses.h>

namespace philous
{
/*
     * Struct Configuration
     */
struct Configuration
{
    std::string version;
    std::string author;
};
/*
     * Class provide basic info.
     */
class STL
{
  public:
    STL(bool verbose = FALSE);
    ~STL();
    void alert(std::string info = "");
    void enableVerbose();
    void disableVerbose();

  private:
    void alertConfig();
    bool verbose;
    static int count;
    const Configuration config;
};
}

#endif //STL_STL_H