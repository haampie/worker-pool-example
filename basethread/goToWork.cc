#include "basethread.h"

void BaseThread::goToWork()
{
  std::cout << "Base thread goes to work\n";
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
  std::cout << "Base thread runs out of work\n";
}