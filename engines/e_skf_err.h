/* engines/e_skf_err.h */
/* ====================================================================
 * Copyright (c) 2015-2016 The GmSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the GmSSL Project.
 *    (http://gmssl.org/)"
 *
 * 4. The name "GmSSL Project" must not be used to endorse or promote
 *    products derived from this software without prior written
 *    permission. For written permission, please contact
 *    guanzhi1980@gmail.com.
 *
 * 5. Products derived from this software may not be called "GmSSL"
 *    nor may "GmSSL" appear in their names without prior written
 *    permission of the GmSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the GmSSL Project
 *    (http://gmssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE GmSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE GmSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 */

#ifndef HEADER_E_SKF_ERR_H
#define HEADER_E_SKF_ERR_H

#ifdef  __cplusplus
extern "C" {
#endif

/* BEGIN ERROR CODES */
/*
 * The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */
static void ERR_load_ESKF_strings(void);
static void ERR_unload_ESKF_strings(void);
static void ERR_ESKF_error(int function, int reason, char *file, int line);
# define ESKFerr(f,r) ERR_ESKF_error((f),(r),__FILE__,__LINE__)

/* Error codes for the ESKF functions. */

/* Function codes. */
# define ESKF_F_DEV_AUTH                                  119
# define ESKF_F_OPEN_APP                                  100
# define ESKF_F_OPEN_CONTAINER                            101
# define ESKF_F_OPEN_DEV                                  102
# define ESKF_F_SET_AUTHKEY                               103
# define ESKF_F_SET_USERPIN                               104
# define ESKF_F_SKF_CIPHER                                105
# define ESKF_F_SKF_CIPHERS                               106
# define ESKF_F_SKF_DIGESTS                               107
# define ESKF_F_SKF_ENGINE_CTRL                           108
# define ESKF_F_SKF_FINISH                                109
# define ESKF_F_SKF_INIT                                  110
# define ESKF_F_SKF_INIT_KEY                              111
# define ESKF_F_SKF_LOAD_PUBKEY                           112
# define ESKF_F_SKF_RAND_BYTES                            113
# define ESKF_F_SKF_RSA_SIGN                              114
# define ESKF_F_SKF_SM2_DO_SIGN                           115
# define ESKF_F_SKF_SM3_FINAL                             116
# define ESKF_F_SKF_SM3_INIT                              117
# define ESKF_F_SKF_SM3_UPDATE                            118
# define ESKF_F_VERIFY_PIN                                120

/* Reason codes. */
# define ESKF_R_APP_ALREADY_OPENED                        101
# define ESKF_R_APP_NOT_OPENED                            102
# define ESKF_R_CONTAINER_ALREADY_OPENED                  103
# define ESKF_R_CONTAINER_NOT_OPENED                      104
# define ESKF_R_DEV_ALREADY_AUTHENTICATED                 105
# define ESKF_R_DEV_ALREADY_CONNECTED                     106
# define ESKF_R_DEV_IS_NOT_CONNECTED                      107
# define ESKF_R_DEV_NOT_AUTHENCATED                       108
# define ESKF_R_DEV_NOT_AUTHENTICATED                     109
# define ESKF_R_DEV_NOT_CONNECTED                         110
# define ESKF_R_GEN_RANDOM_FAILED                         111
# define ESKF_R_INVALID_CONTAINER_TYPE                    112
# define ESKF_R_INVALID_CTRL_CMD                          113
# define ESKF_R_NOT_IMPLEMENTED                           100
# define ESKF_R_PIN_NOT_VERIFIED                          114
# define ESKF_R_SKF_CLOSE_HANDLE_FAILED                   124
# define ESKF_R_SKF_CONNECT_DEV_FAILED                    115
# define ESKF_R_SKF_DEV_AUTH_FAILED                       116
# define ESKF_R_SKF_DIGEST_FINAL_FAILED                   125
# define ESKF_R_SKF_DIGEST_INIT_FAILED                    126
# define ESKF_R_SKF_DIGEST_UPDATE_FAILED                  127
# define ESKF_R_SKF_DIS_CONNNECT_DEV_FAILED               128
# define ESKF_R_SKF_EXPORT_PUBLIC_KEY_FAILED              117
# define ESKF_R_SKF_GEN_RANDOM_FAILED                     118
# define ESKF_R_SKF_GET_CONTAINER_TYPE_FAILED             119
# define ESKF_R_SKF_GET_DEV_INFO_FAILED                   120
# define ESKF_R_SKF_OPEN_APPLICATION_FAILED               121
# define ESKF_R_SKF_OPEN_CONTAINER_FAILED                 122
# define ESKF_R_SKF_SET_SYMMKEY_FAILED                    129
# define ESKF_R_SKF_VERIFY_PIN_FAILED                     123

#ifdef  __cplusplus
}
#endif
#endif
