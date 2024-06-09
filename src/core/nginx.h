
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <sys/time.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/err.h>
#include <hiredis/hiredis.h>
#include <mysql/mysql.h>

#define randsc(a,b) ( ( rand() % ( b - a + 1 ) ) + a )

#define NUM_COUNT 10
#define MAX_DIGITS 4  // 三位数 + 终止符

#define NGX_PUB_KEY "/meowginx/special_keys/public.pem"
#define NGX_PRV_KEY "/meowginx/special_keys/private.pem"

#define NGX_MYSQL_HOST "127.0.0.1"
#define NGX_MYSQL_USER "root"
#define NGX_MYSQL_PASSWORD "Lrq9uDKZ2ichTk4xKPFEMtmFRVpimkXW@163.com"
#define NGX_MYSQL_DBNAME "mysql"

//char* ngx_public_key = "/meowginx/special_keys/public.pem";
//char* ngx_private_key = "/meowginx/special_keys/private.pem";

unsigned int get_microsecond_time();
char* concatenate_numbers(int numbers[NUM_COUNT]);
char* ngx_gen_rndA();
void ngx_write_somethingA(char* function_, char* detail_);
int ngx_now_time(char *nowTime);
int rsa_encrypt(char *str, char *path_key, char *strret);
int rsa_decrypt(char *str, char *path_key, char *strret);

redisContext* ngx_redis_connect();
MYSQL*        ngx_mysql_connect();

#ifndef _NGINX_H_INCLUDED_
#define _NGINX_H_INCLUDED_


#define nginx_version      5201314
#define NGINX_VERSION      "5.2.0"
#define NGINX_VER          "QwQ/" NGINX_VERSION

#ifdef NGX_BUILD
#define NGINX_VER_BUILD    NGINX_VER " (" NGX_BUILD ")"
#else
#define NGINX_VER_BUILD    NGINX_VER
#endif

#define NGINX_VAR          "QwQ"
#define NGX_OLDPID_EXT     ".oldbin"


#endif /* _NGINX_H_INCLUDED_ */

//unsigned int get_microsecond_time() {
//    struct timeval tv;
//    gettimeofday(&tv, NULL);
//    return tv.tv_usec * 1000 + tv.tv_usec * 100 + tv.tv_usec * 10 + tv.tv_usec;  //  return tv.tv_sec * 1000000 + tv.tv_usec;
//}
//
//char* concatenate_numbers(int numbers[NUM_COUNT]) {
//    // 为结果字符串分配内存，每个三位数占用4个字符（包括终止符）
//    char* result = (char*)malloc(NUM_COUNT * MAX_DIGITS);
//    if (result == NULL) {
//        return NULL;  // 内存分配失败
//    }
//
//    // 初始化结果字符串为空
//    result[0] = '\0';
//
//    // 将每个整数转换为字符串并连接到结果字符串中
//    for (int i = 0; i < NUM_COUNT; i++) {
//        char buffer[MAX_DIGITS];
//        snprintf(buffer, sizeof(buffer), "%d", numbers[i]);
//        strcat(result, buffer);
//    }
//
//    return result;
//}
//
//char* ngx_gen_rndA(){
//    int a, i, j, toc[10];
//    char* result;
//    //使用for循环生成10个随机数
//    for (i = 0; i < 10; i++) {
//        for(j = 0 ; j < 60 ; j++){
//            srand(get_microsecond_time());
//        }
//        a = randsc(100, 999);
//        toc[i] = a;
//    }
//    result = concatenate_numbers(toc);
//    return result;
//}