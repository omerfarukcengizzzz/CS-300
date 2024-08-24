# ABC University Course Management System

## Project Overview
This project was developed as part of the **CS-300 course**, where the primary objective was to analyze and compare the performance of three different data structures—**Vector, Hash Table, and Binary Search Tree (BST)**—for managing course data at ABC University (ABCU). The goal was to determine which data structure is most efficient and suitable for storing, searching, and retrieving course information, which is essential for academic advisors at ABCU when assisting students with their course selections.

## Questions and Responses
## 1. What was the problem you were solving in the projects for this course?
The problem tackled in this project involved managing and retrieving course information efficiently. As the volume of data increased, it became imperative to select the most suitable data structure that could handle operations like data loading, searching, and printing all courses effectively. This required a deep understanding of data structures and their respective performance characteristics.

## 2. How did you approach the problem? Consider why data structures are important to understand.
To solve this problem, I implemented and evaluated three data structures: Vector, Hash Table, and Binary Search Tree (BST). The choice of these data structures was based on their unique strengths:

**Vector:** A simple and efficient option for small datasets, with linear search capabilities.  
**Hash Table:** Known for its fast average-case search time, ideal for quick data retrieval.  
**Binary Search Tree (BST):** Offers naturally ordered data traversal, which is beneficial for sorting and searching, especially when balanced.  
Each data structure was tested against the same set of operations: loading course data from a file, searching for a specific course, and printing all courses in alphanumeric order.

## 3. How did you overcome any roadblocks you encountered while going through the activities or project?
During the project, one of the major challenges was dealing with the limitations of each data structure. For instance:

**Vector:** The linear search in a Vector became inefficient as the dataset grew, leading to slower performance.  
**Hash Table:** Handling hash collisions was a significant concern, as it could degrade performance.  
**BST:** Ensuring that the BST remained balanced was crucial for maintaining optimal search and insertion times.  
To overcome these roadblocks, I implemented error handling and validation checks to ensure data integrity and minimize performance degradation. Additionally, I utilized in-order traversal for BSTs to maintain sorted order and implemented hash functions with good distribution properties to reduce collisions.

## 4. How has your work on this project expanded your approach to designing software and developing programs?
Working on this project has significantly expanded my approach to software design and development. I gained a deeper appreciation for the importance of selecting the right data structure based on the specific needs of the application. The project reinforced the concept that the efficiency of data operations is closely tied to the underlying data structure, and making informed decisions in this regard is crucial for building performant software.

## 5. How has your work on this project evolved the way you write programs that are maintainable, readable, and adaptable?
This project has also evolved the way I write programs that are maintainable, readable, and adaptable. By working with different data structures, I learned the importance of modular design, where each component of the program is responsible for a specific task. This modular approach not only enhances readability but also makes the codebase easier to maintain and extend. Additionally, I focused on writing clean, well-documented code to ensure that future developers can easily understand and modify the program as needed.

## Conclusion
In conclusion, this project provided valuable insights into the strengths and weaknesses of different data structures in managing and retrieving data. The experience gained from overcoming the challenges associated with each data structure has deepened my understanding of software design principles, ultimately leading to more efficient and maintainable code.
