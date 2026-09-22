//
//  Queue.cpp
//  Queue
//
//  Created by Nadjah Duke on 9/19/26.
//

#include <iostream>
#include "Queue.h"

bool Queue::isEmpty()
{
    return (nElems==0);
}

bool Queue::isFull()
{
    return(nElems==capacity);
}
void Queue::enqueue(int data)
{
    if(isFull())
    {
        throw std::runtime_error("Queue full cannot add");
    }
    rear = (rear+1)%capacity;
    qArray[rear] = data;
    
    
    nElems++;
    
}
int Queue::dequeue()
{
    if(isEmpty())
    {
        throw std:: runtime_error("Queue is empty cannot remove \n");
    }
    
    int deletedInfo =  qArray[front];
    
    front = (front+1)%capacity;
    nElems--;
    
    return deletedInfo;
}
int Queue::queueBack()
{
    if(isEmpty())
    {
        throw std:: runtime_error("Queue is empty cant peak back \n");
    }
    
    return rear;
}
int Queue::queueFront()
{
    if(isEmpty())
    {
        throw std:: runtime_error("Queue is empty cant peak front \n");
    }
    return front;
}
void Queue::printQueue()
{
    if(isEmpty())
    {
        throw std:: runtime_error("Queue is empty cant print \n");
    }
    
    int current = front;
    while(current!= rear)
    {
        std::cout << qArray[current] << "\n";
        current = (current+1)%capacity;
    }
    
    std::cout << qArray[current] << "\n";
}

