int** new_matrix(int rows, int cols, int value) { 
int** matrix = new int*[rows]; 
for (int i = 0; i < rows; ++i) { 
matrix[i] = new int[cols]; 
for (int j = 0; j < cols; ++j) { 
matrix[i][j] = value; 
} 
} 
return matrix; 
} 

std::tuple<int**, int, int> convolution(int** matrix, int mrows, int mcols, int** core, int crows, int ccols) { 
int srows = mrows - crows + 1; 
int scols = mcols - ccols + 1; 
int** conv = new_matrix(srows, scols); 

for (int i = 0; i < srows; ++i) { 
for (int j = 0; j < scols; ++j) { 
int sum = 0; 
for (int k = 0; k < crows; ++k) { 
for (int l = 0; l < ccols; ++l) { 
sum += matrix[i + k][j + l] * core[k][l]; 
} 
} 
conv[i][j] = sum; 
} 
} 

return std::make_tuple(conv, srows, scols); 
} 


std::tuple<int**, int, int> multiplication(int** a, int arows, int acols, int** b, int brows, int bcols) { 
int** mult = new_matrix(arows, bcols); 

for (int i = 0; i < arows; ++i) { 
for (int j = 0; j < bcols; ++j) { 
int sum = 0; 
for (int k = 0; k < acols; ++k) { 
sum += a[i][k] * b[k][j]; 
} 
mult[i][j] = sum; 
} 
} 

return std::make_tuple(mult, arows, bcols); 
} 


std::tuple<int, int> add_row(int*** matrix, int rows, int cols, int value) { 
int** new_matrix_data = new_matrix(rows + 1, cols, value); 

for (int i = 0; i < rows; ++i) { 
for (int j = 0; j < cols; ++j) { 
new_matrix_data[i][j] = (*matrix)[i][j]; 
} 
delete[] (*matrix)[i]; 
} 
delete[] *matrix; 
*matrix = new_matrix_data; 

return std::make_tuple(rows + 1, cols); 
} 


std::tuple<int, int> add_col(int*** matrix, int rows, int cols, int value) { 
int** new_matrix_data = new_matrix(rows, cols + 1, value); 

for (int i = 0; i < rows; ++i) { 
for (int j = 0; j < cols; ++j) { 
new_matrix_data[i][j] = (*matrix)[i][j]; 
} 
new_matrix_data[i][cols] = value; 
delete[] (*matrix)[i]; 
} 
delete[] *matrix; 
*matrix = new_matrix_data; 

return std::make_tuple(rows, cols + 1); 
} 


void delete_matrix(int*** matrix, int rows) { 
for (int i = 0; i < rows; ++i) { 
delete[] (*matrix)[i]; 
} 
delete[] *matrix; 
} 

void print(int** matrix, int rows, int cols) { 
for (int i = 0; i < rows; ++i) { 
for (int j = 0; j < cols; ++j) { 
std::cout << matrix[i][j] << " "; 
} 
std::cout << std::endl; 
} 
}