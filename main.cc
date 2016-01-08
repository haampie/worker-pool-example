#include "pool/pool.h"
#include <chrono>
#include <iostream>
#include <thread>

int main()
{
  ThreadPool pool(2);

  std::cout << "Initialized a pool of workers\n";

  for (auto &task : pool)
    task->wakeUp();

  std::this_thread::sleep_for(std::chrono::seconds(3));

  for (auto& task : pool)
    task->stop();

  std::cout << "Stop it!\n";
}