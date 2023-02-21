# Head and Stl 
## Introduction To Heap 
    - Introduction to Heap 
        * insert(x) o(logn)
        * Max/Minimum Find o(1)
        * Delete Any Value o(logn)

    - Heap Insertion Theory 
        - Heap Binary Tree. (Complete Binary Tree (Except Last Level))
        - Max Heap O(1)
        - Up_heapify 
        - Assume Insert 9 in a Complete Binary Tree last index. 
        - When Not match heap Property 
        - Call Your Up_heapify Function 
            - How to Works: UP_HEAPIFY FUNC: 
            - Check Parent == Child swapppping 
            

    - Structure 
        - vector<int>nodes; 

    - Print () O(n)
        traver and print 
        
    - Heap Insertion Implementaion 
        - left i = 2i+1
        - Right i = 2i+2
        - Parent i = i-1/2 

        - Insertion O(logn)
        - print o(n)

    - Heap Delete Theory O(logn)
        - Delete value ref index O(1)
        - down_heapify 

        - Deleted Value swap full tree last node node.size()-1. 
        - beacuse last node deleted time complexity o(1)

        - Parent, Left and Right which nodes max node. swap every node down heap. 

        = i 
        = 2i + 1 (left)
        = 2i + 2 (right)


    - Heap Delete Implementaion 

        - Delete (Index)
        - Swapping = nodex[index] and nodes[nodes-1]
        - Delete from Last Element using stl function nodes.pop_back().
        - Call Down_heapify for MAX_HEAP set. 
            - traverse full tree
            - set largest index 
            - Set Left = 2*index + 1
            - set Right = 2*index+2
            - check l<nodes.size() and nodes[largest] <nodes[l]
                largest = left
            - check r<nodes.size() and nodes[largest]<nodes[r]
                largest = r; 
            - check largest == idx
                breks; 
            - swap (nodes[index], nodes[largest])
            - index = largest
        - Corner Case node.size() == index return 

    - Heap Max Operation Implementation O(n)
        GetMax 
        Return nodes[0];

    - ExtractMax
        - max Return [0]
         and Call delete function;

    - Self Practice Min_heap

## Heap and STL 

    - Build Heap from Array 
        - Leaf Node Mean it's have no child.
        - Select not leaf node last level. 
        - and compare left and right side 
        - Last Not Leaf Node Law = N/2 - 1
        = Implement: 
            - build_from_array(Vector<int>&a)
                - nodes = a; 
                - n = size; 
                - last_non-Leat = n/2 - 1; 
                - traverse last_non_leaft to 0 
                    - down_heapify. 

    - Build Heap Complexity 
        - Check Module 33 and 2 No Videos .        

    - Heap Sort 
        - Use ExtratMax 

    - Priority Queue (Non-Linear DS)
        Basic Operation: 
        - Push (x) o(logn)
        - Pop (x) Max Value Delete o(logn)
        - Top (Max Value Print) o(1)
        - Size (size matintai)

        - Implement using Heap 


    - STL Priority Queue 


    - Prioriry Queue Example Problem 



    