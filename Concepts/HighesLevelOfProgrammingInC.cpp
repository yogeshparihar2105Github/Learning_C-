struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
int area(Rectangle r)
{
    return r.length * r.breadth;
}
void changeLength(struct Rectangle *r,int l)
{
    r->length = l;
}

//Your main function should only call the function and define data variables
int main()
{
    struct Rectangle r;

    initialize(&r,10,5);
    int ara = area(r);
    changeLength(&r, 20);

    return 0;
}