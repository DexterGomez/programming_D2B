/* Using the files from the platform calculate the operations mentioned.
 * Author: Dexter Gomez*/

#include <stdio.h>
#include <math.h>

/* Create the output file */
void create_output_file (void);

/* Calculates the mean of a list of numbers.
 * Parameters: (lenght of the list (int), list of numbers (float))
 * Return: float. */
float mean(int, const float[]);

/* Calculates the sample variance.
 * Parameters: (lenght of the list (int), list of numbers (float))
 * Return: float. */
float sample_variance (int, const float[]);

/* Calculates the correlation between x and y using pearson's product.
 * Parameters: (lenght of the list (int), list of x(float), list of y(float))
 * Return: double. */
double correlation (int, const float[], const float[]);

/* Calculates the slope of the linear regresion of x and y.
 * Parameters: (lenght of the list (int), list of x(float), list of y(float))
 * Return: double. */
double slope (int, const float[], const float[]);

/* Calculates the y axis intercept of the linear regresion of x and y.
 * Parameters: (lenght of the list (int), list of x(float), list of y(float))
 * Return: float. */
float y_intercept (int, const float[], const float[]);

int main (void)
{

    create_output_file ();

    char name[6] = "Q*.dat"; //define the structure of names of files
    for (int i = 49 ; i <= 52; i++) // use the ascii to made a loop from 1 to 4 in char
    {
        name[1] = i; //replace the * in the name
        
        FILE *filepointer;
        filepointer = fopen (name, "r"); //open the "name" file

        if (filepointer == NULL)
        {
            printf("File could not be opened.\n");
        }
        else
        {
            int num;
            fscanf (filepointer,"%d",&num); //first line of file indicate the number of elements

            float tempx, tempy, x[num], y[num]; //create x,y vectors of "num" size
            
            int iterator = 0;
            while (!feof (filepointer))
            {
                fscanf (filepointer, "%f %f", &tempx, &tempy); //get a pair of numbers from the file

                // to save the numbers in the vectors
                x[iterator] = tempx;
                y[iterator] = tempy;

                iterator++;
            }
            fclose(filepointer);

            // Add the data processed to the output file.
            filepointer = fopen ("output.dat", "a");
            fprintf (filepointer, "%4c %10.2f %10.2f %8.2f %10.2f %10.2f %10.2f %10.2f\n", i, mean(num,x),sample_variance(num,x),mean(num,y),sample_variance(num,y),correlation(num,x,y), slope(num,x,y), y_intercept(num, x, y));
            fclose(filepointer);
        }
    }
    return 0;
}

void create_output_file (void)
{
    FILE *filepointer;
    filepointer = fopen ("output.dat", "w");
    fprintf (filepointer, "%s  %s  %s  %s  %s  %s  %s  %s\n","Data_Set","Mean_X", "Variance_X", "Mean_Y", "Variance_Y", "Correlation", "Slope(m)", "Y-intercept(b)");
    fclose (filepointer);
}

float mean (int num, const float list[])
{
    float sum_list = 0;

    for (int i = 0; i < num; i++)
    {
        sum_list = sum_list + list[i];
    }

    return sum_list/(float)num;
}

float sample_variance (int num, const float list[])
{
    float m = mean (num, list);
    float sum = 0;

    for (int i = 0; i < num; i++)
    {
        sum = sum + (list[i] - m)*(list[i] - m);
    }

    float variance = sum / (num - 1);

    return variance;
}

double correlation (int num, const float listX[], const float listY[])
{
    double r = 0;
    double sum_x = 0;
    double sum_y = 0;
    double sum_xy = 0;
    double sum_x2 = 0;
    double sum_y2 = 0;

    for (int i = 0; i < num; i++)
    {
        sum_x += listX[i];
        sum_y += listY[i];
        sum_xy += listX[i] * listY[i];
        sum_x2 += listX[i] * listX[i];
        sum_y2 += listY[i] * listY[i];
    }
    
    r = (sum_xy - ( (sum_x*sum_y)/num ))/(sqrt(sum_x2-((sum_x*sum_x)/num)) * sqrt(sum_y2-((sum_y*sum_y)/num)));

    return r;
}

double slope (int num, const float listX[], const float listY[])
{
    float meanX = mean(num, listX);
    float meanY = mean(num, listY);

    double numerator = 0;
    double denominator = 0;

    for (int i = 0; i < num; i++)
    {
        numerator += (listX[i] - meanX) * (listY[i] - meanY);
        denominator += (listX[i] - meanX) * (listX[i] - meanX);
    }
    
    double m = numerator/denominator;

    return m;
}

float y_intercept (int num, const float listX[], const float listY[])
{
    double m = slope (num, listX, listY);
    float meanX = mean (num, listX);
    float meanY = mean (num, listY);

    float y = meanY - (m * meanX);
    return y;
}