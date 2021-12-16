#pragma once

enum Command
{
	ENQUEUE = 1,
	DEQUEUE = 2,
	EXIT = 3
};

struct Element
{
	int value;
	Element* pNext;
};

struct Queue
{
	int count;
	Element* pFront;
	Element* pRear;
};

void Enqueue(Queue& queue, int value);
bool Dequeue(Queue& queue);
void Initialize(Queue& queue);
void ClearAll(Queue& queue);
void Print(Queue& queue);

