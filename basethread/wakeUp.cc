#include "basethread.h"

void BaseThread::wakeUp()
{
  auto lock = std::unique_lock<std::mutex>(d_wakeMutex);
  d_idle = false;
  d_wakeCond.notify_one();
}