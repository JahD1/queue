//
//  Queue.h
//  Queue
//
//  Created by Nadjah Duke on 9/19/26.
//

#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    int *qArray;
    int capacity,nElems;
    int front, rear;
    
public:
    Queue(int size)
    {
        capacity = size;
        qArray = new int[capacity];
        front = 0;
        rear = -1;
        nElems = 0;
    }
    
    void enqueue(int data);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int queueFront();
    int queueBack();
    void printQueue();
    
};


#endif // !QUEUE_H
