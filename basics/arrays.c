// The number of elements in an array declaration must be a constant at compile time.
// The size of an array cannot be adjusted using an array declaration while the program is running.
// This inability to automatically resize C arrays as data is added, leads to a class of security flaws that are generally referred as "buffer overflow"
// where a program reads more data than can fit into an array and is tricked to overwriting other data or code and compromising an application.