#include <iostream>
#include <vector>
using namespace std;

int SingleNum(vector<int> num, int size)
{
   for (int i = 0; i < size; i++)
   {
      bool foundDuplicate = false; // Flag to track if the number repeats

      // Check if num[i] is repeated
      for (int j = 0; j < size; j++)
      {
         if (i != j && num[j] == num[i]) // If num[j] == num[i], and they are different positions
         {
            foundDuplicate = true; // Found a duplicate, so break the loop
            break;
         }
      }

      if (!foundDuplicate) // If no duplicate was found for num[i]
      {
         cout << "This is the unique number: " << num[i] << endl;
         return num[i]; // Return the single number
      }
   }

   return -1; // Return -1 if no unique number is found (although it should always find one in this problem)
}

int main()
{
   vector<int> num = {2, 4, 6, 8, 9, 8, 6, 4, 2};
   int size = num.size();
   cout << "Array size: " << size << endl;
   SingleNum(num, size); // Call the function to find the unique number
   return 0;
}
