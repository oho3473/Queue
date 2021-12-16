#include<iostream>
#include "Queue.h"

void Enqueue(Queue& queue, int value)
{
	
}

bool Dequeue(Queue& queue)
{
	return false;
}

void Initialize(Queue& queue)
{
	queue.count = 0;
	queue.pFront = nullptr;
	queue.pRear = nullptr;
}

void ClearAll(Queue& queue)
{
	Element* pElement = queue.pFront;

	while (pElement != nullptr)
	{
		Element* pNext = pElement->pNext;
		delete pElement;
		pElement = pNext;
	}
}

void Print(Queue& queue)
{
	Element* pElement = queue.pFront;

	while (pElement != nullptr)
	{
		std::cout << pElement->value << std::endl;
		pElement = pElement->pNext;
	}
}
