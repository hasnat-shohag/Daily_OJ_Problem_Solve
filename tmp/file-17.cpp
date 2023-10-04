#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    int numNotes;
    string notes[100], musicSheet[77];
    int notePositions[] = { 4, 3, 2, 1, 7, 6, 5 };

    while (true) {
        cin >> numNotes;
        if (numNotes == -1) break;

        int numLines = (numNotes + 15) / 16;

        for (int i = 0; i < numLines; ++i) {
            for (int j = 0; j < 11; ++j) {
                int noteNum = 11 * i + j;
                string& noteLine = musicSheet[noteNum];
                noteLine.clear();

                if (i == 0) noteLine += "||";
                else noteLine += " |";
                for (int k = 0; k < 4; ++k) {
                    if (j % 2 == 0) noteLine += string(24, ' ');
                    else noteLine += string(24, '-');
                    noteLine += '|';
                }

                if (i == numLines - 1) noteLine += '|';
            }
        }
        for (int i = 0, j = 0; i < numNotes; ++i) {
            cin >> notes[i];

            int position = 2 + (i % 16) / 4 + 6 * (i % 16);
            int noteNum = 11 * j + notePositions[notes[i][0] - 'A'];
            musicSheet[noteNum][position + 2] = '|';
            musicSheet[noteNum][position + 3] = '\\';
            musicSheet[noteNum + 1][position + 2] = '|';
            musicSheet[noteNum + 2][position + 1] = 'x';
            musicSheet[noteNum + 2][position + 2] = '|';

            if (notes[i].size() == 2) musicSheet[noteNum + 2][position] = '#';
            
        }
    }
    
    return 0;
}