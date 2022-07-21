## Revision

 - Array 
    - Kadane’s Algorithm
      ``` 
      Initializing curSum to 0 and maxSum to min value,denoting an empty subarray

      Itrate via the array and add the arr element to the currSum

      Taking the max of maxSum and the curSum of the subarray

      Checking if the curSum becomes negative 
            if yes change curSum = 0

        ```
    - Two pass Algo
        ```
        First ->>
       //Count the number of 0s, 1s and 2s for idx = 0 to N-1

        for idx = 0 to N-1
            if cnt0 > 0
                arr[idx] = 0
                cnt0 -= 1
            else if cnt1 > 0
                arr[idx] = 1
                cnt1 -= 1
            else
                arr[idx] = 2
                cnt2 -= 1

        ```
    
    - Dutch National Flag Algorithm
        ``` 
        low = 0
        mid = 0
        high = N-1

        while mid <= high

            1) Check if arr[mid] == 0, swap arr[low] and arr [mid], increment mid and low pointers

            2) Check if arr[mid] == 1, increment mid pointer

            3) Check if arr[mid] == 2, swap arr[mid] and arr high], decrement high pointer and increment low pointer
      
        ```

 - LinkedList 
    -  Always Create another pointer pointing to head/tail (Because if not that will change the whole LL)
    - Slow pointer fast pointer (Detecting loop in a linked list, checking palindrome in arrays, strings, and linked list, reversing a string or a linked list, two sum problem, finding the middle of a linked list, etc.)
      ``` 
      If head is null just return null

      If the Linked List has just 1 element that element is the middle

            fast = head
            slow = head

      moving the fast and slow pointer until the fast pointer reaches the end while fast is not null and fast->next is not null


      return slow /fast

        ```

    - Floyd marshal algo
      ``` 
      Node* floydDetectLoop(Node* head) {

        if(head == NULL)
            return NULL;

            Node* slow = head;
            Node* fast = head;

            while(slow != NULL && fast !=NULL) {
                
                fast = fast -> next;
                if(fast != NULL) {
                    fast = fast -> next;
                }

                slow = slow -> next;

                if(slow == fast) {
                    return slow;
                }
            }

            return NULL;

        }

        ```
  - Basic Algorithms
    - Sliding Window
      ```
      We will start with window size = 1, then keep increasing the window size until the sum
      of elements inside the window is greater than or equal to the target. If the sum equals
      to target return true else decrease the window size from the left and reduce the sum
      till it is less than or equal to the target.

      ```
     
  - Sorting and Searching
     - Binart Search (Divide and conqure)
       ```
       
       binarySearch(arr, x, low, high)
        repeat till low = high
              mid = low + (high – low)/2;  (to avoid memory overflow)
                   if (x == arr[mid])
                   return mid
   
                   else if (x > arr[mid]) // x is on the right side
                       low = mid + 1
   
                   else                  // x is on the left side
                       high = mid - 1
       ```
     - Selection sort
        ```
        - Initialize minimum value(min_idx) to location 0
        - Traverse the array to find the minimum element in the array
        - While traversing if any element smaller than min_idx is found then swap both the values.
        - Then, increment min_idx to point to next element
        - Repeat until array is sorted
        ```
- Recursion
     - Base Case    //to terminate the process
     - Recursive call (Smaller problem)      //Solve one problem other recusion will take care of it.
     - Self-work/ Calculation      // Mostly to backTrack 
