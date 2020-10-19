#include <stdio.h>
int main()
{
  char text[100];
  int begin, middle, end, length = 0;

  gets(text);

  while (text[length] != '\0')
    length++;

  end = length - 1;
  middle = length/2;

  for (begin = 0; begin < middle; begin++)
  {
    if (text[begin] != text[end])
    {
      printf("No\n");
      break;
    }
    end--;
  }
  if (begin == middle)
    printf("Yes\n");

  return 0;
}
