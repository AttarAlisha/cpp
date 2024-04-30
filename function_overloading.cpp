#include<iostream>
using namespace std;

class Line{
int line=45;
};
class circle{
public:
//float pi=3.14;
int x1,x2,y1,y2,radius;
int slope,intercept;


bool isTangent(int x1,int x2,int y1,int y2)
{
return true;
}

bool isTangent(int slope,int intercept)
{
return false;
}

bool isTangent(Line &ln)
{
return true;
}
};

int main()
{
circle ci;
Line ln;
bool tangent = ci.isTangent(Line &ln);

if(tangent)
{
cout<<"Line is tangent!"<<endl;
}
else
{
cout<<"Line is not tangent!"<<endl;
}
}
