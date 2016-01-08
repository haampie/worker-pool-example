#ifndef MAINTHREAD_INCLUDED
#define MAINTHREAD_INCLUDED

#include "../basethread/basethread.h"
#include <iostream>
#include <chrono>
#include <thread>

class MainThread : public BaseThread
{
public:
  void goToWork() override; 
  MainThread();
};

#endif