#include "basethread.h"

BaseThread::BaseThread()
  :
  d_idle(true),
  d_thread(&BaseThread::initThread, this)
{
  std::cout << "Base thread ctor\n";
}