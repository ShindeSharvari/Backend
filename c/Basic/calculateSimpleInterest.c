void main()
{
    float p, t, r, si;

    printf("Enter Principal : ");
    scanf("%f", &p);

    printf("Enter Time in years : ");
    scanf("%f", &t);

    printf("Enter Rate of Interest : ");
    scanf("%f", &r);

    si = (p * t * r) / 100;

    printf("\nSimple Interest = %f", si);

}
