struct Workshop
{
    int start_time;
    int duration;
    int end_time;

    bool operator<(const Workshop &workshop)
    {
        return this->end_time < workshop.end_time;
    }
};

struct Available_Workshops
{
    int n;
    vector<Workshop> workshops;

    Available_Workshops(int pN) : n(pN)
    {
        this->workshops.resize(pN);
    }
};

Available_Workshops *initialize(int start_time[], int duration[], int n)
{
    Available_Workshops *ret = new Available_Workshops(n);

    for (size_t i = 0; i < n; ++i)
    {
        ret->workshops[i].start_time = start_time[i];
        ret->workshops[i].duration = duration[i];
        ret->workshops[i].end_time = start_time[i] + duration[i];
    }

    return ret;
}

int CalculateMaxWorkshops(Available_Workshops *ptr)
{
    sort(ptr->workshops.begin(), ptr->workshops.end());

    int end_time = 0, count = 0;

    for (size_t i = 0; i < ptr->n; ++i)
    {
        if (ptr->workshops[i].start_time >= end_time)
        {
            end_time = ptr->workshops[i].end_time;
            ++count;
        }
    }

    return count;
}