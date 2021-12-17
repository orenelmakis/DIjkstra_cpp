#include <iostream>
#include <limits>
#include <vector>
#include "Dijkstra.h"
// #include "../matplotlib-cpp/matplotlibcpp.h"



using namespace std;
// namespace plt = matplotlibcpp;

Dijkstra::Dijkstra(double min_x, double min_y, double max_x,double max_y
                        ,double x_width, double y_width, double resolution, double robot_size){

    this->MinX = min_x;
    this->MinY = min_y;
    this->MaxX = max_x;
    this->MaxY = max_y;
    this-> XWidth = x_width;
    this-> YWidth = y_width;
    this-> Resolution = resolution;
    this-> RobotSize = robot_size;
    this->ObsList = ObsList;

};

double Dijkstra::Index2Pos(int index, double min_pos){
    double pos ;
    pos = index*this->Resolution + min_pos;
    return pos;

};





int main(){
    Dijkstra *dij = new Dijkstra(0,0,12,5,5,5,2,1);
    // cout << dij->MaxY << endl;
    vector<vector<bool>> ObsList;
    ObsList.resize(5);
    for(auto i = 0; i < 5; ++i){
        ObsList[i].resize(2);
        ObsList[i][0] = true;
        ObsList[i][1] = false;
        // cout << i << endl;

    }
    cout << ObsList[1][1] << endl;
    // cout << ObsList[1][0] << endl;
    // cout << ObsList[4][2] << endl;

    return 0;
};