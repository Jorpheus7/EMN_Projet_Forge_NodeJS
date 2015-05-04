// Copyright Joyent, Inc. and other Node contributors.
// Copyright (c) 2011-2013 LG Electronics, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to permit
// persons to whom the Software is furnished to do so, subject to the
// following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
// NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
// OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
// USE OR OTHER DEALINGS IN THE SOFTWARE.

#include "node.h"
#include "platform.h"


namespace node {


char** OS::SetupArgs(int argc, char *argv[]) {
  return argv;
}


void OS::SetProcessTitle(char *title) {
  ;
}


const char* OS::GetProcessTitle(int *len) {
  *len = 0;
  return NULL;
}


int OS::GetMemory(size_t *rss, size_t *vsize) {
  // Not implemented
  if (rss) *rss = 0;
  if (vsize) *vsize = 0;
  return 0;
}

int OS::GetExecutablePath(char *buffer, size_t* size) {
  *size = 0;
  return -1;
}

}  // namespace node
