Midterm review:

Question #1:
turn `DATA STRUCTURES` into a BST, ignore repeated characters

12345678
DATSRUCE

                    D
                  /   \
                 A     T
                  \   / \
                   C S   U
                    /
                   R
                  /
                 E

Height  = 5

Write the sequence of letters from post order traversal of tree

C A E R S U T D


What would be the min height of this tree if it was a balanced tree. Explain

Num elems is 8

2^(h-1) - 1 <= 8 <= 2^h - 1

2^2 -1 = 3
2^3 -1 = 7
2^4 -1 = 15

so, 2^(4-1) -1 <= 8 <= 2^4 -1 
so min height = 4;



Question #2:

a) Construct a Huffman Encoding tree, given the following letter freq.

b) Encode the following phrase: brave base
1110 

c) How many bits are used i encoding the phase in (b).

Letter freq -- e:5, s:4, a:3, r:2, b:1, v:1

v--1
  2|--1
b--0   |
      4|--1
       |  |
r-----0  9|--1
          |  |
e---------0  |
             |
s--1         |
  7|---------0
a--0

a: 00
s: 01
e: 10
r: 110
b: 1110
v: 1111


Question #3:

give the complexityy of the following. you need not show work.

a) find smallest value in an avl tree of n items.

b) find smallest value in a binary min-heap of n items.

c) find the smallest value in a binary max-heap of `n` items.

d) sort each string in an array and then sort the array. array has `a` items.
	- max len of each string is `s`.
	- exprtess your answer in terms of `a` and `s`, not `n`.
	look at the cracking the code example number 8 reading for why the solution is O(a*s*(loga + logs))

e) traverse a graph using depth-first search where the edges are given as an adjacency matrix, sort the list of nodes visited and print them.
O(n^2)


Question #4:

given the following table:

|fromVertex|toVertex|edgeweight|
|:---:|:---:|:---:|
|A|B|5|
|A|C|2|
|A|D|2|
|B|E|3|
|C|D|2|
|C|F|3|
|C|G|3|
|D|G|1|
|F|H|2|
|G|F|1|


A) draw the graph defined by the edges above, pay exyra attention to this part. if you get the graph wrong, you will get subsequent questions wrong as well.


 A  -> B -> E
|  \
|    \
  C -> D
|   \ / 
F <- G
| 
H



b) depth first search

assuming a stack, where +char is a push to top, and -char is a pop from top.

+A
-A +B +C +D
-B +E  C  D
-E  C  D
-C +F +G  D
-F +H  G  D
-H  G  D
-G  D
-D

A B E C F H G D

c) breadth-first search

assuming queue, where +char is a push to back, and -char is a pop from front.

+A
-A +B +C +D
-B  C  D +E
-C  D  E +F +G
-D  E  F  G 
-E  F  G  
-F  G +H
-G  H
-H

A B C D E F G H

d) Djikstra's algo



e)
