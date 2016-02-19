Lab requirements
=================
You will write a program to read a file containing movie data (Tile, Director, Year Released, Running Time) into a vector of structures. Use the "Sample program that processes the file" provided to help you.

After the program reads the data from the file, have your program ask the user how he/she wants to see the data displayed on the screen. Options are: sorted by title, director, year released or running time. You may choose to have a "menu of options" function to display the menu.

Use the sort function (#include <algorithm>) to sort the requested data. You will need different comparison functions to pass to sort() depending on what field the data will be sorted on. This is an example of a call to sort() assuming the vector name is myMovies and the user wants to sort by title:

sort (myMovies.begin(), myMovies.end(), compareByTitle);

The compareByTitle function will sort the elements in the vector. Since the elements are structures, that is what should be passed to it as parameters:


compareByTitle(Movie m1, Movie m2)

The body of the compare functions will differ depending on what field within the structure needs to be compared (title, director, year released or duration)

After sorting, you should display all the information of each movie:

Title                        Director               Year Released                Duration
