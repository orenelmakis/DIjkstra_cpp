#include <limits>
#include <vector>
#include <math.h>

using namespace std;


struct Node
{
    Node* parent;
    int pose[2];

    double cost;

};


Node *NewNode(int pose[2], double cost, Node* parent){


    Node* node = new Node;

    node->parent = parent;

    node->cost = cost;

    return node;

};

struct comp
{
    bool operator()(const Node* node1, const Node* node2) const 
    {
        return node1->cost > node2->cost;
    }

};



class Dijkstra{


    
    public:
        double motion[8][3] {{1,0,1},
                                {0,1,1},
                                {-1,0,1},
                                {0,-1,1},
                                {1,1,sqrt(2)},
                                {1,-1,sqrt(2)},
                                {-1,1,sqrt(2)},
                                {-1,-1,sqrt(2)}};
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
        // void SolveMinPath(double pose[2], )


};