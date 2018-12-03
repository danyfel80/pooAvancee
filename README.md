# pooAvancee
Repository for the Programmation Orientée Objet Avancée course - 2018

## Link to code management course
[Click here](https://docs.google.com/presentation/d/1vfPIK5d_0Ef6bzpXOd_lg1FcrvWRGCex1d_7V2ur5pQ/edit?usp=drivesdk)

### Information on multiple inheritance
[Click here](https://www.geeksforgeeks.org/multiple-inheritance-in-c/)

### Some exercises for file handling:

#### Exercise 1
Make a program for reading a fle called “fichero.txt”,
writing in another fle “FICHERO2.TXT” the content of the
input fle with all its letters in uppercase.
Example:

fichero.txt 
```
Hola, mundo.
Como estamos?
Adios, adios...
```
FICHERO2.TXT
```
HOLA, MUNDO.
COMO ESTAMOS?
ADIOS, ADIOS...
```

##### Exercise 2
Design a program for reading two text fles, “f1.txt” and
“f2.txt”, writing on the screen the lines that differ in both
fles, adding “< ” if the line corresponds to “f1.txt”, and
“ >” if it corresponds to “f2.txt”.
Example:

f1.txt:
```
hola, mundo.
como estamos?
adios, adios...
```

f2.txt:
```
hola, mundo.
como vamos?
adios, adios...
```

The output should be:
```
< como estamos?
> como vamos?
```

#### Exercise 3
Develop a function called “finfichero” receiving two
arguments: the frst one must be a positive integer n, and
the second the name of a text fle. The function must print
on the screen the last n lines of the given fle.
Example:
```c++
$ finfichero(3,"cadenas.txt")
```
output:
```
with several words
unapalabra
muuuuchas palabras, muchas, muchas...
```

#### Exercise 4
Given two text fles “f1.txt” and “f2.txt”, in which each
line is a series of numbers separated by “:”, and assuming
that the lines are in ascending order by the frst number,
make a function to read both fles line by line writing in the
fle “f3.txt” the common lines, like in the following
example:
Ejemplo:

f1.txt:
```
10:4543:23
15:1:234:67
17:188:22
20:111:22
```

f2.txt:
```
10:334:110
12:222:222
15:881:44
20:454:313
```

f3.txt:
```
10:4543:23:334:110
15:1:234:67:881:44
20:111:22:454:313
```

