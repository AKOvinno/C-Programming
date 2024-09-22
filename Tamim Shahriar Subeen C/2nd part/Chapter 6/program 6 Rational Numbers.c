#include<stdio.h>
typedef struct
{
    int p; /// numerator
    int q; /// denominator
} Rational;

Rational add(Rational one, Rational two)
{
    Rational ans;
    ans.q = one.q * two.q;
    ans.p = ((ans.q/one.q)*one.p) + ((ans.q/two.q)*two.p);
    return ans;
}
Rational sub(Rational one, Rational two)
{
    Rational ans;
    ans.q = one.q * two.q;
    ans.p = ((ans.q/one.q)*one.p) - ((ans.q/two.q)*two.p);
    return ans;
}
Rational mul(Rational one, Rational two)
{
    Rational ans;
    ans.p = one.p * two.p;
    ans.q = one.q * two.q;
    return ans;
}
Rational div(Rational one, Rational two)
{
    Rational ans;
    ans.p = one.p * two.q;
    ans.q = one.q * two.p;
    return ans;
}
int equal(Rational *one, Rational *two)
{
    if(one->p == two->p && one->q == two->q) {
        return 1;
    }
    return 0;
}
void print(Rational one)
{
    printf("%d/%d\n", one.p, one.q);
}
int main()
{
    Rational one, two, ans;
    printf("Enter two numbers for 1st Rational numerator & denominator: ");
    scanf("%d %d", &one.p, &one.q);
    printf("Enter two numbers for 2nd Rational numerator & denominator: ");
    scanf("%d %d", &two.p, &two.q);

    printf("1st Rational Number is: ");
    print(one);
    printf("2nd Rational Number is: ");
    print(two);

    if(equal(&one, &two)) {
        printf("Rational Numbers are equal\n");
    }
    else {
        printf("Rational Numbers are not equal\n");
    }

    printf("Addition:\t");
    print(add(one, two));

    printf("Subtraction: \t");
    print(sub(one, two));

    printf("Multiplication:\t");
    print(mul(one, two));

    printf("Division:\t");
    print(div(one, two));

    return 0;
}
