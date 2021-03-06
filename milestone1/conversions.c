extern void print_int(int x);
extern void print_string(char c[]);

int intVar;
int intArr[4];

char charVar;
char charArr[3];

int x;
char c;

void main(void){
    /* no local variables */

    /* zero or more assignments and procedure calls only
     *
     * assignments have the form:
     *      scalarVar = scalarVar;
     *      scalarVar = 'c';
     *      scalarVar = 1;
     *
     * procedure calls have at most 1 argument with any type that is allowed
     * in the global variables section
     */

    x = 0;
    print_string("should get 0\ngot: ");
    print_int(x);
    print_string("\n\n");

    x = 1;
    print_string("should get 1\ngot: ");
    print_int(x);
    print_string("\n\n");

    /* test handling of literals */
    print_string("should get 2\ngot: ");
    print_int(2);
    print_string("\n\n");

    c = 'A';
    /* char to int conversion in assignment */
    x = c;
    print_string("should get 65\ngot: ");
    print_int(x);
    print_string("\n\n");

    /* char to int conversion in procedurecall */
    print_string("should get 65\ngot: ");
    print_int(c);
    print_string("\n\n");

    /* int to char conversion */
    x = 100;
    c = x;  /* c == 'd' */

    print_string("should get 100\ngot: ");
    print_int(c);
    print_string("\n\n");

    /*overflow in int -> char conversion */
    x = 999999999;
    print_string("should get 999999999\ngot: ");
    print_int(x);
    print_string("\n\n");

    c = x;
    print_string("should NOT get 999999999 due to overflow\ngot: ");
    print_int(c);
    print_string("\n\n");

    c = 999998990;
    print_string("should NOT get 999998990 due to overflow\ngot: ");
    print_int(c);
    print_string("\n\n");

    /* signedness of chars */
    x = 128; /* = 0...0 1000 0000 should be negative when converted to char */
    c = x;
    print_string("should get -128 due to chars being signed\ngot: ");
    print_int(c);
    print_string("\n\n");

    /* sign extension of char -> int */
    x = c;
    print_string("should get -128 due to chars being signed\ngot: ");
    print_int(x);
    print_string("\n\n");
}
