#ifndef __SERIAL_AT
	#define __SERIAL_AT
	
	int at_cmgf(int mode);
	int at_cpms(char *s1, char *s2, char *s3);
	int at_cnmi(int mode, int i1, int i2, int i3, int i4);
	int at_csq();
	
	char *at_cmgr_getphone(char *buffer);
	char *at_cmgr_getmessage(char *buffer);
#endif