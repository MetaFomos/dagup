//
//  http.h
//  xdag
//
//  Created by Rui Xie on 5/25/18.
//  Copyright © 2018 xrdavies. All rights reserved.
//

#ifndef http_h
#define http_h

#ifdef __cplusplus
extern "C" {
#endif
	
// simple http get, pass url, and return the content with malloc. Need free returned value.
extern char *http_get(const char* url);

extern int test_https(void);
extern int test_http(void);
	
#ifdef __cplusplus
};
#endif

#endif /* http_h */
