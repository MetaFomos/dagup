//
//  rpc_wrapper.h
//  xdag
//
//  Created by Rui Xie on 3/29/18.
//  Copyright © 2018 xrdavies. All rights reserved.
//

#ifndef XDAG_RPC_WRAPPER_H
#define XDAG_RPC_WRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif
	
extern void rpc_call_dnet_command(const char *method, const char *params, char **result);
	
#ifdef __cplusplus
};
#endif
		
#endif //XDAG_RPC_WRAPPER_H
