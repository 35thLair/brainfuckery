/*

Brainfuck, transcribed to C, as an excuse to hurt people's heads in the name of education.

To compile: gcc -o brainfuck_hello_world brainfuck_hello_world.c
To run: ./brainfuck_hello_world

"Hello World!\n" in Brainfuck from Wikipedia:

++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.

For an much easier to read version of the source code, look at the bottom of this file.

See: https://en.wikipedia.org/wiki/Brainfuck#Hello_World.21


The eight commands of Brainfuck and their equivilence in C:

>   becomes 	++p;
< 	becomes 	--p;
+ 	becomes 	++*p;
- 	becomes 	--*p;
. 	becomes 	putchar(*p);
, 	becomes 	*p = getchar();
[ 	becomes 	while (*p) {
] 	becomes 	}

See: http://www.muppetlabs.com/~breadbox/bf/

Also see: http://www.muppetlabs.com/~breadbox/bf/standards.html



*/

#include <stdio.h>          // required for putchar() and getchar()
   
int main(void) {


char bf[30000];             // an array of 30,000 bytes is an unoffical standard
char *p = bf;               // sometimes it is polite to point

++*p;
++*p;
++*p;
++*p;
++*p;

++*p;
++*p;
++*p;
++*p;
++*p;           // initialize counter (cell #0) to 10

while (*p) {    // use loop to set the next four cells to 70/100/30/10

++p;

++*p;
++*p;
++*p;
++*p;
++*p;           

++*p;
++*p;           // add  7 to cell #1

++p;

++*p;
++*p;
++*p;
++*p;
++*p;

++*p;
++*p;
++*p;
++*p;
++*p;           // add 10 to cell #2

++p;

++*p;
++*p;
++*p;           // add  3 to cell #3

++p;

++*p;           // add  1 to cell #4

--p;
--p;
--p;
--p;

--*p;           // decrement counter (cell #0)

}               // end of while loop

++p;
++*p;
++*p;
putchar(*p);    // print 'H'

++p;
++*p;
putchar(*p);    // print 'e'

++*p;
++*p;
++*p;
++*p;
++*p;

++*p;
++*p;

putchar(*p);    // print 'l'

putchar(*p);    // print 'l'

++*p;
++*p;
++*p;
putchar(*p);    // print 'o'

++p;
++*p;
++*p;
putchar(*p);    // print  ' '

--p;
--p;

++*p;
++*p;
++*p;
++*p;
++*p;

++*p;
++*p;
++*p;
++*p;
++*p;

++*p;
++*p;
++*p;
++*p;
++*p;

putchar(*p);    // print 'W'

++p;
putchar(*p);    // print 'o'

++*p;
++*p;
++*p;
putchar(*p);    // print 'r'

--*p;
--*p;
--*p;
--*p;
--*p;

--*p;
putchar(*p);    // print 'l'

--*p;
--*p;
--*p;
--*p;
--*p;

--*p;
--*p;
--*p;
putchar(*p);    // print 'd'

++p;
++*p;
putchar(*p);    // print '!'

++p;
putchar(*p);    // print '\n'


return 0;       // just to be polite

}

/*

A much nicer layout of the Brainfuck source, also directly copied from Wikipedia.  See the link above.

+++++ +++++             initialize counter (cell #0) to 10
[                       use loop to set the next four cells to 70/100/30/10
    > +++++ ++              add  7 to cell #1
    > +++++ +++++           add 10 to cell #2 
    > +++                   add  3 to cell #3
    > +                     add  1 to cell #4
    <<<< -                  decrement counter (cell #0)
]                   
> ++ .                  print 'H'
> + .                   print 'e'
+++++ ++ .              print 'l'
.                       print 'l'
+++ .                   print 'o'
> ++ .                  print ' '
<< +++++ +++++ +++++ .  print 'W'
> .                     print 'o'
+++ .                   print 'r'
----- - .               print 'l'
----- --- .             print 'd'
> + .                   print '!'
> .                     print '\n'

*/ 

