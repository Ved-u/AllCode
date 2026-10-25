const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const board = [
    [' ', ' ', ' '],
    [' ', ' ', ' '],
    [' ', ' ', ' ']
];

let currentPlayer = 'X';

function printBoard() {
    console.log('\n');
    board.forEach(row => {
        console.log(row.join(' | '));
        console.log('---------');
    });
}

function checkWin() {
    // Rows, columns, diagonals
    for (let i = 0; i < 3; i++) {
        if (board[i][0] === currentPlayer &&
                board[i][1] === currentPlayer &&
                board[i][2] === currentPlayer) return true;
        if (board[0][i] === currentPlayer &&
                board[1][i] === currentPlayer &&
                board[2][i] === currentPlayer) return true;
    }
    if (board[0][0] === currentPlayer &&
            board[1][1] === currentPlayer &&
            board[2][2] === currentPlayer) return true;
    if (board[0][2] === currentPlayer &&
            board[1][1] === currentPlayer &&
            board[2][0] === currentPlayer) return true;
    return false;
}

function checkDraw() {
    return board.flat().every(cell => cell !== ' ');
}

function askMove() {
    printBoard();
    rl.question(`Player ${currentPlayer}, enter your move (row,col): `, answer => {
        const [row, col] = answer.split(',').map(Number);
        if (
            row >= 0 && row < 3 &&
            col >= 0 && col < 3 &&
            board[row][col] === ' '
        ) {
            board[row][col] = currentPlayer;
            if (checkWin()) {
                printBoard();
                console.log(`Player ${currentPlayer} wins!`);
                rl.close();
            } else if (checkDraw()) {
                printBoard();
                console.log('Draw!');
                rl.close();
            } else {
                currentPlayer = currentPlayer === 'X' ? 'O' : 'X';
                askMove();
            }
        } else {
            console.log('Invalid move. Try again.');
            askMove();
        }
    });
}

askMove();