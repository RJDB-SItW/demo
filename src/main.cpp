
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
    std::cout << "git正常工作1" << std::endl;
    std::cout << "git正常工作2" << std::endl;
    std::cout << "git正常工作3" << std::endl;
}
