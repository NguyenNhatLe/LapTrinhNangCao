int** inputMatrix(int nRows, int nCols) {
    int** matrix=new int*[nRows];
    for (int i=0; i<nRows; i++) {
       matrix[i]=new int[nCols]; 
    }
    for (int i=0; i<nRows; i++) {
       for (int j=0; j<nCols; j++)
        std:: cin >> matrix[i][j];
    }
    return matrix;
}

void printMatrix(int** matrix, int nRows, int nCols){
      for (int i=0; i<nRows; i++) {
        for (int j=0; j<nCols; j++){
		std:: cout << matrix[i][j] << " ";
	    }
	std::cout << endl;
      }
}