#include <iostream>
#include <queue>

using namespace std; 

void max_heap(int arr[], int size, int idx);
void Descend(int arr[], int num_elements);

/* HW6 Q2: Queues 

a. Priority vs Ordinary Queue:

    An ordinary queue is FIFO (first in, first out). It is sort of like a line in real life. The first element added 
    is the first to be removed (ie. the item waiting the 'longest' will be removed next). On the other hand, elements 
    in a priority queue each have an associated value which corresponds to its priority such that those with the high 
    priority get removed from the queue earlier than elements with lower priority. 
*/

// b. code snippet of a heap {I used this video to learn more about heaps: https://www.youtube.com/watch?v=pAU21g-jBiE}
int main() {
    int arr[] = {2, 3, 5, 6, 3, 19, 10};
    int num_levels = 3; 
    int num_elements = 7;
    int idx = 0;
    max_heap(arr, num_levels, idx);
    Descend(arr, num_elements);

    return 0;
}

void max_heap(int arr[], int num_levels, int idx){
    
    // Identify all relative indexes in array
    int left_idx = 2*idx;
    int right_idx = 2*idx + 1; 
    int largest_idx = idx;

    // see if the three values we are looking at are valid (ie. the val at i is largest)
    if((left_idx < num_levels) & (arr[left_idx] > arr[largest_idx])){
        largest_idx = left_idx;
    }
    if((right_idx < num_levels) & (arr[right_idx] > arr[largest_idx])){
        largest_idx = right_idx;
    }

    // swap values
    if(largest_idx != idx){
        int temp = arr[largest_idx];
        arr[largest_idx] = arr[idx];
        arr[idx] = temp;
    }
    max_heap(arr, num_levels, largest_idx);

}

void Descend(int arr[], int num_elements)
{
    cout << "Heap: [";
    for(int i = 0; i < num_elements; i++){
        cout << arr[i] << ", ";
    }
    cout <<"]";
}