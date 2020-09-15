#include <semaphore.h>
#include <iostream>

int main()
{
    sem_t event;
    sem_init(&event, 0, 0);
    sem_wait(&event);

    std::cout << "This should never happen" << std::endl;
    return 0;
}
