// Copyright (c) 2019, The NinjaCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"\n                                                                    \n"
" NN   NN IIIII NN   NN     JJJ   AAA    CCCCC   OOOOO  IIIII NN   NN \n"
" NNN  NN  III  NNN  NN     JJJ  AAAAA  CC    C OO   OO  III  NNN  NN \n"
" NN N NN  III  NN N NN     JJJ AA   AA CC      OO   OO  III  NN N NN \n"
" NN  NNN  III  NN  NNN JJ  JJJ AAAAAAA CC    C OO   OO  III  NN  NNN \n"
" NN   NN IIIII NN   NN  JJJJJ  AA   AA  CCCCC   OOOO0  IIIII NN   NN \n"
"                                                                     \n";

const std::string nonWindowsAsciiArt = 
"\n                                                                    \n"
" NN   NN IIIII NN   NN     JJJ   AAA    CCCCC   OOOOO  IIIII NN   NN \n"
" NNN  NN  III  NNN  NN     JJJ  AAAAA  CC    C OO   OO  III  NNN  NN \n"
" NN N NN  III  NN N NN     JJJ AA   AA CC      OO   OO  III  NN N NN \n"
" NN  NNN  III  NN  NNN JJ  JJJ AAAAAAA CC    C OO   OO  III  NN  NNN \n"
" NN   NN IIIII NN   NN  JJJJJ  AA   AA  CCCCC   OOOO0  IIIII NN   NN \n"
"                                                                     \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
