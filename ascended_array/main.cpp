/*Goal: Practice array manipulation in C++.
Then sort the array in ascending order
**and print it.
**The each print of the array should separate the numbers in the array by
**one space.
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int userInput[40];
    int input;

    for(int i = 0; i < 40; i++)
    {
        std::cin >>input;
        userInput[i] = input;
    }

    std::cout << "output in the order \n";
    for (int i = 0; i <40; i++)
    {
        std::cout << userInput[i] << " ";
    }

    std::cout << "\noutput in the reversed order \n";
    for (int i = 39; i>= 0; i--)
    {
        std::cout << userInput[i] << " ";
    }
    std::cout << "\noutput in the ascended order \n";
    for (int i = 0; i<40; i++ )
    {
        for (int j = 0; j<39-i; j++ )
        {
            if (userInput[j] > userInput[j+1])
            {
                int temp;
                temp = userInput[j];
                userInput[j] = userInput[j+1];
                userInput[j+1] = temp;
            }
        }

    }

    for (int i = 0; i <40; i++)
    {
        std::cout << userInput[i] << " ";
    }


    return 0;
}
