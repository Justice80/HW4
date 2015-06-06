#include <iostream>
#include <string>

using namespace std;

int * alloc_array(int size);
void prompt_count(int* size);
void populate_numbers(int* numbers, int size);
double avg(int* numbers, int size);
int aboveAvg(int *numbers, int size);