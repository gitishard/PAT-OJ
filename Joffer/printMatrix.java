import java.util.ArrayList;
class Solution {
    public ArrayList<Integer> printLine(int[][] matrix, int row, int from, int to, Boolean direction) {
        ArrayList<Integer> line = new ArrayList<Integer>();
        if(direction== true){
            //increase
            for(int i = from; i < to; i++){
                line.add(matrix[row][i]);
            }
        } else {
            for(int i = from; i > to; i--){
                line.add(matrix[row][i]);
            }
        }
        return line;
    }
    public ArrayList<Integer> printColoum(int[][] matrix, int col, int from, int to, Boolean direction){
        ArrayList<Integer> coloum = new ArrayList<Integer>();
        if(direction == true){
            for(int i = from; i < to; i++){
                coloum.add(matrix[i][col]);
            }
        } else {
            for(int i = from; i > to; i--){
               coloum.add(matrix[i][col]);
            }
        }
        return coloum;
    }
    public ArrayList<Integer> printMatrix(int[][] matrix){
        ArrayList<Integer> rst = new ArrayList<Integer>();
        ArrayList<Integer> item = null;
        int rlen = matrix.length;
        int clen = matrix[0].length;
        int row = 0;
        int col = 0;
        while(rlen > 0 || clen > 0) {
            if(rlen > 1 && clen > 1){
                item = printLine(matrix, row, col, col+clen-1, true);
                rst.addAll(item);
                item = printColoum(matrix, col+clen-1, row, row+rlen-1, true);
                rst.addAll(item);
                item = printLine(matrix, row+rlen-1, col+clen-1, col, false);
                rst.addAll(item);
                item = printColoum(matrix, col, row+rlen-1, row, false);
                rst.addAll(item);
            } else if(rlen == 1){
                item = printLine(matrix, row, col, col+clen, true);
                rst.addAll(item);
            } else if(clen == 1){
                item = printColoum(matrix, col+clen-1, row, row+rlen, true);
                rst.addAll(item);
            }
            rlen -= 2;
            clen -= 2;
            row += 1;
            col += 1;
        }
        return rst;
    }
}