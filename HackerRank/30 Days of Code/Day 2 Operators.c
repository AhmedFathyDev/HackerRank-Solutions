
void solve(double meal_cost, int tip_percent, int tax_percent)
{
    printf("%.0lf", meal_cost + meal_cost * tax_percent / 100 + meal_cost * tip_percent / 100);
}