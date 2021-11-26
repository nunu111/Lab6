#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double degre_to_radian){
    degre_to_radian = degre_to_radian*(M_PI/180);
    return degre_to_radian;
}

double rad2deg(double radian_to_degree){
    radian_to_degree = radian_to_degree/(M_PI/180);
    return radian_to_degree;
}

double findXComponent(double rangeX1,double rangeX2,double radianX1,double radianX2){
    double rangeXC1,rangeXC2,rangeXC;
    rangeXC1= rangeX1*cos(radianX1);
    rangeXC2 = rangeX2*cos(radianX2);
    rangeXC = rangeXC1+rangeXC2;
    return rangeXC;
}

double findYComponent(double rangeY1,double rangeY2,double radianY1,double radianY2){
    double rangeYC1,rangeYC2,rangeYC;
    rangeYC1 = rangeY1*sin(radianY1);
    rangeYC2 = rangeY2*sin(radianY2);
    rangeYC = rangeYC1+rangeYC2;
    return rangeYC;
}

double pythagoras(double XCO,double YCO){
    double A;
    A = pow((pow(XCO,2)+pow(YCO,2)),0.5);
    return A;
}

void showResult(double RVL,double RVD){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = "<<RVL<<endl;
    cout << "Direction of the resultant vector (deg) = "<<RVD<<endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
