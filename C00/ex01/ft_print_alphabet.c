#include <unistd.h>

void	ft_print_alphabet (void)
{
  char start = 'a';
  char end   = 'z';

	while (1) {
      write(1, &start, 1);
      if (start == end) break;
      start++;
  }
}
