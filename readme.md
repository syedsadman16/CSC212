# C++ Data Structures
Assignments and Notes sections 

# Assignments
*Assignment 1*
Jack is a contender for highest salesman award of his company. He wants to know how
many salesman (if any) have sales higher than him in the 5 products given during this
mid-year review.

Create a class named Employee with the following specifications:
• An data member named sales to hold a employee's 5 products sales.
• A void input() function that reads 5 integers and saves them to sales.
• An int calculateTotalSales() function that returns the sum of the employee's sales.

In main() and create array of objects to hold n employee’s data and give calls to above
member functions from main(). Also write code to compare Jack’s total sales to others to
get count of employee’s exceeding sales then Jack and print the result.
Input Format :
In the void Employee :: input() function, you must read 5 sales from stdin and save
them to your sales variable.

Constraints :
1 <= n <= 100
0 <= product sale <= 50

Output Format :
In the int Employee :: calculateTotalSale() function, you must return the Employee's
total sale (the sum of the values in sales ).

<img src='https://github.com/syedsadman16/CSC212/blob/master/Images/assign1.PNG' title='Assignment1' width='' alt='' />

---
*Assignment 2*
Consider an n-element array, a , where each index i in the array contains a reference to an array of k(i)
integers (where the value of k(i) varies from array to array). See the Explanation section below for a
diagram.
Given a, you must answer q queries. Each query is in the format i j , where i denotes an index in array a
And j denotes an index in the array located at a[i] . For each query, find and print the value of element j
in the array at location a[i] on a new line.

Input Format :
The first line contains two space-separated integers denoting the respective values of n (the number of
variable-length arrays) and q (the number of queries).
Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 …
a[i]k-1 describing the k -element array located at a[i].
Each of the q subsequent lines contains two space-separated integers describing the respective values
of i (an index in array a ) and j (an index in the array referenced by a[i]) for a query.

Constraints :
1 <= n <= 10
1 <= q <= 10
0 <= i <= n
0 <= j <= k

Output Format :
For each pair of i and j values (i.e., for each query), print a single integer denoting the element located at
index j of the array referenced by a[i]. There should be a total of q lines of output.

<img src='https://github.com/syedsadman16/CSC212/blob/master/Images/assign2.PNG' title='Assignment2' width='' alt='' />

---
*Assignment 3*
Write a program which takes a Dynamic List and deletes any duplicate nodes from the list. The
list is not sorted.
Create Link list which holds integers less than 50.

Input Format :
Takes input for dynamic link list i.e. dynamically creates nodes and link it to link list.
For example, if the input to linked list is 13 12 13 22 42 44 22
Created Linked list is : 13->12->13->22->42->44->22

Output Format :
Sorted Linked List with no duplicates.
For example : 12 -> 13 -> 22 -> 42 -> 44 

<img src='https://github.com/syedsadman16/CSC212/blob/master/Images/assign3.PNG' title='Assignment3' width='' alt='' />

---
*Assignment 4*
A class template provides a specification for generating classes based on parameters. Class
templates are generally used to implement containers. A class template is instantiated by passing a
given set of types to it as template arguments.

You are given a main() function which takes a set of inputs. The type of input governs the kind of
operation to be performed, i.e. concatenation for strings and addition for int or float. You need to write
the class template AddElements which has a function add() for giving the sum of int or float elements.
You also need to write a template specialization for the type string with a function concatenate() to
concatenate the second string to the first string.

Input Format :
The first line contains an integer n. Input will consist of n+1 lines where n is the number given in the first
line of the input followed by n lines.
Each of the next n line contains the type of the elements provided and depending on the type, either
two strings or two integers or two floating point numbers will be given. The type will be one
of int, float or string types only. Out of the following two elements, you have to concatenate or add the
second element to the first element.

Output Format :
The code provided in the code editor will use your class template to add/append elements and give the
output.

<img src='https://github.com/syedsadman16/CSC212/blob/master/Images/assign4.PNG' title='Assignment4' width='' alt='' />

## Notes
*Pointers*
<img src='https://github.com/syedsadman16/CSC212/blob/master/Images/Pointers.PNG' title='Assignment4' width='' alt='' /> 

---

*LinkedLists*
<img src='https://github.com/syedsadman16/CSC212/blob/master/Images/createList.PNG' title='Assignment4' width='' alt='' /> 
<img src='https://github.com/syedsadman16/CSC212/blob/master/Images/deletebeg.PNG' title='Assignment4' width='' alt='' /> <img src='https://github.com/syedsadman16/CSC212/blob/master/Images/Deleteend.PNG' title='Assignment4' width='' alt='' />
<img src='https://github.com/syedsadman16/CSC212/blob/master/Images/linkedSecond.PNG' title='Assignment4' width='' alt='' />
<img src='https://github.com/syedsadman16/CSC212/blob/master/Images/linnkedEnd.PNG' title='Assignment4' width='' alt='' />


