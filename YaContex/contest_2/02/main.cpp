bool is_can_exit_from_maze(std::vector<std::string>&maze, int row, int col, std::string dvizh = " " ) {
    if ( maze[row][col] == 'E') {
        return true;
    } 
    if (maze[row][col] == '#') {
        return false;
    }
    if (maze[row][col] != '#'  && maze[row][col] != 'E')  {
        if (dvizh == "up") {
            return is_can_exit_from_maze(maze, row - 1, col, "up") ||is_can_exit_from_maze( maze,row,col-1, "left") ||is_can_exit_from_maze( maze,row,col+1, "right");
        }
        if (dvizh == "down") {
            return is_can_exit_from_maze(maze, row + 1, col, "down") || is_can_exit_from_maze(maze, row, col+1, "right") || is_can_exit_from_maze(maze, row, col -1, "left");
        }
        if (dvizh == "left") {
            return is_can_exit_from_maze( maze,row,col-1, "left") || is_can_exit_from_maze( maze,row+1,col, "down") ||is_can_exit_from_maze( maze,row-1,col, "up");
        }
        if (dvizh == "right") {
            return is_can_exit_from_maze(maze,row + 1,col, "down") || is_can_exit_from_maze(maze, row - 1, col, "up") || is_can_exit_from_maze(maze, row, col + 1, "right");
        }
        if (dvizh == " ") {
            return is_can_exit_from_maze(maze, row + 1,col, "down") || is_can_exit_from_maze(maze, row - 1, col, "up") || is_can_exit_from_maze(maze, row, col+1, "right") || is_can_exit_from_maze(maze, row, col - 1, "left");
        }
    }
}