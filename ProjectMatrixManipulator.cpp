#include<iostream>
#include<fstream>
using namespace std;

void welcome();
void exitArt();
void inputfuser(int **list, int row, int col);
void sumofm(int **list, int row, int col);
void prod(int **list, int row, int col);
void rowav(int **list, int row, int col);
void columnav(int **list, int row, int col);
void averfind(int **list, int row, int col);
void rowsorting(int **list, int row, int col);
void columnsorting(int **list, int row, int col);
void add(int **list, int row, int col);
void matrixadditionof2(int **fullarr, int **list, int **elements, int row, int col);
void matrixsubof2(int **fullarr, int **list, int **elements, int row, int col);
void matricmulti(int **fullarr, int **list, int **elements, int row, int col);
void transpose(int **list, int row, int col);
void inverseofmatrix(int **mat, int row, int col);
void display(int **list, int row, int col);
void product(int **list, int row, int col);
void add(int **list, int row, int col);
void division(int **list, int row, int col);
void sub(int **list, int row, int col);

int main()
{
	welcome();
	cout << "\n====== > Matrix Project <======\n\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "|Press 1 for Start Matrix        |\n";
	cout << "|Press 2 for Close Matrix Project|\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSelect Option :";
	int start = 0;
	cin >> start;
	cout << endl << endl;
	if (start == 1)
	{
		//		system("CLS");
		int choice = 0, col = 0;
		int row = 0;
		cout << "|Enter the row you wanted to enter :"; cin >> row;
		
		cout << "|Enter the Column you wanted to enter :  "; cin >> col;
		cout << endl << endl;
		int **list = new int*[row];
		int **newlist = new int*[row];
		int **fullarr = new int*[row];

		for (int i = 0; i < row; i++)
		{
			list[i] = new int[col];
		}
		for (int i = 0; i < row; i++)
		{
			newlist[i] = new int[col];
		}
		for (int i = 0; i < row; i++)
		{
			fullarr[i] = new int[col];
		}
		inputfuser(list, row, col);
		while (true)
		{
			cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout << "|Enter 01 for Displaying the Matrix                   |  " << endl;
			cout << "|Enter 02 to sum array                                | " << endl;
			cout << "|Enter 03 to Product all the elements                 | " << endl;
			cout << "|Enter 04 to Print Row wise Average                   | " << endl;
			cout << "|Enter 05 to Print Col wise Average                   | " << endl;
			cout << "|Enter 06 to Print Average of Whole Matrix            | " << endl;
			cout << "|Enter 07 to Print Row wise sorting of a Matrix       | " << endl;
			cout << "|Enter 08 to Print Column wise sorting of a Matrix    | " << endl;
			cout << "|Enter 09 to Print Scalar Addition of a Matrix        | " << endl;
			cout << "|Enter 10 to Print Scalar subtraction of a Matrix     | " << endl;
			cout << "|Enter 11 to Print Scalar multiplication of a Matrix  | " << endl;
			cout << "|Enter 12 to Print Scalar division of a Matrix        | " << endl;
			cout << "|Enter 13 to Print Addition of two Matrixes           |  " << endl;
			cout << "|Enter 14 to Print Subtraction of two Matrixes        |  " << endl;
			cout << "|Enter 15 to Print Multiplication of two Matrixes     |  " << endl;
			cout << "|Enter 16 to Print Transpose of a Matrix              |  " << endl;
			cout << "|Enter 17 to Terminate the Program                    |  " << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n|Select option :";


			cin >> choice;

			if (choice == 1)
			{

				display(list, row, col);


			}
			else if (choice == 2)
			{
				sumofm(list, row, col);

			}
			else if (choice == 3)
			{
				prod(list, row, col);

			}
			else if (choice == 4)
			{
				rowav(list, row, col);

			}
			else if (choice == 5)
			{
				columnav(list, row, col);
			}
			else if (choice == 6)
			{
				averfind(list, row, col);

			}
			else if (choice == 7)
			{
				rowsorting(list, row, col);
				display(list, row, col);

			}
			else if (choice == 8)
			{
				columnsorting(list, row, col);
				display(list, row, col);

			}
			else if (choice == 9)
			{
				add(list, row, col);
				display(list, row, col);


			}
			else if (choice == 10)
			{
				sub(list, row, col);
				display(list, row, col);



			}
			else if (choice == 11)
			{
				product(list, row, col);
				display(list, row, col);



			}
			else if (choice == 12)
			{
				division(list, row, col);
				display(list, row, col);



			}
			else if (choice == 13)
			{
				inputfuser(newlist, row, col);
				matrixadditionof2(fullarr, list, newlist, row, col);
				display(fullarr, row, col);



			}
			else if (choice == 14)
			{
				inputfuser(newlist, row, col);
				matrixsubof2(fullarr, list, newlist, row, col);
				display(fullarr, row, col);



			}
			else if (choice == 15)
			{
				inputfuser(newlist, row, col);
				matricmulti(fullarr, list, newlist, row, col);
				display(fullarr, row, col);


			}
			else if (choice == 16)
			{
				transpose(list, row, col);

			}
			else if (choice == 17)
			{
				exitArt();
			}
			else
			{
				cout << "invalid case !!!!!!!!! " << endl;
			}

		}
		for (int r = 0; r < row; r++)
		{
			delete[] list[r];
			list[r] = nullptr;
		}
		delete[] list;
		list = nullptr;
		for (int r = 0; r < row; r++)
		{
			delete[] newlist[r];
			newlist[r] = nullptr;
		}
		delete[] newlist;
		newlist = nullptr;
		for (int r = 0; r < row; r++)
		{
			delete[] fullarr[r];
			fullarr[r] = nullptr;
		}
		delete[] fullarr;
		fullarr = nullptr;


	}
	exitArt();

	return 0;
}
void inputfuser(int **list, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "|Enter the A " << i + 1 << j + 1 << " value in Matrix : ";
			cin >> list[i][j];
		}
	}

}
void sumofm(int **list, int row, int col)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum = sum + *(*(list + i) + j);
		}
	}
	cout << "|The fullarr of all Elements is : " << sum << endl;
}
void prod(int **list, int row, int col)
{
	int prod = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			prod = prod * *(*(list + i) + j);
		}
	}
	cout << "|The Product of al the ments is  :" << prod << endl;
}
void rowav(int **list, int row, int col)
{
	float  rowsum = 0.0;
	float rowav = 0.0;
	for (int i = 0; i < row; i++)
	{
		rowsum = 0;
		rowav = 0.0;

		for (int j = 0; j < col; j++)
		{
			rowsum = rowsum + *(*(list + i) + j);
		}
		rowav = rowsum / col;
		cout << "|The Average of Row " << i + 1 << " is  " << rowav << endl;

	}
}
void columnav(int **list, int row, int col)
{
	float  colsumofm = 0.0;
	float avg = 0.0;
	for (int i = 0; i < row; i++)
	{
		colsumofm = 0;
		avg = 0.0;

		for (int j = 0; j < col; j++)
		{
			colsumofm = colsumofm + *(*(list + i) + j);
		}
		avg = colsumofm / row;
		cout << "|The Average of Column " << i + 1 << " is  " << avg << endl;

	}
}
void averfind(int **list, int row, int col)
{
	float  totalfullarr = 0.0;
	float avg = 0.0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			totalfullarr = totalfullarr + *(*(list + i) + j);
		}
	}
	avg = totalfullarr / (row*col);
	cout << "|The Average of Matrix is  :" << avg << endl;
}
void rowsorting(int **list, int row, int col)
{
	int temporaryvariable = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = j + 1; k<col; k++)
			{
				if (list[i][j]>list[i][k])
				{
					temporaryvariable = list[i][j];
					list[i][j] = list[i][k];
					list[i][k] = temporaryvariable;
				}
			}
		}
	}
}
void display(int **list, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << *(*(list + i) + j) << "  ";
		}
		cout << endl;
	}
	cout << endl;
}
void columnsorting(int **list, int row, int col)
{
	int temporaryvariable = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = j + 1; k<col; k++)
			{
				if (list[j][i]>list[k][i])
				{
					temporaryvariable = list[j][i];
					list[i][j] = list[k][i];
					list[k][i] = temporaryvariable;
				}
			}
		}
	}
}

