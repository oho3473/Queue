#include<iostream>
#include"Queue.h"

void printInfo()
{
	std::cout << "----QUEUE----" << std::endl;
	std::cout << "[1] ENQUEUE" << std::endl;
	std::cout << "[2] DEQUEUE" << std::endl;
	std::cout << "[3] EXIT" << std::endl;
	std::cout << "------------" << std::endl;
}

void ProcessUserInput(Queue& queue)
{
	int command{};

	while (true)
	{
		Print(queue);

		std::cout << std::endl;
		std::cout << "> ";
		std::cin >> command;

		switch (command)
		{
			case ENQUEUE:
			{
				int value;
				std::cout << "    > ";
				std::cin >> value;
				Enqueue(queue, value);
				break;
			}
			case DEQUEUE:
			{
				Dequeue(queue);
				break;
			}
			case EXIT:
			{
				return;
				break;
			}
			default:
				std::cout << "�߸��� ��ɾ� �Դϴ�." << std::endl;
				break;
		}
	}
}



int main()
{
	Queue myQueue;

	Initialize(myQueue);
	printInfo();
	ProcessUserInput(myQueue);

	ClearAll(myQueue);
}