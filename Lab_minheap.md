### <p style="text-align: center;">Lab BST </p>
### <p style="text-align: center;">Data Structures CSCI 2320

#### Lab Objective
Learn how to implement and use a Heap ADT in C++.

#### Lab Overview
You will receive a partial implementation of a Heap in C++.  Your mission is to implement some of the methods for the class as well as understand all the other methods.

#### Lab Tasks

Implement the following methods for the Heap class in **`minheap.cpp`**:
- **`void insert(int val);`** This method add a value to the heap per heap rules.
- **`int peek();`** This method returns the value at the top of the heap. 
- **`int extractMin();`** This method removes and returns the value at the top of the heap. 

#### Final output
Your program must compile and produce output.  

##### Rubric

| Name                       | Description                                                         | Points |
| -------------------------- | ------------------------------------------------------------------- | ------ |
| Coding Style               | Run cpplint on student code                                         | 10     |
| MinHeap Starts Empty       | Heap initializes with size 0                                       | 5      |
| MinHeap Insert Single Value| Inserting one value updates top and size                           | 5      |
| MinHeap Peek Smallest      | `peek()` returns the smallest value after inserts                  | 10     |
| MinHeap Extract Sorted     | `extractMin()` returns values in ascending order                   | 15     |
| MinHeap Duplicate Values   | Correctly handles duplicate values                                 | 10     |
| MinHeap Negative Positive Values | Correctly handles negative and positive values               | 10     |
| MinHeap Peek Empty Throws  | `peek()` on empty heap throws `std::out_of_range`                 | 10     |
| MinHeap Extract Empty Throws | `extractMin()` on empty heap throws `std::out_of_range`         | 10     |
| MinHeap Interleaved Size   | Size tracks correctly across interleaved operations                | 10     |
| MinHeap Stress Order       | Maintains min-heap order under stress inserts/extracts             | 5      |
| Total Points               |                                                                     | 100    |
#### Due Dates and Honor
The due date is specified on Blackboard. 

This is an ***independent*** programming project, and it is very important that you understand and abide by the ***academic integrity policy*** concerning programming projects.  Remember, your personal honor and integrity is far more important than your grade on the project. 

#### Grading 
This lab is available in GitHub Classroom.  Accept the URL on Blackboard and then clone your repository to your machine for development. Your lab will be graded automatically via GitHub.  Please check the grading results each time you check in your code.  Your final grade will be based upon your last sync to GitHub before the deadline.

#### Project Artifacts
The following should be completed by the due date/time specified on Blackboard.
- Check in all source code changes to your GitHub repository.  Please check your URL using a web browser to verify that your changes have been synced.
- Submit the URL for your repository to Blackboard.


<p style="font-size:120%;color:navy;background:linen;padding:10px;text-align:center">&copy; Copyright 2026 by Michelle Talley <br> <br>You may not publish this document on any website or share it with anyone without explicit permission of the author. </p>

