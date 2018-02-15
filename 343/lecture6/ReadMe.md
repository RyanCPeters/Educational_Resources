Lecture 6: Big O
===

Created By: [Yusuf Pisan](http://courses.washington.edu/css343/pisan/)
---

formatted to Github Markdown syntax by Ryan Peters

#### Be sure to check the other lectures out after you finish this one! 

<div><a href="https://ryancpeters.github.io/Educational_Resources/343/lecture5/" style="position: relative; left: 5em">Previous lecture </a><a href="https://ryancpeters.github.io/Educational_Resources/343/lecture7/" style="position: relative; left: 20em"><!--- Next lecture--></a></div>


[1]:#lecture-6-big-o "Back to Table of Contents"

---

#### Table of Contents

1. [Overview](#overview)
2. [priority_queue - 1](#priority_queue---1)
3. [priority_queue - 2](#priority_queue---2)
4. [priority_queue - 3](#priority_queue---3)
5. [Improvements to Dijkstra](#improvements-to-dijkstra)
6. [STL dtatastructure for Dijkstra](#STL-dtatastructure-for-Dijkstra)
7. [Dijkstra Applications](#Dijkstra-Applications)
8. [Topological Sort](#Topological-Sort)
9. [Travelling Salesman Problem (TSP)](#Travelling-Salesman-Problem-(TSP))
10. [xkcd: Travelling Salesman](#xkcd-Travelling-Salesman)
11. [Spanning Trees](#Spanning-Trees)
12. [Prim’s Algorithm](#Prim’s-Algorithm)
13. [Big O](#Big-O)
14. [Big O (2)](#Big-O-(2))
15. [Big O (3)](#Big-O-(3))
16. [Big O (4)](#Big-O-(4))
17. [Big O (5)](#Big-O-(5))
18. [Big O (6)](#Big-O-(6))
19. [Big O (7)](#Big-O-(7))
20. [Big O (8)](#Big-O-(8))
21. [Big O (9)](#Big-O-(9))
22. [Big O (10)](#Big-O-(10))
23. [Big O (11)](#Big-O-(11))
24. [After Class](#After-Class)

---

### [Overview][1]

<meta name="copyright" content="Yusuf Pisan | pisan@uw.edu | http://courses.washington.edu/css343/" /> <meta name="duration" content="120" />

+ Review: Ass2

+ Priority Queue

+ Automated tests on Wednesday & Friday 11pm

+ Graph Algorithms

+ Big O Reading / Exercises


---

[priority_queue - 1][1]
---
```C
void testPQ1() {
    priority_queue<int> pq;
    pq.push(27);
    pq.push(35);
    pq.push(5);
    // should get us 35 27 5
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}
```

---

[priority_queue - 2][1]
---
```C
void testPQ2() {
    // use greater rather than less,
    // sorted from smallest to largest
    priority_queue<string, vector<string>, greater<string>> pq;
    pq.push("apple");
    pq.push("orange");
    pq.push("banana");
    // should get us apple banana orange
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;;
}
```

---

[priority_queue - 3][1]
---
```C
// store a pair of objects in priority queue
typedef pair<string*, int> strPint;

// comparing strPint objects based on the int value
class StrPintCompare {
public:
    bool operator() (const strPint& lhs, const strPint&rhs) const {
        return lhs.second > rhs.second;
    }
};

void testPQ3() {
    priority_queue<strPint, vector<strPint>, StrPintCompare> pq;
    pq.push(make_pair(new string("apple"), 27));
    pq.push(make_pair(new string("orange"), 35));
    pq.push(make_pair(new string("banana"), 5));
    // should get us banana(5) apple(27) orange(35)
    // when StrPintCompare is >
    while(!pq.empty()) {
        string * strPtr = pq.top().first;
        cout << *strPtr << "(" << pq.top().second << ")" << " ";
        delete pq.top().first;
        pq.pop();
    }
    cout << endl;;
}
```

---

[Improvements to Dijkstra][1]
---
```C
// finding shortest-paths from vertex 0
weight[v] = matrix[0][v] for all v
// weight[0] = "-", [1] = 8, [2] = -, [3] = 9, [4] = 4
add v (vertex 0) to vertexSet
while there are still vertices not in vertexset (do this n-2 times)
    Find v with smallest weight v
    Add v to vertexSet
    for all u not in vertexSet
        // if going through the newly selected v will make it shorter
        // set the new weight
        if (weight[u] > weight[v] + matrix[v][u])
            weight[u] = weight[v] + matrix[v][u])
```
> - Instead of `for all u not in vertexSet`, just look at v's neighbors instead
> - To keep the path to node, maintain a map `previous[u] = v` every time we update

---

[STL dtatastructure for Dijkstra][1]
---
```C
// weight to node, use INT_MAX for not connected/infinity
// beware of overflow, don't att anything to INT_MAX
map<string, int> weight;     
// only one copy in vertexSet
set<string> vertexSet;
// pq of weights
priority_queue< pair<string, int>, vector<pair<string, int>>, LessWeight> pq;
// keeping path to vertex, best way to get to thsi vertex
map<string, string> previous
```

Dijkstra Applications
====================

- Google Maps

- IP routing to find Open Shortest Path First (OSPF)

- Telephone network

Looking for specific examples...


---

[Topological Sort][1]
---

Directed graph without cycles has a topological order.

x precedes y if there is a an edge from x to y

```
142 -> 143 -> 342 -> 343
143 -> 295
143 -> 340 -> 385
143 -> 342 -> 385
132 -> 133
142 -> 173
142 -> 305
142 -> 337
143 -> 340
301 -> 351
301 -> 370
342 -> 421
ENGL 182 -> 301
```

We cannot represent AND prerequisites (MATH 125 AND CSS 340)

We cannot represent "must be taken concurrently"

For scheduling, we want to generate a topological order

If all pairs of consecutive vertices in the sorted order are connected by edges, then the edges form a **Hamiltonian path**

Exercise: Draw a square without lifting pen, draw a house, ...

Applications: optimizing triangle meshes in computer graphics, circuit design, package delivery problems, multiple vehicles servicing multiple customers, ...

Hamiltonian Path: Visit each vertex

Euler Path: Travel each edge

---

[Travelling Salesman Problem (TSP)][1]
---

Given a set of cities and distance between every pair of cities, the problem is to find the shortest possible route that visits every city exactly once and returns to the starting point. 

![](./images/tps-graph.png)

Paths: ABCDE, ABCED, ABDCE, ABDEC, .

Complexity: O(n!) based on (n - 1)! paths with a naive approach

100! would be 158 digits long, only 10^82^ atoms in universe

but we can do better with dynamic programming

For a set of size n, we consider n-2 subsets each of size n-1 such that all subsets donâ€™t have nth in them.

There are at most O(n * 2^n^) subproblems, and each one takes linear time to solve

The total running time is therefore O(n^2^ * 2^n^)

https://www.geeksforgeeks.org/travelling-salesman-problem-set-1/


---

[xkcd: Travelling Salesman][1]
---


![](./images/travelling_salesman_problem.png)


https://xkcd.com/399/



---

[Spanning Trees][1]
---

A tree is a psecial kind of undirected graph, connected but no cycles

- A spanning tree is a subgraph of G that contains all of G's vertices and enough of its edges to form a tree
    - n vertices needs at least n - 1 edges to connect them all
    - n vertices with exactly n - 1 edges cannot contain cycles
    - n vertices with more than n - 1 edges must have a cycle
    
Depth-First search spanning tree: Traverse the tree marking edges. When DFS ternminates, the marked edges make up a spanning tree

Breadth-First search spanning tree: Traverse the tree marking edges. When BFS ternminates, the marked edges make up a spanning tree

Minimum spanning tree: A spanning tree that where the sum of the edges is minimal
    - Ethernet line to all the outlets in your home with minimal cabling

![](./images/ch20-24-mst.png)

Group Exercise: Construct DFS, BFS and minimum spanning tree (starting from `e` for DFS and BFS)


---

[Prim's Algorithm][1]
---

![](./images/ch20-24-mst.png)

```
Start at any vertex, r
mark r as visited
while (there are unvisited vertices)
    find the least-cost edge (v, u) from some visited vertex v to u
    mark u as visited
    Add the vertex u and the edge (v, u) to minimum spanning tree
```



---

[Big O][1]
---

O(n) represents upper bound. (Big-O)  
Ω(n) represents lower bound. (Omega)  
Θ(n) means tight bound. (Theta)

![](./images/big-o-complexity.png)

28 Examples from "Cracking The Coding Interview"

- Recursive version of fibonacci
- Recursive version of fibonacci4 where it is the sum of last 4 numbers, not 2
- Printing all fibonacci numbers up to n using recursive version of fibonacci

> - O(2^n^) for recursive fibonacci

> - O(2^n^) for fibonacci(4) O(4^n^) is still O(2^n^)

> - Sum of 2^1^ +  2^2^ +  2^13^ +  2^4^ +  ... +  2^n^ for printing

> -  O(2^n+1^) is still O(2^n^)



---

[Big O (2)][1]
---

- B1: You say your birthday, and ask whether anyone in the room has the same birthday. If anyone does have the same birthday, they answer yes.

- B2: You tell the first person your birthday, and ask if they have the same birthday; if they say no, you tell the second person your birthday and ask whether they have the same birthday; etc, for each person in the room.

- B3: You only ask questions of person 1, who only asks questions of person 2, who only asks questions of person 3, etc. You tell person 1 your birthday, and ask if they have the same birthday; if they say no, you ask them to find out about person 2. Person 1 asks person 2 and tells you the answer. If it is no, you ask person 1 to find out about person 3. Person 1 asks person 2 to find out about person 3, etc.

How many questions will be asked?
 
> - B1: constant time, you only ask 1 question, O(1)
> - B2: linear time, nobody has your birthday, you ask everybody, O(n)
> - B3: The number of questions is 1 + 2 + 3 + ... + N-1 + N, quadratic time, O(n^2^)

---

[Big O (3)][1]
---

```
Two loops in a row:
for (i = 0; i < N; i++) {
    sequence of statements
}
for (j = 0; j < M; j++) {
    sequence of statements
}

A nested loop followed by a non-nested loop:
for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
        sequence of statements
    }
}
for (k = 0; k < N; k++) {
    sequence of statements
}
A nested loop in which the number of times the inner loop executes depends on the value of the outer loop index:
for (i = 0; i < N; i++) {
    for (j = N; j > i; j--) {
        sequence of statements
    }
}

// nested loop is n*n
for	(int	i	=	0;	i	<	n;	i++)	{
		for	(int	j	=	0;	j	<	n*n;	j++)	{
				cout	<<	â€œtricky!â€	<<	endl;
		}
}
```

> - O(nm)
> - O(n^2^)
> - O(n^2^)
> - O(n^3^)

---

[Big O (4)][1]
---

```
f takes constant time, g takes time linear based on the value of its parameter.







```

> - O(n)
> - O(n^2^), 1 + 2 + 3 ... N - 1
> - O(n * k), we don't now the relative size of k

---

[Big O (5)][1]
---

Dynamicc programming stores and reuses results

RE-writing fibonacci, so it is not recurive.

What is the complexity?

---

[Big O (6)][1]
---

Knapsack problem: Objects with given size and value, maximize value taht can be stored in capacity C

- Naive approach: Trying all possible combinations

> - 2^n^ possible combinations

---

[Big O (7)][1]
---

- V(k, A) - maximum value choosing among the first k objects in a knapsack of capacity A

- V(k, A) = max { V(k-1, A), V(k-1, A-s~k~)+v~k~ }
    - For the next object k, we can either leave it out
    - OR, put it in and reduce the capacity of the knapsack to A-s~k~
    
- Store V values in an array with n+1 rows and C columns: V(0, 0), V(0, 1), V(0, 2), ... next row V(1, 0), V(1, 1), ...

- Each partial solution takes constant time to compute

- Complexity is O(nC)

- Solution is the bottom-right of the arrray V(n, C)

- To find which objects are included, need to keep a separate table of size n * C


---

[Big O (8)][1]
---

Shortest Path: Djikstra's algorithm to find shortest path for all nodes

To find the shortest path from one vertex to **all** other vertices

```C
// finding shortest-paths from vertex 0
weight[v] = matrix[0][v] for all v
// weight[0] = "-", [1] = 8, [2] = -, [3] = 9, [4] = 4
add v (vertex 0) to vertexSet
while there are still vertices not in vertexset (do this n-2 times)
    Find v with smallest weight v
    Add v to vertexSet
    for all u not in vertexSet
        // if going through the newly selected v will make it shorter
        // set the new weight
        if (weight[u] > weight[v] + matrix[v][u])
            weight[u] = weight[v] + matrix[v][u])
```

>- Complexity: O(n^2^)


---

[Big O (9)][1]
---

Sort each string in an array and then sort the array (Example 8 from Cracking)

> - Not O(N * NlogN)

> - Length of strings and length of array should not be both N

> - O(s log s) to sort a string, O(a * s log s) to sort each string in array

> - Each string comparison takes O(s) time, there are O(a log a) comparisons

> - Sorting the array takes O(s * a log a)

> - Adding it all up: O(a * s(log a + log s))

---

[Big O (10)][1]
---

Binary Search Tree: add, remove, search, traverse

> - Average case: O(log n), O(log n), O(log n), O(n)

> - Worst case: O(n)

---

[Big O (11)][1]
---

Binary Heap: add, remove, search, traverse

> - Average case: O(1), O(log n), O(n), O(n)

> - Worst case: O(log n), O(log n), O(n), O(n)

> - See Resources and http://bigocheatsheet.com/ 

---

[After Class][1]
---

+ Work on Ass2

+ Read Chapter 19 - balanced trees

+ Sample exam and new assignment over the weekend

