#ifndef __texhck_h__
#define __texhck_h__

#ifndef size_t
#  include <stddef.h>
#endif

size_t texhckSizeForDXT1(unsigned int width, unsigned int height);
size_t texhckSizeForDXT5(unsigned int width, unsigned int height);

int texhckConvertToDXT1(unsigned char *out,
      const unsigned char *uncompressed,
      unsigned int width, unsigned int height, int channels);

int texhckConvertToDXT5(unsigned char *out,
      const unsigned char *uncompressed,
      unsigned int width, unsigned int height, int channels);

#endif /* __texhck_h__ */

/* vim: set ts=8 sw=3 tw=0 :*/
