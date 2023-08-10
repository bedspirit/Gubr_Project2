# Gubr_Project2
The artifact chosen for demonstrating expertise in Algorithms and Data Structure is a program I wrote for my office called “The Gubr 2.”  This program is a descendant of the Gubr.  The original was written in 2019 and the second one was written in 2022.  The purpose of the program is to filter a large dataset into a smaller one based on some key elements.  The original Gubr ran fast but lacked user friendliness.  The Gubr 2 introduced more user friendliness by allowing one to see and interact with the original dataset and preview the filtered dataset.  At the time, it seemed redundant to load all of the data into an interactive list box and also into the class and vector structure of the original program.  All filtering could be done in real time working off of the data from the list box.  For small to medium sized datasets, the performance wasn’t noticeably worse than the original.  However, for larger datasets that contain 50,000 items or more, the performance was very bad.  This condition necessitated a better data structure and algorithm to minimize the interactions with the list box.
Part of the reason for including this is because I just happened to have started the project on the same day that this course started.  This project was specifically about adding data structure and introducing an algorithm that only interacts with the list box when necessary, so it seemed like a perfect fit.
The class and vector container from the original Gubr was reintroduced.  Ther Gubr 2 loaded each line of the dataset as a string into a list box.  Now it simultaneously parses the data into elements from the class and loads them into a vector.  In addition to that class, it loads the indices of the five most common distribution centers into their own vectors.  This will allow me to easily select and deselect those with checkboxes without having to do any comparisons at all.  I also employ another vector that records the indices for items, stores, and other distros.  This vector is loaded during comparison with the class vector and it’s indices are used to deselect items on the list box eliminating the need to check every item.  Here are a few other modifications that were made:
1.	 Radio buttons that switched between items, stores, and distro filters
2.	Ability to add more than one item, store, and distro to filter at a time.
3.	Ability to save lists of items, stores, and distros.
4.	An offset function to line up files that did not match the standard mainframe file
5.	Progress bar
If this program was written in C#, I could have avoided loading the list box line by line because C# contains a function that loads an entire set.  CLI does not have that function, so the list box still had to be loaded line by line.  One change that greatly improved performance during this process was to turn off live updates of the list box as it loads.  I still like to see that things are happening so I introduced a progress bar to let the users know the program was working.  Loading a dataset of 50,000 items went from around 5 minutes to 50 seconds.
The most elaborate algorithm employed in this program is the one that processes the date.  C++ did not have a convenient function for easily adding and subtracting days.  This required some elaborate conversions in order to do math with the dates of the items and today’s date.  The result of that math helps determine if an item is selected or not.
I feel like I met the course objectives planned for this enhancement, but I am underwhelmed with the algorithm function.  It’s possible that I am underselling some of the smaller algorithms that were involved in this program and I may need to improve my descriptions of them.
The program runs much faster than it did before So I am happy with this outcome.  However, there are some minor improvements that can be made which could have big impacts in specific situations.  I had to manage my time and focus on the parts that would have the biggest impact on performance.

