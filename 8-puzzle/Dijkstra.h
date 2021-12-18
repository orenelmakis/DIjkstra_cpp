#include <limits>
#include <vector>

using namespace std;


struct Node
{
    Node* parent;

};


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
        vector<vector<bool>> ObsMap;


        Dijkstra(double,double,double,double,double,double,double,double);
        double Index2Pos(int,double);
        void ObsMapCreation(vector<vector<double>>);

};