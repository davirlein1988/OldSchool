#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  // creates a main loop
  while (1)
  {
    fd_set readFDs;
    FD_ZERO(&readFDs);
    // now set the bits for the descriptors
    // this server is interested in
    // (for simplicity, all of them from min to max)
    int fd;
    for (fd = minFD; fd < maxFD; fd++)
    {
      FD_SET(fd, &readFDs);

      int rc = select(maxFD + 1, &readFDs, NULL, NULL, NULL);
      // Check data
      int fd;
      for (fd = minFD; fd < maxFD; fd++)
      {
        if (FD_ISSET(fd, &readFDs))
          processFD(fd);
      }
    }
  }
}