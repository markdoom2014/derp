#!/usr/bin/env python3
# coding: utf-8

import time
import random

def derp():

  if (random.uniform(0,1)<0.1):
    return "\x1b[3{};4{}m".format(random.randrange(10),random.randrange(10))
  if (random.uniform(0,1)<0.1):
    message = random.choice([ 
  "\x07",#     BEL beeps;
  "\x08",#     BS  backspaces one column (but not past the beginning of the line);
  "\x09",#     HT  goes to the next tab stop or to the end of the line if there  is no earlier tab stop;
  "\x0a",#     LF  VT  (0x0B, ^^KK) and FF (0x0C, ^^LL) all give a linefeed, and if
  "\x0d",#     CR  gives a carriage return;

  "\x0e",#     SO  activates the G1 character set;
  "\x0f",#     SI  activates the G0 character set;
  "\x18",#     CAN and SUB (0x1A, ^^ZZ) interrupt escape sequences;
 #"\x1b",#     ESC starts an escape sequence;
  "\x7f",#     DEL is ignored;
  "\x1b",#     CSI is equivalent to ESC [.
  ])
  else:
    # ESC- but not CSI-sequences

    esc = random.choice(['\x1b','\x9b'])
    command = random.choice([
    "c"  ,  # ESC c     RIS      Reset.
    "D"  ,  # ESC D     IND      Linefeed.
    "E"  ,  # ESC E     NEL      Newline.
    "H"  ,  # ESC H     HTS      Set tab stop at current column.
    "M"  ,  # ESC M     RI       Reverse linefeed.
    "Z"  ,  # ESC Z     DECID    DEC private identification. The kernel returns the
            #                    string  ESC [ ? 6 c, claiming that it is a VT102.
    "7"  ,  # ESC 7     DECSC    Save    current    state    (cursor   coordinates,
            #                    attributes, character sets pointed at by G0, G1).
    "8"  ,  # ESC 8     DECRC    Restore state most recently saved by ESC 7.
    "["  ,  # ESC [     CSI      Control sequence introducer
    #%   ,  # ESC %              Start sequence selecting character set
    "%@" ,  #  ESC % @               Select default (ISO 646 / ISO 8859-1)
    "%G" ,  #  ESC % G               Select UTF-8
    "%8" ,  #  ESC % 8               Select UTF-8 (obsolete)
    "#8" ,  #  ESC # 8   DECALN   DEC screen alignment test - fill screen with E's.
    #(   ,  #  ESC (              Start sequence defining G0 character set
    "(B" ,  #  ESC ( B               Select default (ISO 8859-1 mapping)
    "(0" ,  #  ESC ( 0               Select VT100 graphics mapping
    "(U" ,  #  ESC ( U               Select null mapping - straight to character ROM
    "(K" ,  #  ESC ( K               Select user mapping - the map that is loaded by
            #                       the utility mmaappssccrrnn(8).
    ")"  ,  #  ESC )              Start sequence defining G1
            #                      (followed by one of B, 0, U, K, as above).
 #       ESC >  ESC >     DECPNM   Set numeric keypad mode
 #       ESC =  ESC =     DECPAM   Set application keypad mode
 #       ESC ]  ESC ]     OSC      (Should be: Operating  system  command)  ESC  ]  P
 # _n_r_r_g_g_b_b:  set  palette,  with parameter given in 7
 # hexadecimal digits after the final P :-(.  Here  _n
 # is  the  color  (0-15),  and  _r_r_g_g_b_b indicates the
 # red/green/blue values (0-255).   ESC  ]  R:  reset
 # palette
    ])
    message = esc+command
  return message


try:
  while True:
    print("{}derp".format(derp()))
    time.sleep(0.1)
except KeyboardInterrupt:
  pass
