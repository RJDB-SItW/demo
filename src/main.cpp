
#include <iostream>
#include <thread>

void hello()
{
    std::cout << "线程跑起来了" << std::endl;
}

int main(int argc, char *argv[])
{
    std::thread t(hello);
    t.join();
}
