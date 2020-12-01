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
1.all_of()-This function operates on whole range of array elements It checks for a given property on every element and returns true when each element in range satisfies specified property, else returns false.
2.any_of()-function is used to check one condition, that is true for at least one element of a container.
3.none_of()-function is used to check whether no element of a container is satisfies the given condition.
4.copy_n()-function is used to copy elements of one array into another array.
5.itoa()-function is used assign continuous values into array. This function is present under #include<numeric>. It takes three arguments. The array name, size and the starting value.

                                                            Partition Algoritms
1.partition(beg, end, condition)-This function is used to partition the elements on basis of condition mentioned in its arguments.
2.is_partitioned(beg, end, condition)-This function returns boolean true if container is partitioned else returns false.
3.stable_partition(beg, end, condition)-This function is used to partition the elements on basis of condition mentioned in its arguments in such a way that the relative order of the elements is preserved.
4.partition_point(beg, end, condition)-This function returns an iterator pointing to the partition point of container i.e. the first element in the partitioned range [beg,end) for which condition is not true. The container should already be partitioned for this function to work.
5.partition_copy(beg, end, beg1, beg2, condition)- This function copies the partitioned elements in the differenet containers mentioned in its arguments. 
                                                   It takes 5 arguments. Beginning and ending position of container, beginning position of new container where elements have to be copied (elements returning true for condition), beginning position of new container where other elements have to be copied (elements returning false for condition) and the condition. Resizing new containers is necessary for this function.