void matrixadditionof2(int **fullarr, int **list, int **elements, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(*(fullarr + i) + j) = *(*(list + i) + j) + *(*(list + i) + j);
		}
	}
}
void matrixsubof2(int **fullarr, int **list, int **elements, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(*(fullarr + i) + j) = ((list + i) + j) - ((list + i) + j);
		}
	}
}
void product(int **list, int row, int col)
{
	int prod = 1;
	cout << "|Enter the list you wanted to Multiply with : ";
	cin >> prod;
	for (int i = 0; i <row; i++)
	{
		for (int j = 0; j <col; j++)
		{
			*(*(list + i) + j) = prod *  *(*(list + i) + j);
		}
	}

}
void add(int **list, int row, int col)
{
	cout << "|Enter the list you wanted to Add with : ";
	int add = 0;
	cin >> add;
	for (int i = 0; i <row; i++)
	{
		for (int j = 0; j <col; j++)
		{
			*(*(list + i) + j) = add + *(*(list + i) + j);
		}
	}

}
void division(int **list, int row, int col)
{
	int div = 0;
	cout << "|Enter the list you wanted to Divide with :  ";
	cin >> div;
	for (int i = 0; i <row; i++)
	{
		for (int j = 0; j <col; j++)
		{
			*(*(list + i) + j) = *(*(list + i) + j) / div;
		}
	}

}
void sub(int **list, int row, int col)
{
	cout << "|Enter the list to subtract with :";
	int sub = 0;
	cin >> sub;
	for (int i = 0; i <row; i++)
	{
		for (int j = 0; j <col; j++)
		{
			*(*(list + i) + j) = *(*(list + i) + j) - sub;
		}
	}

}
void matricmulti(int **fullarr, int **list, int **elements, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(*(fullarr + i) + j) = *(*(list + i) + j) * *(*(list + i) + j);
		}
	}
}
void transpose(int **list, int row, int col)
{
	cout << "|The Transpose of a Matrix is  :" << endl;
	for (int i = 0; i <col; i++)
	{
		for (int j = 0; j <row; j++)
		{
			cout << list[j][i] << " ";
		}
		cout << endl;
	}
}
void welcome()
{
	ifstream ifs("welcome.txt");
	char ch = '\0';
	if (ifs)
	{

		while (ifs.get(ch))
		{
			cout << ch;
		}


	}
	cout << "\n";
	ifs.close();

}
void exitArt()
{
	ifstream ifs("exit art.txt");
	char ch = '\0';
	if (ifs)
	{

		while (ifs.get(ch))
		{
			cout << ch;
		}


	}
	cout << "\n";
	ifs.close();

	exit(0);
}