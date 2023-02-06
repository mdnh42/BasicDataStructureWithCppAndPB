## Queue

    - Introduction to Queue
        - What is Queue?
        = First in First Out.
        = A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order

        - Basic Operation
        = enqueue (Stack Says Push) = Insertion
        = dequeue (Stack Says Pop) = Delete

        -What is the difference between Stack and Queue
        = Stack LIFO and Queue FIFO
        =The primary difference between Stack and Queue Data Structures is that Stack follows LIFO while Queue follows FIFO data structure type. LIFO refers to Last In First Out. It means that when we put data in a Stack, it processes the last entry first. Conversely, FIFO refers to First In First Out.


    - Queue using Array Theory
        - Queue Operation and Time Complexity Every Operation has O(1)
            = front Operation [4, 3, 7] front Element [4] [Seen/show]
            = enqueue operation [4, 3, 7, 9] enqueue(9) = [4, 3, 7, 9] //Insertion
            = dequeue operation [3, 7, 9] deque() // Delete

            = Size Operation

        - We implementation Queue using Static Array
            Approch:
                Step 1: Declare left, right (l, r)
                Step 2: Enqueue and maintain left and right position
                Step 3: Dequeue and maintain left and right position
                        i) l>r Queue empty
                Step 4: Size Calculate-> r-l+1


    - Queue Using Circular Array Theory
        = Q [5, 6, 7, 8, 9] l = 5, r = 9 
        = Dequeue[5, 6, 7], Q = [0, 0, 0, 8, 9] l = 8, r = 9

        = Enqueue [10]  Q = [10, 0, 0, 8, 9] l = 8, r = 10
        
        = Enqueue [11] Q = [11, 10, 0, 8, 9] l= 8, r = 11
        
        = Enqueue [12] Q = [12, 11, 10, 8, 9], l =8, r = 12
        
        = Dequeue Q = [10, 11, 12, 8, 9] l = 9, r 12
        
        = Dequeue Q = [10, 11, 12, 8, 9] l = 10, r = 12 

        Size = Enqueue Size++ and Dequue-- 
        Size = l<r = r - l+1
        Size = l>r = n-l+r+1 


    - Dynamic Queue Implementation 




## More About Queue 
    - Queue using linked list Theory (Singly Linked List)
        * Tail [Enqueue]
        * DeleteAtHead [dequeue]
        * head Data [ front]
        * sz++ and sz--

    - Queue Using Linked List Implementaion 
        
    - STL Queue 
        = enqueue (push)
        = dequeue (pop)
        = front (front)
        = size (size)

    - 