#include <stdio.h>

int main()
{
    printf("Enter a character in any case: ");
    char ch;
    scanf(" %c", &ch);
    if(ch >= 65 && ch <= 90)
    {
        printf("The value of character is %d.\n", ch);
        printf("The character %c is in UpperCase.\n", ch);
    }
    if(ch >= 97 && ch <= 122)
    {
        printf("The value of character is %d.\n", ch);
        printf("The character %c is in Lower case.\n", ch);
    }
    return 0;
}
/*
| Dec | Char    | Description          | Dec | Char | Description   |
| --- | ------- | -------------------- | --- | ---- | ------------- |
| 0   | NUL     | Null                 | 64  | @    | At symbol     |
| 1   | SOH     | Start of Header      | 65  | A    | Uppercase A   |
| 2   | STX     | Start of Text        | 66  | B    | Uppercase B   |
| 3   | ETX     | End of Text          | 67  | C    | Uppercase C   |
| 4   | EOT     | End of Transmission  | 68  | D    | Uppercase D   |
| 5   | ENQ     | Enquiry              | 69  | E    | Uppercase E   |
| 6   | ACK     | Acknowledge          | 70  | F    | Uppercase F   |
| 7   | BEL     | Bell                 | 71  | G    | Uppercase G   |
| 8   | BS      | Backspace            | 72  | H    | Uppercase H   |
| 9   | TAB     | Horizontal Tab       | 73  | I    | Uppercase I   |
| 10  | LF      | Line Feed (Newline)  | 74  | J    | Uppercase J   |
| 11  | VT      | Vertical Tab         | 75  | K    | Uppercase K   |
| 12  | FF      | Form Feed            | 76  | L    | Uppercase L   |
| 13  | CR      | Carriage Return      | 77  | M    | Uppercase M   |
| 14  | SO      | Shift Out            | 78  | N    | Uppercase N   |
| 15  | SI      | Shift In             | 79  | O    | Uppercase O   |
| 16  | DLE     | Data Link Escape     | 80  | P    | Uppercase P   |
| 17  | DC1     | Device Control 1     | 81  | Q    | Uppercase Q   |
| 18  | DC2     | Device Control 2     | 82  | R    | Uppercase R   |
| 19  | DC3     | Device Control 3     | 83  | S    | Uppercase S   |
| 20  | DC4     | Device Control 4     | 84  | T    | Uppercase T   |
| 21  | NAK     | Negative Acknowledge | 85  | U    | Uppercase U   |
| 22  | SYN     | Synchronous Idle     | 86  | V    | Uppercase V   |
| 23  | ETB     | End of Trans. Block  | 87  | W    | Uppercase W   |
| 24  | CAN     | Cancel               | 88  | X    | Uppercase X   |
| 25  | EM      | End of Medium        | 89  | Y    | Uppercase Y   |
| 26  | SUB     | Substitute           | 90  | Z    | Uppercase Z   |
| 27  | ESC     | Escape               | 91  | \[   | Left Bracket  |
| 28  | FS      | File Separator       | 92  | \\   | Backslash     |
| 29  | GS      | Group Separator      | 93  | ]    | Right Bracket |
| 30  | RS      | Record Separator     | 94  | ^    | Caret         |
| 31  | US      | Unit Separator       | 95  | \_   | Underscore    |
| 32  | (space) | Space                | 96  | \`   | Grave Accent  | 
*/
/*
| Dec | Char | Description | Dec | Char | Description  |
| --- | ---- | ----------- | --- | ---- | ------------ |
| 97  | a    | Lowercase a | 112 | p    | Lowercase p  |
| 98  | b    | Lowercase b | 113 | q    | Lowercase q  |
| 99  | c    | Lowercase c | 114 | r    | Lowercase r  |
| 100 | d    | Lowercase d | 115 | s    | Lowercase s  |
| 101 | e    | Lowercase e | 116 | t    | Lowercase t  |
| 102 | f    | Lowercase f | 117 | u    | Lowercase u  |
| 103 | g    | Lowercase g | 118 | v    | Lowercase v  |
| 104 | h    | Lowercase h | 119 | w    | Lowercase w  |
| 105 | i    | Lowercase i | 120 | x    | Lowercase x  |
| 106 | j    | Lowercase j | 121 | y    | Lowercase y  |
| 107 | k    | Lowercase k | 122 | z    | Lowercase z  |
| 108 | l    | Lowercase l | 123 | {    | Left Brace   |
| 109 | m    | Lowercase m | 124 | \|   | Vertical Bar |
| 110 | n    | Lowercase n | 125 | }    | Right Brace  |
| 111 | o    | Lowercase o | 126 | \~   | Tilde        |
| 127 | DEL  | Delete      |     |      |              |
*/
