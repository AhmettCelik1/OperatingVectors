#include  <iostream>

class point_cloud
{
public:
void matrix();
double result_matrix[1][3]={0,0,0};
int beginner_matrix[1][3];
int ad1_matrix[1][3];
int sub1_matrix[1][3];
int transpose[10][10];	
};
void point_cloud::matrix()
{
int option;
int input1;
int input2;

std::string X="X ";
std::string Y= "Y Z  ";
std::string space=X.append(Y);
std::cout<<space<<std::endl;

for(auto &i: *result_matrix)
    {
    std::cout<<i<<" ";
    }

std::cout<<std::endl;
do
{
std::cout<<"-----------1--> ADD MATRIX-----------"<<std::endl;
std::cout<<"-----------2--> SUBTRACT MATRIX-----------"<<std::endl;
std::cout<<"-----------3--> CROSS WITH A NUMBER-----------"<<std::endl;
std::cout<<"-----------4--> TAKE TRANSPOSE-----------"<<std::endl;
std::cout<<"-----------5--> CROSS BY A MATRIX-----------"<<std::endl;
std::cout<<"-----------6--> DIVIDE BY A NUMBER-----------"<<std::endl;
std::cout<<"-----------7--> EXIT-----------"<<std::endl;
std::cout<<"-----------OPTION----------->";
std::cin>>option;
system("cls");
system("clear");
if(option==1)
{


std::cout<<"ENTER THE MATRIX THAT IS ADDED "<<std::endl;
for(int i =0;i<1;i++)
{
	for(int j=0;j<3;j++)
	{
		std::cout<<i+1<<". ROW "<<j+1<<". COLUMN ";
		std::cin>>input2;
		ad1_matrix[i][j]=input2;
		result_matrix[i][j]+=ad1_matrix[i][j];
	}
}
std::cout<<space<<std::endl;
for(auto  &i: *result_matrix)
{
std::cout<<i<<" ";
}
std::cout<<std::endl;
}
else if (option==2)
{

std::cout<<"ENTER THE MATRIX IS SUBTRACTED "<<std::endl;
for(int i =0;i<1;i++)
{
	for(int j=0;j<3;j++)
	{
	std::cout<<i+1<<". ROW "<<j+1<<". COLUMN ";
	std::cin>>input2;
	sub1_matrix[i][j]=input2;
	result_matrix[i][j]-=sub1_matrix[i][j];
	}
}
std::cout<<space<<std::endl;
for(auto  &i : *result_matrix)
{
std::cout<<i<<" ";
}
std::cout<<std::endl;
}
else if (option==3)
{
int cross;
std::cout<<"ENTER THE NUMBER THAT IS CROSSED: ";
std::cin>>cross;
int cross_number[1][3]={cross,cross,cross};
std::cout<<space<<std::endl;
for(int i=0;i<1;i++)
{
	for(int j=0;j<3;j++)
	{
	result_matrix[i][j]=cross_number[i][j]*result_matrix[i][j];
	}
}
for(auto  &i: *result_matrix)
{
std::cout<<i<<" ";	
}
std::cout<<std::endl;
}
else if (option==4)
{


 for (int i = 0; i < 1; ++i)
 for (int j = 0; j < 3; ++j) {
 transpose[j][i]=result_matrix[i][j];
     }
   std::cout << "\nTRANSPOSE OF THE MATRIX: " <<std:: endl;
   for (int i = 0; i < 3; ++i)
 for (int j = 0; j < 1; ++j) 
 		{
      std::cout << " " << transpose [i][j];
       if (j == 1 - 1)
        std::cout <<std::endl;
      }
	  std::cout<<std::endl;
}
else if (option==5)
{
int cross_matrix[1][3];

std::cout<<"ENTER THE VALUES OF THE MATRIX: "<<std::endl;
for(int i=0;i<1;i++)
{
	for(int j=0;j<3;j++)
	{
		std::cout<<i+1<<". ROW "<<j+1<<". COLUMN ";
		std::cin>>input1;
		cross_matrix[i][j]=input1;
		result_matrix[i][j]=cross_matrix[i][j]*result_matrix[i][j];
	}
}
std::cout<<space<<std::endl;
for(auto &i: *result_matrix)
{
std::cout<<i<<" ";
} 
std::cout<<std::endl;
}
else if (option==6)
{
	double divide_number;
	std::cout<<"ENTER THE THE NUMBER WHICH IS DIVIDED:";
	std::cin>>divide_number;
	double divide_matrix[1][3]={divide_number,divide_number,divide_number};
	std::cout<<space<<std::endl;
	for(int i=0;i<1;i++ )
	{
		for(int j=0;j<3;j++)
		{
		result_matrix[i][j]=result_matrix[i][j]/divide_matrix[i][j];
		}
	}
	for(auto i :*result_matrix)
	{
	std::cout<<i<<" ";
	}



	// for(int i =0;i<1;i++)
	// {
	// 	for(int j=0;j<3;j++)
	// 	{
	// 	std::cout<<result_matrix[i][j]<<" ";
	// 	}
	// }

	std::cout<<std::endl;
}
} while (option!=7);
}


int main()
{

point_cloud  cloud;
cloud.matrix();
}
