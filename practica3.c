#include <stdio.h>
int main(){
	char c;
	printf("introduzca un caracter");
	c = getchar();
	int a = (int) c;
	if(48<= a && a <= 57)
			printf("Es un numero entero");
		else{
			if(65 <= a && a <= 90)
			printf("Es una letra mayuscula");
		}
		
			if(97 <= a && a <= 122)
            printf("Es una letra minuscula");
        else 
        printf("es un simbolo");
	 
		return (0);
}
