#include "basethread.h"

void BaseThread::stop()
{
  auto lock = std::unique_lock<std::mutex>(d_wakeMutex);
  d_idle = true;
  d_stop = true;
  d_wakeCond.notify_one();
}