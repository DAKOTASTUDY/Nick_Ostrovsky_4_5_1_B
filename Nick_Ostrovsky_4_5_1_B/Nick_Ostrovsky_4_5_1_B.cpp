// Nick_Ostrovsky_4_5_1_B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void publication(int* array, int size);
int main()
{
    std::cout << "Hello World!\n";
    int array_a[] = {1, 3, 6, 5, 9, 8};
    int array_b[] = { 94, 67, 18, 44, 55, 12, 6, 42 };
    int array_c[] = { 16, 11, 9, 10, 5, 6, 8, 1, 2, 4 };

    int size_a = sizeof(array_a) / sizeof(array_a[0]);
    int size_b = sizeof(array_b) / sizeof(array_b[0]);
    int size_c = sizeof(array_c) / sizeof(array_c[0]);

    publication(array_a, size_a);
    publication(array_b, size_b);
    publication(array_c, size_c);
}


void publication(int* array, int size)
{
    std::cout << "Initial array:" << std::endl;
    for (int j = 0; j < size; j++)
    {
        std::cout << array[j] << " ";
        
    }

    std::cout << std::endl;
    std::cout << "Head structure:" << std::endl;

    std::cout << 0 << " " << "root" << array[0] << std::endl;
    for (int i = 0; i < size / 2; i++)
    {
      //  std::cout << (i - 1) / 2 << " " << "parent" << array[(i)] << std::endl ;
        
        if ((i * 2 + 1) < size)
        {
            int a = floor((log2(i * 2 + 2)));
            std::cout << a  << " " << "left" << "(" << array[i] << ")" << array[((i * 2 + 1))] << std::endl;
        }
        if ((i * 2 + 2) < size)
        {
            std::cout << floor((log2(i * 2 + 2))) << " " << "right" << "(" << array[i] << ")" << array[((i * 2 + 2))] << std::endl;
        }
    }

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
