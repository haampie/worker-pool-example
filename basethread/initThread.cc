#include "basethread.h"

void BaseThread::initThread()
{
  while (true)
  {
    {
      auto lock = std::unique_lock<std::mutex>(d_wakeMutex);

      while (d_idle && not d_stop)
        d_wakeCond.wait(lock);

      if (d_stop)
        return;
    }

    goToWork();

    d_waitCond.notify_all();
  }
}