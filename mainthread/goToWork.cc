#include "mainthread.h"

void MainThread::goToWork()
{
  std::cout << "Main thread goes to work\n";
  std::this_thread::sleep_for(std::chrono::milliseconds(1500));
  std::cout << "Main thread runs out of work\n";
}