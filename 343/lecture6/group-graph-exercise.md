dfs on graph from spanning trees slid:

Group Exercise: Construct DFS, BFS and minimum spanning tree (starting from e for DFS and BFS)

```
A tree is a psecial kind of undirected graph, connected but no cycles

A spanning tree is a subgraph of G that contains all of G's vertices and enough of its edges to form a tree
n vertices needs at least n - 1 edges to connect them all
n vertices with exactly n - 1 edges cannot contain cycles
n vertices with more than n - 1 edges must have a cycle
Depth-First search spanning tree: Traverse the tree marking edges. When DFS ternminates, the marked edges make up a spanning tree

Breadth-First search spanning tree: Traverse the tree marking edges. When BFS ternminates, the marked edges make up a spanning tree

Minimum spanning tree: A spanning tree that where the sum of the edges is minimal - Ethernet line to all the outlets in your home with minimal cabling
```

assumed starting at e

dfs:
    using stack:
        1   +e
        2   -e +b +e
        3   -b +a +b e
        4   -a +f +a b e
        5   -f +g  a b e
        6   -g +d  a b e
        7   -d +h +d a b e
        8   -h  d  a b e
        9   -d +c  a b e
        10  -c  a  b e
        11  -a +i  b e
        12  -i  b  e
        12  -d  e
        13  -e 
        14  // stack is empty, and we've traversed whole tree, depth first

bfs:
    using queue:
        1   +e
        2   -e +b +c +g
        3   -b  c  g +a
        4   -c  g  a +d
        5   -g  a  d +f
        6   -a  d  f +i
        7   -d  f  i +h
        8   -f  i  h
        9   -i  h
        10  -h
        11  // queue is empty, and we visited each node

min spanning tree:
    using ignorance:

                            e
                           3|
                            c
                         7/  4\ 
                         b      d
                       6/     5/ 1\
                       a      g    h
                     2/     2/
                     i      f
3+7+6+2 +4+1+5+2
total = 30
still min spanning tree:
    using prim's:

                             e
                           3/
                            c
                             4\ 
                                d
                              5/ 1\
                              g    h
                            2/
                            f
                           4|
                            a
                          2/ 6\
                          i    b
3+4+1+ 5+2+4+2 +6
total = 27
