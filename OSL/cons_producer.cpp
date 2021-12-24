#include <cstdlib>
#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>
using namespace std;

mutex g_mutex;
bool g_ready = false;
int g_data = 0;
int produceData(){
    int randomNumber = rand() % 1000;
    cout<<"produce data : "<<randomNumber<<"\n";
    return randomNumber;
}
void consumeData(int data)
{
    cout<<"receive data : "<<data<<"\n";
}

void consumer(){
    while (true)
    {
        while (!g_ready)
        {
            this_thread::sleep_for (chrono::seconds(1));
        }
        g_mutex.lock();
        consumeData(g_data);
        g_ready = false;
        g_mutex.unlock();
    }
}

void producer(){
    while (true)
    {
        g_mutex.lock();
        g_data = produceData();
        g_ready = true;
        g_mutex.unlock();
        while (g_ready)
        {
            this_thread::sleep_for (chrono::seconds(1));
        } 
    }
}

void consumerThread(){
    consumer();
}
void producerThread(){
    producer();
}
int main(){
    thread t1(consumerThread);
    thread t2(producerThread);
    t1.join();
    t2.join();
    return 0 ;
}