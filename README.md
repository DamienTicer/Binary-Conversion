# Binary-Conversion
Enter the following into the console:
```
gcc -c bin2dec.c -o bin2dec.o
gcc -c dec2bin.c -o dec2bin.o
gcc -c binconv.c -o binconv.o
gcc binconv.o bin2dec.o dec2bin.o -o binconv
```
The above commands will produce an executable called binconv. You can run it using
```
./binconv
```
