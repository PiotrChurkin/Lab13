#include <iostream>



struct SimpleTetrahedron

{

    double height = 0;

    double lengthOfSide = 0;





    void Volume()

    {

        if((lengthOfSide < 0 || height < 0) || (lengthOfSide == 0 && height == 0))

        {

            std::cout << "Incorrect values!" << std::endl;

            return;

        }


        if((lengthOfSide > 0 && height > 0) && ( abs(lengthOfSide - (height*3) / sqrt(6) > 0.00001) ))

        {

            std::cout << "This tetrahedron is not simple!" << std::endl;

            return;

        }



        if(lengthOfSide>0)

            std::cout << pow(lengthOfSide, 3)*sqrt(2)/12 << std::endl;

        else if(height>0)

        {

            lengthOfSide = height*3/sqrt(6);

            std::cout << pow(lengthOfSide, 3)*sqrt(2)/12 << std::endl;

        }

        else

            return;

    }



    void Area()

    {

        if((lengthOfSide < 0 || height < 0) || (lengthOfSide == 0 && height == 0))

        {

            std::cout << "Incorrect values!" << std::endl;

            return;

        }



        if((lengthOfSide > 0 && height > 0) && ( abs(lengthOfSide - (height*3) / sqrt(6) > 0.00001) ))

        {

            std::cout << "This tetrahedron is not simple!" << std::endl;

            return;

        }



        if(lengthOfSide > 0)

            std::cout << sqrt(3)*pow(lengthOfSide, 2) << std::endl;

        else if(height > 0)

        {

            lengthOfSide = height*3/sqrt(6);

            std::cout << sqrt(3)*pow(lengthOfSide, 2) << std::endl;

        }

        else

            return;

    }

};



int main()

{

    SimpleTetrahedron A;  

    A.height = 3;

    A.Volume();



    SimpleTetrahedron B;

    B.lengthOfSide = 5;

    B.Area();



    SimpleTetrahedron C;        

    C.lengthOfSide = 7;

    C.height = 1;

    C.Volume();





    SimpleTetrahedron D;         

    D.lengthOfSide = 2.4494;

    D.height = 2;

    D.Volume();


    


    return 0;

}