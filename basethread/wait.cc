#include "basethread.h"

void BaseThread::wait()
{
  auto lock = std::unique_lock<std::mutex>(d_waitMutex);
  while (not d_idle)
    d_waitCond.wait(lock);
}