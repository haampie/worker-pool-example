#include "basethread.h"

BaseThread::~BaseThread()
{
  std::cout << "D'tor called\n";
  d_thread.join();
}