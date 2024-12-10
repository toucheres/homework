#include <stdio.h>
#include <string.h>
#include <ctype.h>

//int main()
//{
//    char line[1001];
//    fgets(line, 1001, stdin);
//    int len = strlen(line);
//    int start = 0;
//    while (start < len)
//    {
//        if (isalpha(line[start]))
//        {
//            int end = start;
//            while (end < len && isalpha(line[end]))
//            {
//                end++;
//            }
//  
//            int i = start, j = end - 1;
//            while (i < j)
//            {
//                char temp = line[i];
//                line[i] = line[j];
//                line[j] = temp;
//                i++;
//                j--;
//            }
//            start = end;
//        }
//        else
//        {
//            start++;
//        }
//    }
//    printf("%s", line);
//    return 0;
//}
