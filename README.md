# AdvProg1-2
Second task for Advanced Programming 1 course

Authors:
Gal Pearl,
Dekel Schreiber

In this task, there will be five algorithms for calculating vectors, in different approaches.

Compliation Instructions:
{TBF}

List of Algorithms:

1) Euclidian Distance: We receive two points, each one will be represented as an array - the size of the array is as the size of the dimension.
   Points will be marked as P and Q, and coordinates will be marked as p1, p2, p3 .... and q1, q2, q3 .... for each i, qi and pi will be the coordinate of the
   point, and i will not be larger than the size of the dimension. General idea:
   
   ![image](https://user-images.githubusercontent.com/116657293/201177857-87b63e5f-3d96-40c0-8830-92bd56ce6340.png)
   
2) Manhattan Geometry: Sum of two points in their cartesian coordinates. We will receive two points, in a given dimension, marked as N.
   Points are represented by arrays with N slots.Calculation will present the sum of lengths of the projections of the line segment between points onto the coordinate      axes. Formally:
   
   ![image](https://user-images.githubusercontent.com/116657293/201179543-c6ef7476-f613-4903-acb6-cb0a0cbf0a75.png)
   
   Where P = (p1, p2, ... , pn) and Q = (q1, q2, ... , qn)
   
3) Chebyshev Distance: The distance is defined by the greatest distance difference, between two vectors, in a vector space.
   Each vector will be represented by N numbers (N >= 1), and will be represented as an array. For each Xi and Yi, as Xi is a coord. from X, and Yi from Y,
   will return the max distance of Xi - Yi, for each i in range of 1 to N. Formally:
   
   ![image](https://user-images.githubusercontent.com/116657293/201183032-e4f08c81-3ece-415a-b3d4-25ccf5729271.png)
   
4) Canberra Distance: numerical measure of the distance between pairs of points in a vector space. It is used to compare ranked lists.          
   *Fun fact: Also used for intrusion detection in computer security (IDS).*
   Formally: (For P = (p1, p2, ... , pn) and Q = (q1, q2, ... , qn))
   
   ![image](https://user-images.githubusercontent.com/116657293/201183812-5c097577-4977-4eff-a4cc-c545d3817105.png)

5) Minkowsky Distance: metric for a normed vector space, which is a generalization of Euclidean and Manhattan Distance formulas.
![image](https://user-images.githubusercontent.com/116657293/201184801-bcb3d888-f0a9-4b54-8b15-e9f8aa8c3509.png)

   As for P: The formula uses P=1 or P=2, which corresponds to the Manhattan and Euclidean formulas, respectively.

Images and some explanations sourced from Wikipedia pages of the distance formulas
