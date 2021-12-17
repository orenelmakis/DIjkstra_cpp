#include <limits>
#include <vector>

using namespace std;

class Dijkstra{
    

    
    public:
        double MinX;
        double MinY;
        double MaxX;
        double MaxY;
        double XWidth;
        double YWidth;
        double Resolution;
        double RobotSize;
        vector<vector<bool>> ObsList;
        vector<vector<bool>> ObsMap;


        Dijkstra(double,double,double,double,double,double,double,double);
        double Index2Pos(int,double);
        // void ObsMapCreation()

};