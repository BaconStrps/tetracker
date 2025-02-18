#ifndef WIN_INFO_H
#define WIN_INFO_H

typedef struct {
	char ls[4], rs[4], ts[4], bs[4], 
	 	 tl[4], tr[4], bl[4], br[4];
} WIN_BORDER;

typedef struct {
	int startx, starty;
	int height, width;
	WIN_BORDER border;
} WIN_INFO;

extern WIN_BORDER WB_STANDALONE;
extern WIN_BORDER WB_CONNECTS_RIGHT;
extern WIN_BORDER WB_CONNECTS_LEFT;
extern WIN_BORDER WB_CONNECTS_UP;
extern WIN_BORDER WB_CONNECTS_DOWN;

#endif