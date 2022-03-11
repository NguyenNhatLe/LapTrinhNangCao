void sort(float a[], int size, bool isAscending){
    if( isAscending==true){
        for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(a[i] > a[j]){
        
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
                 }
             }
        }
    }
    else {
        for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(a[i] < a[j]){
              
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
                }
             }
         }
    }
}