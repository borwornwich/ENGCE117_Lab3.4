#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
};

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    
    GetStudent( children, &group ) ;
    for ( int i = 0 ; i < group ; i++ ) {
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "Class %d, Student %d\n", i + 1, j + 1 ) ;
            printf( "Name: %s\n", children[ i ][ j ].name ) ;
            printf( "Age: %d\n", children[ i ][ j ].age ) ;
            printf( "Sex: %c\n", children[ i ][ j ].sex ) ;
            printf( "GPA: %.2f\n", children[ i ][ j ].gpa ) ;
            printf("-------------------------------------\n") ;
        }
    }
    return 0 ;
}

void GetStudent( struct student child[][ 10 ], int *room ) {
    printf( "Enter the number of ClassRooms : " ) ;
    scanf( "%d", room ) ;

    for ( int i = 0 ; i < *room ; i++ ) {
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "Enter data for Group %d, Student %d:\n", i + 1, j + 1) ;
            printf( "Name: " ) ;
            scanf( "%s", child[ i ][ j ].name ) ;
            printf( "Age: " ) ;
            scanf( "%d", &child[ i ][ j ].age ) ;
            printf( "Sex: " ) ;
            scanf( " %c", &child[ i ][ j ].sex ) ;
            printf( "GPA: " );
            scanf( "%f", &child[ i ][ j ].gpa ) ;
            printf("-------------------------------------\n") ;
        }
    }
}
