// Author: Atahan Koc

#include<bits/stdc++.h> 	

	using namespace std;
	
 /* Returns the index of the day of the date DD / MM / YYYY with this function. */
  int dayNumber(int day, int month, int year) { 

        int arr[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; 
        year -= month < 3; 
        return ( year + year/4 - year/100 + year/400 + arr[month-1] + day) % 7; 
   } 
   
   /* After the day array, i have defined a function that returns the month name with a specific month number.  */
   string getMonthName(int monthNumber) { 
        string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September","October", "November", "December"}; 
        return (months[monthNumber]); 
   } 

   /* A function that returns the number of days in the month */
   
   int numberOfDays (int monthNumber, int year) { 
        /*  For january */
        if (monthNumber == 0)  
            return (31); 

        /* For february  */
        if (monthNumber == 1) 
        { 
                 int x = year % 400;
                 int y = year % 4;
                 int z = year % 100;
                /* Leap year check  */
                if (x == 0 || (y && z != 0)) 
                        return (29); 
                else
                        return (28); 
        } 
           /*  For march */
	 if (monthNumber == 2 )
	     return(31);
		   
	    /* For april  */
	    if (monthNumber == 3)
             return(30);
         
            /*  For may  */
        if (monthNumber == 4)  
            return (31); 

           /* For june  */
        if (monthNumber == 5)  
            return (30); 

            /* For july  */
        if (monthNumber == 6)  
            return (31); 

           /* For august  */
        if (monthNumber == 7) 
            return (31); 

            /* For september  */
        if (monthNumber == 8) 
            return (30); 

            /* For october  */
        if (monthNumber == 9) 
            return (31); 

            /* For november  */
        if (monthNumber == 10) 
            return (30); 

            /* For december  */
        if (monthNumber == 11) 
            return (31); 
} 

    void printCalendar(int year) { 
        printf (" Calendar - %d\n\n", year); 
        int days; 
        int current = dayNumber (1, 1, year); 

    /*  i -> iterates for all months. ||  j -> iterate all days of the moon.  */
 
        for (int i = 0; i < 12; i++) { 
        days = numberOfDays (i, year); 

                           /* Month Name */
        printf("\n ------------- %s ----------------\n", 
            getMonthName (i).c_str()); 
                /* Days  */
            printf("   Sun  Mon  Tue  Wed  Thu  Fri  Sat \n"); 
                int x; 
                for (x = 0; x < current; x++)  
                    printf("     "); 

                for (int j = 1; j <= days; j++) { 
                    printf("%5d", j); 

                    if (++x > 6) { 
                        x = 0; 
                        printf("\n"); 
                        } } 
                if (x) 
                        printf("\n"); 
                current = x; 
        } 
    return; 
} 
        int main() { 
        int year = 2020; 
        printCalendar(year); 
        return (0); 
} 
