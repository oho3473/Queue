#include<iostream>
#include "Queue.h"

void Enqueue(Queue& queue, int value)
{
	Element* pElement = new Element{ value, nullptr };

	if (queue.pFront == nullptr)
	{
		queue.pFront = pElement;
		queue.pRear = pElement;
		queue.count++;
		return;
	}

	pElement->pNext = queue.pFront;
	queue.pFront = pElement;
	queue.count++;
}

bool Dequeue(Queue& queue)
{
	if (queue.count == 0)
	{
		std::cout << "QUEUE is empty!" << std::endl;
		return false;
	}

	Element* pTemp = queue.pFront;
	queue.pFront = queue.pFront->pNext;
	queue.count--;

	std::cout << "DEQUEUE : " << pTemp->value << std::endl;
	delete pTemp;

	return true;
	
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
