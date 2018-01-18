Lecture 4: Binary Heaps & Graphs
===

Created by: Yusuf Pisan
---

Formatted for GitHub Markdown syntax by Ryan Peters

## Be sure to check the other lectures out after you finish this one!

[Previous Lecture][2]<-----------------------------------------------------------------------------------------------

---

#### ToC

- [overview](#Overview)
  - [const](#const)
  - [Runtime polymorphism - virtual + override](#runtime-polymorphism---virtual--overrid)
  - [Decision Trees](#decision-trees)
- [Heap](#heap)
  - [Heap - Array Based Implementation](#heap---array-based-implementation)
  - [Heap - Array into a Heap](#heap---array-into-a-heap)
  - [Heap - Add](#heap---add)
  - [Heap - Remove](#heap---remove)
  - [Implementing Priority Queue as a Heap](#implementing-priority-queue-as-a-heap)
  - [BST vs Heap in Implementing Priority Queue](#bst-vs-heap-in-implementing-priority-queue)
  - [Heap Sort - Sort an Arry Using Heap](#heap-sort---sort-an-arry-using-heap)
  - [Group Exercise](#group-exercise)
- [Graphs](#graphs)
  - [Graphs - Implementing](#graphs---implementing)
  - [Graphs - Searching](#graphs---searching)
  - [Graphs - Group Exercise](#graphs---group-exercise)
- [After Class](#after-class)

[1]:#toc "Back To ToC"


---

### [Overview][1]

<meta name="copyright" content="Yusuf Pisan | pisan@uw.edu | http://courses.washington.edu/css343/" /> <meta name="duration" content="120" />

+ Review: Ass1, rebalancing tree during inserts, decision trees, const, priority queues, abstraction(?)
+ JollyFeedback - automated tests
+ Ass2: BinarySearchTree
+ Big O Reading - Resources: Cracking the Coding Interview - VI Big O
+ Binary Heaps
+ Graphs


---

### [const][1]

+ const to indicate that variable value does not change
```C++
const int MAX{100};
```

+ const to indicate that a class member function does not modify the object
```C++
void inorderTraverse(void visit(ItemType&)) const;
```

+ const to indicate that the parameter passed by reference will not be modified
```C++
bool add(const ItemType& item);
```

+ const to indicate that the parameter returned is by reference, but cannot be changed
```C++
// assume getName is a member function and returning a reference
// to a private variable in the class
const string& getName() const;
```

* Do not return a reference or pointer to a local variable

+ const for pointer
```C++
// read backwards: ptr is a pointer to an integer constant
// ptr cannot be used to change the value
const int * ptr;
```

https://isocpp.org/wiki/faq/const-correctness


---

### [Runtime polymorphism - virtual + override][1]

+ Games: Bunch of different `graphical object`s
+ All classes of objects have their own `draw()` function
+ Base class defines it as `virtual void draw() const`
+ Derived classes define it as `void draw() const override`
+ So, we can have an array of pointers of type `graphical object` and use `go->draw()` to get the correct draw function


http://www.cplusplus.com/doc/tutorial/polymorphism/



---

### [Decision Trees][1]

![](./images/decision-tree-knee.png?raw=true)



---

### [Heap][1]

MaxHeap: Complete binary tree whose root is greater than its children

MinHeap: ...

Not a binary search tree!

![](./images/maxheap-minheap.png?raw=true)


---

### [Heap - Array Based Implementation][1]

- Heap has to be complete, filled from left to right
- We know the index of each node based on level i

      - left: 2 * i + 1
      - right: 2 * i + 2
      - parent: (i - 1) / 2
    
    
![](./images/heap-as-array.png?raw=true)

Keep track of `itemcount` and `maxItems`


---

### [Heap - Array into a Heap][1]

+ Start from rightmost leaf up to root, call heapRebuild
```C++
void heapCreate()
{
   // can simplify as itemCount / 2
   for (int index = itemCount - 1; index >= 0; index--)
   {
      heapRebuild(index);  
   }
}  // end heapCreate
```

```C++
void heapRebuild(const int subTreeNodeIndex)
{
   if (!isLeaf(subTreeNodeIndex))
   {
      // Find larger child
      int leftChildIndex = ...
      int rightChildIndex = ...
      int largerChildIndex = ...
      // Swap with larger child if node value is smaller
      if (items[largerChildIndex] > items[subTreeNodeIndex])
      {
         swap(items[largerChildIndex], items[subTreeNodeIndex]);
         // Continue with the recursion at that child
         heapRebuild(largerChildIndex);
      }  // end if
   }  // end if
}  // end heapRebuild
```


---

### [Heap - Add][1]

![](./images/heap-add.png?raw=true)

- Add the new node to the next available spot
- Bubble up, swapping values with parent until Heap property restored
- Group Exercise: Add 50, Add 10


---

### [Heap - Remove][1]

![](./images/heap-remove.png?raw=true)

- Remove the node, we now have 2 semiheaps
- Last node that was added to the heap, becomes root
- Trickle down, swapping root value with child value (while child value larger)
- Group Exercise: Add 50, Add 10, Remove 5, Remove 6


---

### [Implementing Priority Queue as a Heap][1]


Highest priority is at the root of MaxHeap

![](./images/uml-adt-priorityqueue.png?raw=true)

![](./images/uml-heap.png?raw=true)


---

### [BST vs Heap in Implementing Priority Queue][1]

If we know the maximum number of items in priority queue, heap is better

Heap is blanced, BST can become unbalanced degrading performance

If multiple items have the same priority, we can maintain a list at the node

When last item in the list deleted, node is deleted


---

### [Heap Sort - Sort an Arry Using Heap][1]

- Make the array into a heap
- Partition the array into Heap and Sorted parts
- Remove the root of the Heap, transfer it to Sorted
- Heap is smaller and has to be rebuilt. Sorted now has one more element
- Keep removing until Heap is empty

![](./images/heap-sort1.png?raw=true)

![](./images/heap-sort2.png?raw=true)

![](./images/heap-sort3.png?raw=true)



---

### [Group Exercise][1]

Start with array [25 30 20 80 40 60]

1. Turn the given array into a heap
2. Sort the array by removing root at each turn - draw the array after each swap and heapRebuild


+ Given a maxHeap, if one of the values in the heap changes, how do you restore the heap?



---

### [Graphs][1]

![](./images/ch20-3-graph.png?raw=true)

+ Directed/Undirected graphs


---

### [Graphs - Implementing][1]

+ Adjacency Matrix
![](./images/ch20-7-graph-adjacency.png?raw=true)

+ Adjacency List
![](./images/ch20-10-graph-adjacency-list.png?raw=true)



---

### [Graphs - Searching][1]

+ DFS - Depth-First Search
```C++
dfs(v: Vertex) {
      s = a new stack
      s.push(v)
      Mark v as visited
      while (!s.isEmpty())
          if (no unvisited adj to vertex on top of stack)
                s.pop()
          else
              Select unvisited adj to vertex on top
              s.push(u)
              Mark u as visited
}
```

+ BFS - Breadth-First Search
```C++
bfs(v: Vertex) {
  q = new queue
  q.enqueue(v)
  Mark v as visited
  while (!q.isEmpty())
        q.dequeue(w)
        for (each unvisited vertex u adjacent to w)
            Mark u as visited
            q.enqueue(u)
}
```


---

### [Graphs - Group Exercise][1]

![](./images/ch20-12-graph.png)

1. DFS, start at i, looking for e, mark all nodes visited
2. BFS, start at i, looking for e, mark all nodes visited


---

### [After Class][1]

+ Read: Chapter 20.1-3 (if you have not already)
+ Read: Resources: Cracking the Coding Interview - VI Big O
+ Start Ass-2, fix your Ass-1 if you have any memory leaks or not passing JollyFeedback with flying colors!


[2]:https://ryancpeters.github.io/Winter_UWB_2017/343_data-structures_n_algos/lectureNotes/lecture3/
[3]:https://ryancpeters.github.io/Winter_UWB_2017/343_data-structures_n_algos/lectureNotes/lecture4/
