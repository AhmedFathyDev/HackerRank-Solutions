
class HotelRoom
{
public:
    HotelRoom(int pBedrooms, int pBathrooms)
        : bedrooms(pBedrooms), bathrooms(pBathrooms) {}

    virtual int get_price(void)
    {
        return 50 * bedrooms + 100 * bathrooms;
    }

private:
    int bedrooms;
    int bathrooms;
};

class HotelApartment : public HotelRoom
{
public:
    HotelApartment(int pBedrooms, int pBathrooms)
        : HotelRoom(pBedrooms, pBathrooms) {}

    int get_price(void)
    {
        return HotelRoom::get_price() + 100;
    }
};