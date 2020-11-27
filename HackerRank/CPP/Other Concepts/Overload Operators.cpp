
class Matrix
{
    public:
        vector<vector<int>> a;

        Matrix &operator+(const Matrix &y)
        {
            for (size_t i = 0; i < y.a.size(); i++)
            {
                for (size_t j = 0; j < y.a[i].size(); j++)
                {
                    this->a[i][j] += y.a[i][j];
                }
            }

            return *this;
        }
};