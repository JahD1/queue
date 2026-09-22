//
//  main.cpp
//  Queue
//
//  Created by Nadjah Duke on 9/19/26.
//

#include <iostream>
#include "Queue.h"

int main(int argc, const char * argv[])
{
    Queue theQueue(4);
    
    theQueue.enqueue(41);
    theQueue.enqueue(3);
    theQueue.enqueue(24);
    theQueue.enqueue(5);
    
    theQueue.printQueue();
    
}
