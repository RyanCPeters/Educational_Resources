<meta name="copyright" content="Yusuf Pisan | pisan@uw.edu | http://courses.washington.edu/css343/" /> <meta name="duration" content="120" />

AVL Trees, 2-3 Trees, Red-Black Trees
===

Created By: [Yusuf Pisan](http://courses.washington.edu/css343/pisan/)
---

formatted to Github Markdown syntax by Ryan Peters

#### Be sure to check the other lectures out after you finish this one! 

<div><a href="https://ryancpeters.github.io/Educational_Resources/343/lecture5/" style="position: relative; left: 5em">Previous lecture </a>
  <a href="https://ryancpeters.github.io/Educational_Resources/343/lecture7/" style="position: relative; left: 20em"><!--- Next lecture--></a></div>


[1]:#lecture-6-big-o "Back to Table of Contents"

---

#### Table of Contents

1. AVL Trees, 2-3 Trees, Red-Black Trees
2. Overview 
3. AVL Trees
4. Rotations
5. Single Rotations
6. Example
7. Group Exercise:
8. Double Rotations - 1
9. Double Rotations - 2
10. When to Rotate
11. Group Exercise:
12. Group Exercise - Partial Answer
13. 2-3 Trees - 1
14. 2-3 Trees - 2
15. 2-3 Trees - 3
16. 2-3 Trees - 3
17. After Class

---
Overview 
---

+ Resubmit Ass2 by Sunday 11pm  
only if fixing memory leaks, crashes or compilation errors

+ Ass3: Graph search and Djikstra
look through my pseudocode and confirm understanding

+ AVL, 2-3, Red-Black Trees

+ Big O continued

+ Midterm Review on Wednesday

---
AVL Trees
---

AVL (Adelson-Velskii and Landis)

- Binary search tree AND

- For each vertex in the tree,  
the height of the left and right subtrees differ by **at most one**


Properties:

- Maintains its height close to the minimum

- Rotations restore the balance

- Common to keep track of the height of each node

---
Rotations
---

- Useful link https://www.youtube.com/watch?v=mYGYbZxrU_4 

- Two type of rotations: *single* rotations, *double* rotations 

- You may not need a rotation after add

Single left rotation at 20, the unbalanced node:

![](../images/ch19-3-single-rotation.png)

40 becomes the parent of 20  
20 takes ownership of 40's left child as its right child  
40 takes ownership of 20 as its left child. 

---
Single Rotations
---

Left Rotate: (Right-Right, right child's right child is heavy)

![](../images/ch19-3x-left.png)

Right Rotate: (left-left, left child's left child is heavy)

![](../images/ch19-3x-right.png)


Child(b) becomes Parent(a)  
a takes ownership of b's left child, makes that tree its right child **OR**  
a takes ownership of b's right child, makes that tree its left child 

---
Example
---


![](../images/ch19-3x-example.png)


---
Group Exercise:
---


Insert: 3, 2, 1, 4, 5, 6, 7 into a fresh AVL tree.

Show each step of the process, e.g., for each insertion: heights, rotation node, and tree before and after each rotation

---
Double Rotations - 1
---


Insert: 1, 6, 3

- Single-rotation cannot restore it

- Right child's left child is heavy (not left-left or right-right)

- Right rotate at 6, 3 becomes the parent of 6  
- Left rotate at 1, 3 becomes root with children 1 and 6

---
Double Rotations - 2
---


![](../images/ch19-5-double.png)

Left rotation at 20 (30 becomes parent of 20)   
Right rotation at 40  (30 becomes parent of 40)

Left-Right Rotation (LR)  
Left rotation on the left subtree  
(not a rotation on 40 which is the unbalanced node,  
but a left rotation on 20, whichn is 40's left subtree)  
Right rotation on 40  
(not on 30 which is an unbalanced node, but on 40 the original unbalanced node)  

---
When to Rotate
---


- Keep track of *balance factor*, difference in heights

- Newly inserted leaf node has a balance factor of 0

- Recompute the balance factor of its ancestors: unchanged or changed

- If balance factor is not [-1, 0, 1], have to rotate

- Computing the balance factor all the wa to the root is called retracing (our steps to insert)

```C
IF tree is right heavy
    IF tree's right subtree is right heavy
        Perform Single Left rotation (right-right case)
    ELSE
        Perform double rotation, Right-Left Rotation (RL)
            Right rotation on the right subtree  
            Left rotation
ELSE IF tree is left heavy
    IF tree's left subtree is left heavy
         Perform Single Right rotation (left-left case)
    ELSE
       Perform double rotation, Left-Right Rotation (LR)
          Left rotation on the left subtree  
          Right rotation
```

https://www.tutorialspoint.com/data_structures_algorithms/avl_tree_algorithm.htm


---
Group Exercise:
---


Already done: 3, 2, 1, 4, 5, 6, 7 into a fresh AVL tree.

Insert 16 to 10 one by one.

---
Group Exercise - Partial Answer
---

![](../images/ch19-3x-exercise.png)

---
2-3 Trees - 1
---


![](../images/ch19-7-2-3-node.png)


---
2-3 Trees - 2
---


![](../images/ch19-2-3-example1.png)

---
2-3 Trees - 3
---


![](../images/ch19-2-3-example2.png)


---
2-3 Trees - 3
---


Insertion: always try the corresponding leaf node first

Not full: quite efficient

Full: causes a split into two nodes. May propagate to other tree levels

Group Exercise: 50, 100, 20, 30, 40, 70, 60, 45, 55, 120, 65, 67, 68, 35, 52, 31, 32  

---
After Class
---


+ Work on Ass3

+ Read Chapter 19 - balanced trees

+ Exam review on Wednesday
