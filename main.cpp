#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    int n, t;
    string s;
    cin >> n >> t >> s;
    for (int i = 1; i < n; ++i)
    {
        if (s[i] == 'G' && s[i-1] == 'B')
        {
            s[i] = 'B';
            s[i-1] = 'G';
            ++i;
        }
    }
    cout << s << endl;
    return 0;
}
/**
int N;
    cin>>N;
    int BN[32];
    int i;
    for(i=0; N>0;i++)
    {
        BN[i]=N%2;
        N=N/2;
    }
     for(int j=i-1; j>=0;j--)
    {
        cout<<BN[j];
    }



    /**GCD**/

   /**

    #include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A;
    cin>>B;
    int max=0;
    int i;
    int X,M;
    /*if(A>B)
    {
        X=A;
        M=B;
    }
    if(B>A)
    {
        X=B;
        M=A;
    }*/
    /*
    for(i=1; i<=M; i++)
    {
        if(A%i==0 && B%i==0)
        {
            if(max<i)
                max=i;
        }
    }*/
    /*int LCM,j,LCM1=0,LCM2=1;
    for(i=1;LCM1 != LCM2; i++)
    {
        LCM1=X*i;
        for( j=1; LCM2!=((X*M)/max); j++)
        {
            if(M*j == X*i)
            {
                LCM2=M*j;
                break;
            }
        }
    }*/
    /*for(i=1; i<12  ; i++)
    {
        for( j=1; j<12  ; j++)
        {
            if(M*j == X*i)
            {
                LCM=M*j;
                break;
            }
        }
        if(M*j == X*i)
        {
            LCM=M*j;
            break;
        }
    }*/
/**
    while(X != M)
    {
        if(X > M)
            X =X- M;
        else
            M =M- X;
    }

    int LCM = (A * B) / X;
    cout<<LCM<<endl;
    //cout<<max<<" "<<LCM<<endl;
    return 0;
}


    /*** MATRIX  ****/
    /**
    #include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }

    return 0;
}




                                /**I. Multiplication of Matrices**/
                                /**
            int r1,c1,r2,c2,a[10][10],b[10][10],multi[10][10],i, j, k;
    cin>>r1;
    cin>>c1;
    //Storing First Metrix
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>r2;
    cin>>c2;
    //Storing Second Metrix
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin>>b[i][j];
        }
    }
    //Initialize Metrix of Multi
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            multi[i][j]=0;
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                multi[i][j]=multi[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout<<multi[i][j]<<" ";
        }
        cout<<endl;
    }


/***Sum Matrix ***/
/**
     int r,c,a[10][10],b[10][10],sum[10][10],i, j;
    cin>>r;
    cin>>c;
    //Storing First Metrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
    }

    //Storing Second Metrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin>>b[i][j];
        }
    }

    //initialize
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            sum[i][j]=0;
        }
    // Summing
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    //Printing
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout<<sum[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
    */
