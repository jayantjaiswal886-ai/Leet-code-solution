#include <iostream>
using namespace std;


int main()
{
    int a[5] = {3, 5, 2, 8, 4};
     int target=7;

    for(int i = 0; i < 5; i++)
    {
        int min = i;  

        for(int j = i + 1; j < 5; j++)
        {
            if(a[j] < a[min])
            {
                min = j;   
            }
        }

        
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    
    }

    
    for(int i = 0; i < 5; i++)
    {
           for(int j = i + 1; j < 5; j++)
           {
               if(a[i] + a[j]==target)
               {
                  cout << i << " " << j << endl;

               }
           }
    
    }

    return 0;
}





