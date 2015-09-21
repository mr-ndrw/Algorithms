#include <iostream>
#include <cmath>

using namespace std;

enum CircleRelation{
    Inside,
    InternallyTangent,
    ExternallyTangent,
    NotRelated
};

struct Circle{
    int centerX, centerY, radius;

    Circle(int centerX, int centerY, int radius) : centerX(centerX), centerY(centerY), radius(radius) { }

    CircleRelation relationTo(Circle*);
};

int main() {

    int numberOfTestCases;

    cin >> numberOfTestCases;

    int x1 = 103, y1 = 104, r1 = 10,
        x2 = 100, y2 = 100, r2 = 10;

    for (int i = 0; i < numberOfTestCases; ++i) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        Circle circle1(x1, y1, r1);
        Circle circle2(x2, y2, r2);

        CircleRelation relation = circle1.relationTo(&circle2);

        char result;

        switch(relation){
            case CircleRelation::Inside:{
                result = 'I';
                break;
            }
            case CircleRelation::ExternallyTangent:{
                result = 'E';
                break;
            }
            case CircleRelation::InternallyTangent:{
                result = 'E';
                break;
            }
            case CircleRelation::NotRelated:{
                result = 'O';
                break;
            }
            default:{
                result = 'X';
                break;
            }
        }

        cout << result << endl;
    }


    return 0;
}
/**
     * Circle is described by the x and y positions of it's center and it's radius.
     *
     * Circles(c1 and c2) are mutually tangent if one of the following equations is satisfied:
     *
     *  1. (c1.x - c2.x)^2 + (c1.y - c2.y)^2 == (c1.radius - c2.radius)^2
     *  2. (c1.x - c2.x)^2 + (c1.y - c2.y)^2 == (c1.radius + c2.radius)^2
     *
     *  Case 1. is for a situation in which circles are internally tangent,
     *  while case 2. is for external tangent situation.
     */
CircleRelation Circle::relationTo(Circle* circle) {
    int radiusSum = this->radius + circle->radius,
        radiusDifference = this->radius - circle->radius,
        radiusSumSquared = (int) pow(radiusSum, 2),
        radiusDiffSquared = (int) pow(radiusDifference, 2),
        xDifference = this->centerX - circle->centerX,
        yDifference = this->centerY - circle->centerY,
        xDiffSqrd = (int) pow(xDifference, 2),
        yDiffSqrd = (int) pow(yDifference, 2),
        sumOfDiffSqrds = xDiffSqrd + yDiffSqrd;
    bool    isInternallyTangent = sumOfDiffSqrds == radiusDiffSquared,
            isExternallyTangent = sumOfDiffSqrds == radiusSumSquared;
    if(isExternallyTangent){
        return CircleRelation::ExternallyTangent;
    }
    if(isInternallyTangent){
        return CircleRelation::InternallyTangent;
    }

    //check if circles are inside of eachother

    double eulerDistance = sqrt(sumOfDiffSqrds);

    int radiusDifferenceAbsolute = abs(radiusDifference);

    return eulerDistance <= radiusDifferenceAbsolute ? CircleRelation::Inside : CircleRelation::NotRelated ;

}


