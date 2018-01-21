Assignment 2: BinarySearchTree Program
===

**Due:**  11pm, 28 Jan (end of week 4)
---

## BinarySearchTree Program

---
#### Requirements 

Implement a BinarySearchTree based on the template below. 

- BinarySearchTree must be able to handle different types of data; the provided sample ass2.cpp tests it using `string` and `int`
- BinaryNode is already provided and should not be modified.
- All the public functions of `BinarySearchTree` must be implemented

---
#### Source code to start from

[binarysearchtree.h](./provided_code/binarysearchtree.h)  
[binarysearchtree.cpp](./provided_code/binarysearchtree.cpp)  -- stub file to help compile

`BinaryNode` -- use as provided. Do not modify. No need to comment further

[binarynode.h](./provided_code/binarynode.h)  
[binarynode.cpp](./provided_code/binarynode.cpp)


For the sample ass2.cpp file, expand it to suit your needs. Automated test will not run your ass2.cpp since it requires keyboard interaction.

[ass2.cpp](./provided_code/ass2.cpp)

---
#### Assignment expecations

- As always expected when programming, comment clearly and thoroughly. 
- Clearly state any assumptions you make in the beginning comment block of the appropriate place, e.g., the class definition. 
  - Comments in the class definition file should describe:
    - the ADT 
    - all functionality, 
    - your assumptions 
      - so someone could use the class and understand behavior and restrictions. 
    - Pre and post conditions are fine, but not required. 

See the example on [Assignments page](http://courses.washington.edu/css343/pisan/assignments.html) for a well-documented program.

---
#### Suggestions

- You do NOT need to handle data type errors due to bad input.
- Pisan will run his own `main` funtion to test your code. The `main` function provided doesn't test your program fully, so **_you need to supplement it_**.
- Write one function at a time. Test it before moving on to the next function. 
  - Pisan suggests starting with `add`. Also, use `valgrind` to check for memory leaks as you develop the program. It's much easier to fix things early on.

---
#### Submittable file check list and specifications

Submit a single zip file, `ass2.zip` with the following files:

**Class names start with capital letters, but file names are all lowercase for compatibility** 

- [ ] `binarysearchtree.h`  
- [ ] `binarysearchtree.cpp`  
- [ ] `ass2.cpp`  -- your own testing functions and main  
- [ ] `output.txt` - the script file, as defined in [Connecting and compiling files on linux labs](http://faculty.washington.edu/pisan/cpp/linux-labs.html)  
- [ ] `comments.txt` - your comments.  Includes several bits of information

1. "Hours: XX" where XX is approximate number of hours it took you to complete this assignment

2. "Comments: " Optional comments, weird compiler error messages you got
   while developping, problems in setting things up etc. This is
   intended as *for your information*. If you want a response from me,
   email me instead.

You do not need to submit

`binarynode.h`  
`binarynode.cpp`  

These files should not be modified, so they must be as given in assignment.

Once your code is working on your own machine, test it once more on
the linux machines (you have been testing incrementally and using
`valgrind`, right?). See [Connecting and compiling files on linux
labs](http://faculty.washington.edu/pisan/cpp/linux-labs.html)

##### Recomended command set for linux testing

Under unix, compile your code using
```UML
g++ -std=c++14 -g -Wall -Wextra ass2.cpp -o ass2
```

and create the `output.txt` file following the instructions on that page.

See [Creating a zip file](http://faculty.washington.edu/pisan/cpp/creating-zip.html) under
[Assignments](assignments.html) on how to create and test your zip
file. See the sample program on Assignments on how to properly document your code.

---
---
## Submission

- Submit your assignment early to get automated feedback from Jolly.
- Your submission must be named ass2.zip
- Your submission must create a directory called ass2 and place all the files in that directory when it is unzipped.
- DO NOT include unnecessary files, only submit what is required. DO NOT zip up your Debug directory, your project directory, etc.
- Canvas will automatically rename your zip file ass2-2.zip, ass2-3.zip, etc depending on how many times you submit it. *This is fine*. Do not change your zip file name.


---
---
## Grading Rubric

Pisan will run automated tests on Wednesday 10pm and Friday 10pm. If you submit your assignment before that you will get an email from "JollyFeedback" The tests are not exhaustive, but should help you.

Multiple criteria. -5 for partially correct, -10 for not working or missing 
```UML
1. Constructors: Empty, 1 parameter and Copy Constructor
2. Destructor, clear
3. isEmpty, getHeight, numberOfNodes, contains
4. operator==, operator!=
5. add
6. inorderTraverse
7. rebalance
8. readTree
8. memory leaks
10. efficiency and complexity
11. comments.txt - tested on CSS Linux Labs
12. Coding style + ass2.zip constructed properly
```
