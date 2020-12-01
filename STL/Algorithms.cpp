// 1. Algorithms

/* Header file: #include<algorithm>

Types:
                                                            Non-Manuipulating Algorithms
1.sort(start,end)
2.binary_search(startaddress, endaddress, valuetofind)
3.reverse(first_iterator, last_iterator) – To reverse a vector.
4.*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
5.*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
6.accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements #Use header file as #include<numeric>
7.count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
8.find(first_iterator, last_iterator, x) – Points to last address of vector ((name_of_vector).end()) if element is not present in vector.
9.lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
10.upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’. 

                                                            Manipulating Algorithms
1.arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.
2.arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.
3.next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
4.prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation.  
5.distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.This function is very useful while finding the index.

                                                            Array Algorithms
