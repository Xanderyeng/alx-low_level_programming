<img src="https://www.cdn.geeksforgeeks.org/wp-content/uploads/Linear-Search.png">
<img src="https://www.cdn.geeksforgeeks.org/wp-content/uploads/Binary-Search.png">

# Repository Title Goes Here

What if you have to write a program to search a given number in an array? How will you do it?

Well, to search an element in a given array, there are two popular algorithms available:

1. Linear Search
2. Binary Search
### Linear Search ###
Linear search is a very basic and simple search algorithm. In Linear search, we search an element or value in a given array by traversing the array from the starting, till the desired element or value is found.

It compares the element to be searched with all the elements present in the array and when the element is matched successfully, it returns the index of the element in the array, else it return -1.

Linear Search is applied on unsorted or unordered lists, when there are fewer elements in a list.

### Binary Search ###
Binary Search is used with sorted array or list. In binary search, we follow the following steps:

We start by comparing the element to be searched with the element in the middle of the list/array.
If we get a match, we return the index of the middle element.
If we do not get a match, we check whether the element to be searched is less or greater than in value than the middle element.
If the element/number to be searched is greater in value than the middle number, then we pick the elements on the right side of the middle element(as the list/array is sorted, hence on the right, we will have all the numbers greater than the middle number), and start again from the step 1.
If the element/number to be searched is lesser in value than the middle number, then we pick the elements on the left side of the middle element, and start again from the step 1.
Binary Search is useful when there are large number of elements in an array and they are sorted.

So a necessary condition for Binary search to work is that the list/array should be sorted.

Other thing that we need to have in mind is the Big O and space complexity of this algorithms.

Space Complexity:
The term Space Complexity is misused for Auxiliary Space at many places. Following are the correct definitions of Auxiliary Space and Space Complexity.

Auxiliary Space is the extra space or temporary space used by an algorithm.

Space Complexity of an algorithm is total space taken by the algorithm with respect to the input size. Space complexity includes both Auxiliary space and space used by input.

For example, if we want to compare standard sorting algorithms on the basis of space, then Auxiliary Space would be a better criteria than Space Complexity. Merge Sort uses O(n) auxiliary space, Insertion sort and Heap Sort use O(1) auxiliary space. Space complexity of all these sorting algorithms is O(n) though.

### TASKS ###
0. Linear search mandatory
Write a function that searches for a value in an array of integers using the Linear search algorithm.
1. Binary search mandatory
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
2. Big O #0 mandatory
What is the time complexity (worst case) of a linear search in an array of size n?
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
4. Big O #2 mandatory
What is the time complexity (worst case) of a binary search in an array of size n?
5. Big O #3 mandatory
What is the space complexity (worst case) of a binary search in an array of size n?
6. Big O #4 mandatory
What is the space complexity of this function / algorithm?

And 9 advanced tasks.

---

## Table of Contents

- [Installation](#installation)
- [Features](#features)
- [Contributing](#contributing)
- [Team](#team)
- [Support](#support)
- [License](#license)


---

## Installation

Copy the code, compile (if is necessary), and execute it.

---

### Setup

---

## Features
## Usage 

See the codes of different functions and programs.

## Documentation 

<a href="https://intranet.hbtn.io/rltoken/ntNFhA9urmBxZfcn8gjsqw">`Search algorithm`</a><br>
<a href="https://intranet.hbtn.io/rltoken/pPScxisIQ0eOPBPXkjcEmg">`Space complexity`</a><br>

---

## Contributing

> To get started...

### Step 1

- **Option 1**
    - 🍴 Fork this repo!

- **Option 2**
    - 👯 Clone this repo to your local machine using 

### Step 2

- **HACK AWAY!** 🔨🔨🔨

### Step 3

- 🔃 Create a new pull request using. 
---

## Team

https://github.com/xanderyeng
---

## Support

Feel free to contact me!

- GitHub at <a href="https://github.com/xanderyeng">`xanderyeng`</a>

---

## License

Free Source Code
