## Non Linear DS and Tree 
    - Array, Linked List, Stack, Queue, Deque (Linear DS)
    All Linear DS are Sequential. 

    - Tree Data Structure 
        = Head/Root
        = Child 
        = Acyclic Graph
        = Root has no parent 
        = other nodes have one parent
          0    - Parent /Root/ Head
      1      2
    Child   Child 
    3   4   5   6
    ----------------- Child 
        = 0 to infinty 
        = Only One Parent 
        = Infinity Child 
        = No Cycle 
    
    = Most Popular Binary Tree. 
        - At most 2 Child 

        Binary Tree Usages
        - Binary Search Tree
        - Heap Or Priority Queue
        - AVL Tree
        - Red Black Tree
        - Treap 
        - Splay Tree
        - Segment Tree


    ## Introduction to Graph and Tree
        - A Graph is a non-linear data structure consisting of vertices and edges.

        -Graphs in data structures are used to represent the relationships between objects.

        - Pair of edge 

        - Find Path 
        - Find Shortest Map Using Path Graph DS

        * Whats is Cycle? 
        = A cyclic graph is a graph containing at least one graph cycle. A graph that is not cyclic is said to be acyclic. A cyclic graph possessing exactly one (undirected, simple) cycle is called a unicyclic graph. Cyclic graphs are not trees. A cyclic graph is bipartite iff all its cycles are of even length 

     ## Binary Tree
        - Every node have atmost two child 
        - Left Child and Right 
        - 

    ## Variations of Binary Tree 
        
        - Full Binary Tree
            = Every nodes has 0 or 2 child except 1 child.
            Example: P = 1->Left 2 and Right 3, 2->l 4 and r 5, 5-L 6 and R 7
                    1
                2       3
            4       5
                6       7

        - Complete Binary Tree
            = Every node has filled up without last level;
            - All Perfect Binary Tree are Complete Binary Tree.
        - Perfect Binary Tree 
            = All Level are filled. 


    ##  Binary Tree Structure Theory 
        // Create Node 
        - Binary Tree has Node. 1, 2, 3, ... n 
        - Node has Left, Right and its Parent 
        - Left NULL and Right = NULL 
        - Node Identify using ID; 

        // BinaryTree
        - Declare Root 
        / Create Binary Tree Consture 
        - Initial Root NULL 

        //node* CreateNewNode using id
        - new Node 
        - Left = NULL 
        - Right = NULL 
        - Parent = NULL 


        // Void Build Binary Tree Function 
        - node allnode[]
        - Traverse Array Set NewNode 
        - allnode[0]->left = allnode[1]
        - Allnode[0]->Right = allnode[2]
        So on........
        -Set Every Side Value. 
        - Root allnode[0]

        // Print_Tree_Info
        - Traverse AllNode 
        - Set P, L, R = -1 
        - Check Corner Case 
            - Parent Not Equl NULL
            - Set Left->ID  
            - Left Not Equal NULL 
            - RIght Not Equal NULL 
            - Left->ID 
        - Print 

        Main Function 
            Call Binary Tree 
            
    
## BFS and DFS 
    Binary Tree Search- 
    - BFS Traversal Theory
        - Breadth First Search 
        - Depth First Search  
    - Breadth First Search Theory: 
        - Level Wise Visit with queue 
        - Level 0 = 0
        - Level 1 = 1, 2
        - Level 2 = 3, 4, 5 
        Consider A Queue {0}
        1st Step: {1, 2}
        2nd Step: {2, 3, 4}
        3rd Step: {3, 4, 5}
        4rd Step: {4, 5}
        5th Step: {5}
        6th Step: {}

    - BFS Implementation 
        



    - DFS (Depth First Search)
        - Inorder 
        - Preorder 
        - Postorder 


## BST 
    - Introduction to BST 
        - Binary Search Parent Node>Left Sub Tree
        - Binary Search Parent Node<Right Sub Tree 

    - BST Insertion Theory O(height)
        - Take Some Number 
        - Make a Tree 
        - If (Parent<Number = Right Child) 
        - Parent>Number = Left Child
    
    -BST Insertion Implementaton 
        -

    - BST Searcing 
        - Check Root>k 

    - BST Deletion 
        - No Child 
        - At Most One Child 
        - Two Child 
        



    



    