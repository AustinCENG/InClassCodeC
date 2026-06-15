/* Figure 10.2  Function with a Structured Input Parameter */
/*
 * Displays with labels all components of a planet_t structure
 */
#include <stdio.h>
typedef struct 
{
    char name[10];
    double diameter;
    int moons;
    double orbit_time;
    double rotation_time;
    /* data */
} planet_t;

// This is not the preferred way to pass parameters, becuase it could pass too many data. 
void print_planet(planet_t pl) /* input - one planet structure */
{  
      printf("%s\n", pl.name);
      printf("  Equatorial diameter: %.0f km\n", pl.diameter);
      printf("  Number of moons: %d\n", pl.moons);
      printf("  Time to complete one orbit of the sun: %.2f years\n",
             pl.orbit_time);
      printf("  Time to complete one rotation on axis: %.4f hours\n",
             pl.rotation_time);
}

// This is the preferred way to pass parameters by using a pointer. 
void print_planetwithPtr(planet_t *plPtr) /* input - one planet structure pointer*/
{  
// Indirect acess of the members in structure with structure pointers. 
      printf("%s\n", plPtr->name);
      printf("  Equatorial diameter: %.0f km\n", plPtr->diameter);
      printf("  Number of moons: %d\n", plPtr->moons);
      printf("  Time to complete one orbit of the sun: %.2f years\n",
             plPtr->orbit_time);
      printf("  Time to complete one rotation on axis: %.4f hours\n",
             plPtr->rotation_time);
}

int main(){
    planet_t planet1 = {"Jupiter", 142800, 16, 11.9, 9.925};
    planet_t planet2 = {"Earth", 12756, 16, 1, 24};

    // print out the information only.
    // Direct acess of the members in structure with structure variable. 
    printf("The Earth has %d moons\n", planet2.moons);
     // Indirect acess of the members in structure with structure pointers. 
    print_planetwithPtr(&planet1);
    print_planetwithPtr(&planet2);

}
