
class TestDataEmptyArray
{
public:
    static vector<int> get_array()
    {
        vector<int> arr;

        return arr;
    }
};

class TestDataUniqueValues
{
public:
    static vector<int> get_array()
    {
        vector<int> arr(2);

        arr[0] = 1;
        arr[1] = 2;

        return arr;
    }

    static int get_expected_result()
    {
        vector<int> arr(2);

        arr[0] = 1;
        arr[1] = 2;

        return 0;
    }
};

class TestDataExactlyTwoDifferentMinimums
{
public:
    static vector<int> get_array()
    {
        vector<int> arr(2);

        arr[0] = 1;
        arr[1] = 1;

        return arr;
    }

    static int get_expected_result()
    {
        vector<int> arr(2);

        arr[0] = 1;
        arr[1] = 1;

        return 0;
    }
};