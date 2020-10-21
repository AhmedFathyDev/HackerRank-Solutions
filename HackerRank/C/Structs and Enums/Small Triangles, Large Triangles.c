
void sort_by_area(triangle *tr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double tr1, tr2, p;

            p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
            tr1 = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
            p = (tr[j].a + tr[j].b + tr[j].c) / 2.0;
            tr2 = sqrt(p * (p - tr[j].a) * (p - tr[j].b) * (p - tr[j].c));

            if (tr1 > tr2)
            {
                tr[i].a ^= tr[j].a;
                tr[j].a ^= tr[i].a;
                tr[i].a ^= tr[j].a;
                tr[i].b ^= tr[j].b;
                tr[j].b ^= tr[i].b;
                tr[i].b ^= tr[j].b;
                tr[i].c ^= tr[j].c;
                tr[j].c ^= tr[i].c;
                tr[i].c ^= tr[j].c;
            }
        }
    }
}