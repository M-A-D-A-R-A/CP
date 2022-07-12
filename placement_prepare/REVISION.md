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

            1) Check if arr[mid] == 0, swap arr[low] and arr mid], increment mid and low pointers

            2) Check if arr[mid] == 1, increment mid pointer

            3) Check if arr[mid] == 2, swap arr[mid] and arr high], decrement high pointer and increment low pointer
      
        ```

 - LinkedList 
    - Slow pointer fast pointer (finding middle of an linked list)
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