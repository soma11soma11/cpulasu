/*Goal: practice using multidimensional arrays.
 **Write a program that will accept values for a 4x4 array
 **and a vector of size 4.
 **Use the dot product to multiply the array by the vector.
 **Print the resulting vector.
 */

#include<iostream>

int main()
{
    int array4_4[4][4];
    int vector[4], product[4];
    
    
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++)
    {
        std::cin >> array4_4[i][j];
        
    }
    
    
    for (int s = 0; s<4; s++)
    {
        std::cin >> vector[s];
    }
    
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = array4_4[i][j] * vector[i] + sum;
        }
        product[i] = sum;
    }
    
    for (int s = 0; s < 4; s++)
    {
        std::cout << product[s] << "\n";
    }
    
    return 0;
}
