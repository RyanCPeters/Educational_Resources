given: [1,4,2,11,5,3,7,13,15,6,10]

Perform Heap Sort:

		-1 +10  4  2 11  5  3  7 13 15  6 -10 +1

				0		1	 2  3  4  5  6  7  8  9 10
				10  4  2 11  5  3  7 13 15  6 | 1
				 2  4 10 11  5  3  7 13 15  6 | 1
				 2  4  3 11  5 10  7 13 15  6 | 1
				 2  4  3 11  5 10  7 13 15  6 | 1


		-2 + 6  4  3 11  5 10  7 13 15 |+2  1 

				 0  1	 2  3  4  5  6  7  8   9 10
				 6  4  3 11  5 10  7 13 15 | 2  1
				 3  4  6 11  5 10  7 13 15 | 2  1  





In this structure, nodes are visited as they are removed from the qwayway.

+a
-a +b +e
-b e +c +d
-e c d +f +g
-c d f g
-d f g
-f g
-g

nullptr :P

a b e c d f g				 




   1   1
a -> b -> c
|1   |4
. 2  .
e -> d
| \
.   .
g    f

vertex-set: vs

vs: a;  b c d e f g
    a   a - - a - -
   ab   a b b a - -
  abc   a b b a - - 
 abcd   a b b a - -
abcde   a b e a e e
abcdef  a b e a e e
abdefg  a b e a e e
