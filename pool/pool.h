#ifndef THREADPOOL_INCLUDED
#define THREADPOOL_INCLUDED

#include <vector>
#include "../mainthread/mainthread.h"
#include "../basethread/basethread.h"

class ThreadPool : public std::vector<BaseThread*>
{
public:
  ThreadPool(size_t workers);
};

ThreadPool::ThreadPool(size_t workers)
{
  push_back(new MainThread);

  for(size_t idx = 1; idx <= workers; ++idx)
    push_back(new BaseThread);
}

#endif