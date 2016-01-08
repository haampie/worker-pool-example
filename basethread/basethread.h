#ifndef THREAD_INCLUDED
#define THREAD_INCLUDED

#include <chrono>
#include <condition_variable>
#include <iostream>
#include <mutex>
#include <thread>

class BaseThread
{
  bool d_idle = true;
  bool d_stop = false;
  std::mutex d_wakeMutex;
  std::mutex d_waitMutex;
  std::condition_variable d_wakeCond;
  std::condition_variable d_waitCond;
  std::thread d_thread;
  void initThread();

public:
  virtual void goToWork();
  void wakeUp();
  void wait();
  void stop();
  
  BaseThread();
  ~BaseThread();
};

#endif