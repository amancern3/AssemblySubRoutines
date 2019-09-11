/* A new cell is born on an empty square
if it is surrounded by exactly three occupied neighbor cells.
A cell dies of overcrowding if it is surrounded by four or more living neighbors,
and it dies of loneliness if it is surrounded by zero or one living neighbor.
A neighbor is an occupant of an adjacent square to the left,
right, top, or bottom or in a diagonal direction. Figure 16 below shows a cell and its neighbor cells.
*/
#include <iostream>

using namespace std;

int
main ()
{
  cout << "Hello World";
  int row = 3;
  int col = 3;
  int temp;
  int count = 0;
  int a[row][col] = { 0 };

  for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
	{
	  printf ("Enter live/dead cell\n");
	  scanf ("%i", &temp);
	  a[i][j] = temp;
    }}

  for (int i = 0; i < row; i++)
    {
	    printf("hmm"); 
      for (int j = 0; j < col; j++)
	{
	  printf ("%i", a[i][j]);
    }}

  for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
	{
	  if (row > 0)
	    {
	      if (col > 0)
		{
		  for (int x = i - 1; x < i + 1; i++)
		    {
		      for (int y = j - 1; y < j + 1; y++)
			{
			  if (a[x][y] == 1);
			  count++;
			}
		    }

		  if (count == 3)
		    {
		      a[i][j] = 1;
		    }
		  else if (count >= 4)
		    {
		      a[i][j] = 0;
		    }
		  else if (count == 0 or 1)
		    a[i][j] = 0;

		  return 0;
		}
	    }
	}
    }
}
