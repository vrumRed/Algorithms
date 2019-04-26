#include <stdio.h> 
  
int binarySearch(int vector[], int initial_position, int size_of_aray, int to_search) 
{ 
    if (size_of_aray >= initial_position) { 
        
        //Determina metade do array
        int middle = initial_position + (size_of_aray - initial_position) / 2; 

        //verifica se é o valor buscado
        //Se sim, retorna valor
        if (vector[middle] == to_search) 
            return middle; 

        //Verifica se valor buscado é maior que valor
        //Na posição selecionada.
        //Se sim, passa posição-1 para novo calculo da posição média
        if (vector[middle] > to_search) 
            return binarySearch(vector, initial_position, middle - 1, to_search); 
  
  		//Caso o valor seja menor, soma um a posição
  		//para novo calculo de posição média
        return binarySearch(vector, middle + 1, size_of_array, to_search); 
    } 
  
  	//Caso tamanho do vetor seja maior ou igual a posição passada inicialmente
  	//Significa o término do vetor. Retorna -1 para identificar ausencia de resposta.
    return -1; 
} 
  
int main(void) 
{ 
    int vector[] = { 2, 5, 7, 13, 15, 17, 29, 43, 51, 58 }; 
    int n = sizeof(vector) / sizeof(vector[0]); 
    int to_search = 15; 
    int result = binarySearch(vector, 0, n - 1, to_search); 
    
    if(result == -1){
    	print("A busca nao retornou resultados\n");
    }else{
    	print("Valor identificado na posicao %i\n");
    }

    return 0; 
} 
