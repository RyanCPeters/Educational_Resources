Assignment 1: turtleprogram
---

**Due:**  11pm, 14 Jan (end of week 2)

### Turtle Program

[Turtle Graphics](https://en.wikipedia.org/wiki/Turtle_graphics) as part of [Logo](https://en.wikipedia.org/wiki/Logo_(programming_language)) was one of the first languages explicitly designed for teaching beginning programming.

A `TurtleProgram` is a set of instructions directing the on-screen *turtle* to draw graphics. To draw a square, one would execute:
```
Forward 10 Right 90 Forward 10 Right 90 Forward 10 Right 90 Forward 10 Right 90 
```

To practice dynamically allocated arrays and operator overloading, create a `TurtleProgram` class that supports the following functionality. For simplicity, use "F" instead of "Forward" and "R" instead of "Right".

1. Constructors and destructor

2. Overload `<<`, so programs can be printed as below

3. Overload equality and inequality operators: `operator==` and `operator!=`. Two programs are `==` if all their instructions are the same.

4. Overload the following operators: `operator=`, `operator+` and `operator+=`. Adding 2 programs creates a longer program.

5. Multiplying a program with an integer creates a larger program where the same program is repeated that many times. Write the `*` and `*=` operators. Multiplying by 0 or negative numbers is not defined. You can silently ignore the operation, throw an error or handle it in a different way. Similarly, multiplying two `TurtleProgram`'s is not defined.

6. Index 0 of a program is defined as the first string in the program (i.e. for program `[F 10]` index 0 is `"F"`. Implement `getLength`, `getIndex` and `setIndex` so the program can be modified.

__As explained in class: getLength() returns the number of strings in the program. getLength() for `[F 10]` would be 2__

The data for the TurtleProgram must be in a *private dynamically allocated array* of just the right size. Normally, we would allocate a much larger array, but for this exercise, we are practicing dynamically resizing our data array.


```C++
int main()
{
    TurtleProgram tp1;
    cout << "tp1: " << tp1 << endl;
    TurtleProgram tp2("F", "10");
    cout << "tp2: " << tp2 << endl;
    TurtleProgram tp3("R", "90");
    tp1 = tp2 + tp3;
    cout << "tp1 now as tp2+tp3: " << tp1 << endl;
    tp1 = tp2 * 3;
    cout << "tp1 now as tp2 * 3: " << tp1 << endl;
    TurtleProgram tp4(tp1);
    cout << "tp4 is a copy of tp1: " << tp4 << endl;
    TurtleProgram tp5("F", "10");
    cout << "tp5: " << tp5 << endl;
    cout << boolalpha;
    cout << "tp2 and tp5 are == to each other: " << (tp2 == tp5) << endl;
    cout << "tp2 and tp3 are != to each other: " << (tp2 != tp3) << endl;
    cout << "index 0 of tp2 is " << tp2.getIndex(0) << endl;
    tp2.setIndex(0, "R");
    tp2.setIndex(1, "90");
    cout << "tp2 after 2 calls to setIndex: " << tp2 << endl;
    cout << "tp2 and tp3 are == to each other: " << (tp2 == tp3) << endl;
    // need to write additional tests for += *=
    cout << "Done." << endl;
    return 0;
}
```

output:
```
tp1: []
tp2: [F 10]
tp1 now as tp2+tp3: [F 10 R 90]
tp1 now as tp2 * 3: [F 10 F 10 F 10]
tp4 is a copy of tp1: [F 10 F 10 F 10]
tp5: [F 10]
tp2 and tp5 are == to each other: true
tp2 and tp3 are != to each other: true
index 0 of tp2 is F
tp2 after 2 calls to setIndex: [R 90]
tp2 and tp3 are == to each other: true
Done.
```

As always expected when programming, comment clearly and
thoroughly. Clearly state any assumptions you make in the beginning
comment block of the appropriate place, e.g., the class
definition. Comments in the class definition file should describe the
ADT, all functionality, and assumptions so someone could use the class
and understand behavior and restrictions. Pre and post conditions are
fine, but not required. See the example on Assignments page for a well-documented program.

You do NOT need to handle data type errors, such as `NULL` being passed to constructors, or commands other than "F" and "R" being passed. We are not executing the program, so any two strings would be acceptable parameters for constructors. You are not allowed to use anything from the STL or 342's Array class. You may not fix the array size at some large constant (although you may make an assumption that arrays larger than can be held in memory will not be handled). The point of this assignment is to review memory management; you will be allocating/deallocating memory often. 

I will run my own main to test your code. The `main` function provided
doesn't test `TurtleProgram` fully, so you need to supplement it.

Write one function at a time. Test it before moving on to the next
function. I suggest starting with `operator==` Use `valgrind` to check
for memory leaks as you develop the program. Much easier to fix things
early on.

Submit a single zip file, `ass1.zip` with the following files:

**Class names start with capital letters, but file names are all lowercase for compatibility** 

`turtleprogram.h`  
`turtleprogram.cpp`  
`ass1.cpp`  -- your own testing functions and main  
`output.txt` - the script file, as defined in [Connecting and compiling files on linux labs](http://faculty.washington.edu/pisan/cpp/linux-labs.html)  
`comments.txt` - your comments.  Includes several bits of information

1. "Secret Number: XXXX" where XXXX is a 4 digit number not starting
   with 0. This will be your secret number. I will show how each
   student is doing relative to others using this number later in the
   quarter.

2. "Hours: XX" where XX is approximate number of hours it took you to complete this assignment

3. "Comments: " Optional comments, weird compiler error messages you got
   while developping, problems in setting things up etc. This is
   intended as *for your information*. If you want a response from me,
   email me instead.

Once your code is working on your own machine, test it once more on
the linux machines (you have been testing incrementally and using
`valgrind`, right?). See [Connecting and compiling files on linux
labs](http://faculty.washington.edu/pisan/cpp/linux-labs.html)

Under unix, compile your code using
```
g++ -std=c++14 -g -Wall -Wextra ass1.cpp TurtleProgram.cpp -o ass1
```

and create the `output.txt` file following the instructions on that page.

See [Creating a zip file](http://faculty.washington.edu/pisan/cpp/creating-zip.html) under
[Assignments](assignments.html) on how to create and test your zip
file. See the sample program on Assignments on how to properly document your code.


## Grading Rubric

I will run automated tests on Wednesday 10pm and Friday 10pm. If you submit your assignment before that you will get an email from "JollyFeedback" The tests are not exhaustive, but should help you.

Multiple criteria. -5 for partially correct, -10 for not working or missing 
```
1. private dynamically allocated array of correct size (-20)
2. Constructors: Empty, 2 parameter and Copy Constructor
3. Destructor
4. <<
5. == and !=
6. =
7. + +=
8. * *=
9. getLength
10. setIndex / getIndex
11. memory leaks
12. efficiency and complexity
13. comments.txt - tested on CSS Linux Labs
14. Coding style + ass1.zip constructed properly
```
