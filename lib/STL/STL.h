#ifndef STL_STL_H
#define STL_STL_H

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
  STL(bool verbose = false);
  ~STL();
  void alert(std::string info = "");
  void setVerbose(bool verbose);
  bool getVerbose();

private:
  void alertConfig();
  bool verbose;
  static int count;
  const Configuration config;
};
}

#endif //STL_STL_H