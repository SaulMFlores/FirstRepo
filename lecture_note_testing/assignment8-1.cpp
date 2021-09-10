#include <iostream>
#include <algorithm> 
using namespace std;
int binarysearch(int [], int, int);

int binarysearch(int number[], int N, int target){
    int first, last, mid;
    first = 0;
    last = N-1;
    while ( first <= last ){
        mid = (first + last)/2;
        if (numbers[mid] == target)
            cout << "found at index:" << mid << endl;
       else if (numbers[mid] < target)
            first = mid + 1;
        else
            last = mid - 1;  
     cout << first << " " << last;
    return -1;
    }
}

int main()
{
	const int N = 10;
	int numbers[N] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70 };
	int target = 35;
    int first, last, mid;
    int index;

    index = binarysearch(numbers, N, target);
    if ( index == -1)
        cout << " Not found\n";
    else
        cout << " found at index : " << index << endl;

}
 

   

