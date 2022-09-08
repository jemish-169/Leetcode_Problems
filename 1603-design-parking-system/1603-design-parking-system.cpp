class ParkingSystem
{
    public:
        int a[3];
    ParkingSystem(int b, int m, int s)
    {
        a[0] = b;
        a[1] = m;
        a[2] = s;
    }

    bool addCar(int c)
    {
        if (a[c - 1] - 1 < 0)
            return false;
        else
        {
            a[c - 1]--;
            return true;
        }
    }
};

/**
 *Your ParkingSystem object will be instantiated and called as such:
 *ParkingSystem* obj = new ParkingSystem(big, medium, small);
 *bool param_1 = obj->addCar(carType);
 */