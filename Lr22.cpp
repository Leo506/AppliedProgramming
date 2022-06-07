#include <iostream>
#include <string>

using namespace std;

struct Stack
{
	char info;
	Stack* next;
	Stack* prev;
};

void push(Stack** sp, char item);
char pop(Stack** sp, bool& error);
char peek(Stack** sp, bool& error);
bool contains(const char item, const char* array, int length);
int index(const char item, const char* array, int length);

int main()
{
	string input;
	getline(cin, input);

	char open[] = {'(', '{', '['};
	char close[] = { ')', '}', ']' };
	const int NUMBER_OF_TYPES = 3;

	bool result = true;
	bool error = false;;

	Stack* stack = NULL;

	for (int i = 0; i < input.length(); i++)
	{
		char symbol = input[i];

		if (contains(symbol, open, NUMBER_OF_TYPES))
			push(&stack, symbol);
		else
		{
			char fromStack = pop(&stack, error);
			char toCompare = open[index(symbol, close, NUMBER_OF_TYPES)];
			if (error || fromStack != toCompare)
			{
				result = false;
				break;
			}
		}

	}

	if (stack != NULL)
		result = false;

	cout << (result ? "yes" : "no");

	while (!error)
		pop(&stack, error);

	return 0;
}


void push(Stack** sp, char item)
{
	Stack* newStack = new Stack();
	newStack->info = item;
	newStack->next = NULL;

	if ((*sp) == NULL)
	{	
		newStack->prev = NULL;
		(*sp) = newStack;
		return;
	}

	
	newStack->prev = (*sp);

	(*sp)->next = newStack;

	(*sp) = newStack;
}

char pop(Stack** sp, bool& error)
{
	if ((*sp) == NULL)
	{
		error = true;
		return '-';
	}
	
	char toReturn = (*sp)->info;
	Stack* beforeLast = (*sp)->prev;

	delete (*sp);
	(*sp) = beforeLast;


	error = false;
	return toReturn;
}

char peek(Stack** sp, bool& error)
{
	if ((*sp) == NULL)
	{
		error = true;
		return '-';
	}

	return (*sp)->info;
}

bool contains(const char item, const char* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (item == array[i])
			return true;
	}

	return false;
}

int index(const char item, const char* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (item == array[i])
			return i;
	}

	return -1;
}