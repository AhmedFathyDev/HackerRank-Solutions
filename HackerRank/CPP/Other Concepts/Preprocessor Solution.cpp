
#define toStr(X) #X
#define io(X) cin >> X
#define FUNCTION(name, operator) \
    inline void name(int &mn, int vx)\
    {\
        !(mn operator vx) ? mn = vx : false;\
    }
#define INF 10000000
#define foreach(v, i) for (int i = 0; i < v.size(); ++i)