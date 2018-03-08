#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include "../../STL/STL.h"

namespace philous
{
/*
 * realize vector
 */
template <class T>
class vector : public STL
{
  public:
    // 构造函数
    vector();
    // 复制构造函数
    vector(vector<T> &&v) = default;
    vector(const vector<T> &v) = default;
    vector &operator=(vector<T> &&v) = default;
    vector &operator=(const vector<T> &v) = default;
    ~vector();

  private:
    T *vec;
    int size;
};
}

#endif // !VECTOR_VECTOR_H
