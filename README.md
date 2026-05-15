1. Introduction

Sorting is a very common task in computer programs. There are many methods for sorting.
Often, methods such as bubble sort and selection sort are introduced because they are easy to understand, but they are not very efficient.
In this laboratory assignment, we will examine an operation called merge, which is used in the merge sort method.
However, the lab begins by implementing an operation that checks whether a file containing integers is sorted or not.

2. Purpose

You will create and call your own functions. In these functions, you will implement algorithms. You will also divide the source code into several files.

3. About main()

In previous laboratory assignments, you could write the entire program in a single function, main().
As programs become larger, it becomes more difficult to keep track of what different parts of the program do. Therefore, programs are divided into several functions. In addition, functions can be placed in separate files, making them easy to reuse in new programs.

3. Part 1

A text file contains integers.
Create a sorting test function that determines whether the integers in the file are sorted in order or not. See Algorithm 1 below. Try to come up with your own method before looking at the algorithm.
Complete your program with a main function.
In the main function, call your sorting test function to verify that it works with different files, both sorted and unsorted.
When your function works correctly, test whether the provided files A, A1, and B are sorted.

4. Part 2

Two text files contain sorted integers.
Create a merge function that combines the numbers in the two files into a new file, in such a way that the new file contains all numbers in sorted order. See Algorithm 2 below.
Try to implement it on your own before looking at the algorithm.
Note: The numbers should not need to be sorted after the merge operation.
Complete the program with a main function where you test your function using different files containing sorted integers.
Verify that the new file is sorted and contains all values from the input files.
When it works, test it with two of the files A, A1, or B (preferably the two that are sorted).

5. Part 3

Combine everything into a single program that demonstrates that your functions work. This is the program you will present and submit.
You must use the files A, A1, and B in your program.
Each function should be placed in its own source code file (.cpp).
Each source code file should also have its own header file (.h).
This means there will be 2 files per function.
Finally, create a .cpp file containing the main function. It does not need a header file.
The following should preferably be included in main:
Test whether the input files are sorted.
If they are not sorted, print an error message.
If they are sorted, perform a merge.
Check whether the merged file is sorted.
All of this should of course be done by calling the functions you created earlier.

6. Algorithm 1: Determine Whether a File of Values Is Sorted

Input: A filename
Output: True or false depending on whether the file is sorted.

    a = readValue(A)
    while notEndOfFile(A)
        b = readValue(A)
        if a > b
            return false
        a = b
    return true

7. Algorithm 2: Merge Two Files with Sorted Values

Input: Filenames for two input files and one output file
Output: File C containing all values from A and B in sorted order

    a = readValue(A)
    b = readValue(B)
    while notEndOfFile(A) AND notEndOfFile(B)
        if a < b
            write a to C
            a = readValue(A)
        else
            write b to C
            b = readValue(B)
    while notEndOfFile(A)
        write a to C
        a = readValue(A)
    while notEndOfFile(B)
        write b to C
        b = readValue(B)



Compiling with c++ 
    	g++ -o programmet funktion.cpp sortering.cpp mergeSort.cpp slutSort.cpp

Run
    ./programmet
