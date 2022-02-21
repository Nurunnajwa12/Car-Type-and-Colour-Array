#include <iostream>

using namespace std;

int main()
{
    const int CAR_TYPES=2;
    const int COLOR_TYPES=3;
    int sum;
    double sales[CAR_TYPES][COLOR_TYPES]={{1,2,3},
                                          {4,5,6}};

    for(int i=0;i<CAR_TYPES;i++)
    {
        sum=0;
        for (int j=0;j<COLOR_TYPES;j++)
            sum+=sales[i][j];
            cout<<"The sum of sales by CAR_TYPES "<<i+1 <<" is "<<sum<<endl;
    }

    for(int j=0;j<COLOR_TYPES;j++)
    {
        sum=0;
        for(int i=0;i<CAR_TYPES;i++)
            sum+=sales[i][j];
        cout<<"The sum of sales by COLOR_TYPE "<<j+1<<" is "<<sum<<endl;
    }
    return 0;
}
