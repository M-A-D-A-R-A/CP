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