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
      - Bubble Sort
        ```
        function bubbleSort(arr, N)
          for idx = 0 to N-2
            for jdx = 0 to N-idx-2
                if arr[jdx] > arr[jdx+1]    // Last idx elements are already sorted
                   swap(arr[jdx],arr[jdx+1])
        ```
- Recursion
     - Base Case    //to terminate the process
     - Recursive call (Smaller problem)      //Solve one problem other recusion will take care of it.
     - Self-work/ Calculation      // Mostly to backTrack 

- Trees
    - Pre Order Travesal
      ```
      function preOrderTraversal(root) 
           if root is null 
                return    
           
           //   process current node 
           print “root.data”     
           
           //   calling function recursively for left and right subtrees 
           preOrderTraversal(root.left) 
           preOrderTraversal(root.right)
      ```
    - In Order Travesal
      ```
      function inOrderTraversal(root) 
         if root is null
              return 

         //calling function recursively for left subtree 
         inOrderTraversal(root.left) 

         //   process current node 
         print “root.data”

         //   calling function recursively for right subtree 
         inOrderTraversal(root.right)
      ```
    - Pre Order Travesal
      ```
      function postOrderTraversal(root) 
        if root is null return 

        //   calling function recursively for left and right subtrees 
        postOrderTraversal(root.left) 
        postOrderTraversal(root.right) 

        //   process current node 
        print “root.data”
      ```
     - Level Order travesal
        ```
        function levelOrderTraversal()
        if root is null return 

        //   Create queue of type Node and add root to the queue 
        queue.add(root). 
        while the queue is not empty 

        //   remove the front item from the queue
        removedNode= queue.remove() 

        //   process the removedNode print “removeNode.data”

        /* Add the left and right child of the removedNode if they are not null */ 

        if removedNode.left is not null 
        queue.add(removedNode.left) 

        if removedNode.right is not null queue.add(removedNode.right) end
        ```
 - Greedy Applications
     -  Sorting: Selection sort, Topological sort 
     -  Priority Queues: Heap Sort 
     -  Huffman coding Compression algorithm 
     -  Prim’s and Kruskal’s algorithm 
     -  Shortest path in the weighted graph(Dijkstra’s) 
     -  Coin change problem (for Indian currency)
     -  Fractional knapsack problem
     -  Disjoint sets: union by size or union by rank
     -  Job scheduling algorithm    
 - DP
     - Memoization: Known as the “top-down” dynamic programming, usually the problem is solved in the direction of the main problem to the base cases.
     - Tabulation: Known as the “bottom-up ” dynamic programming, usually the problem is solved in the direction of solving the base cases to the main problem.


## DBMS
 1) https://www.geeksforgeeks.org/commonly-asked-dbms-interview-questions/
 2) https://www.geeksforgeeks.org/commonly-asked-dbms-interview-questions-set-2/?ref=rp

## OS
 1) https://www.geeksforgeeks.org/commonly-asked-operating-systems-interview-questions/
