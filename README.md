# Meowginx ===> 一个会喵喵叫的 Nginx

------
### 它为什么会诞生？：
> 没什么，单纯为了好玩儿.....
> 
> 觉得 **"原来的Nginx太古板"** 了，施展一下自己天马行空的畅想，添加更多的可能性.....
> 
> **其实归根结底还是为了好玩儿.....**
------
### 有哪些有趣的地方？：
> 改变了 ***异常响应页面的样式***..... ***异常响应的样子*** 会变得越来越 ***多种多样***....
> 
> 改变了一些 ***响应参数***，***自定义*** 了一些 ***响应参数*** 的 ***字段值***.....
------
### 操作：
  > mkdir -p /meowginx/{modules,error-log,pid,lock,log,client-body-temp,proxy-temp,fastcgi-temp,uwsgi-temp,scgi-temp}
  > 
  > git clone https://github.com/JuneFoxy/Meowginx.git
  >
  > cd meowginx
  >
  > ./configure --prefix=/meowginx --sbin-path=/meowginx/nginx --modules-path=/meowginx/modules --error-log-path=/meowginx/error-log/error.log --pid-path=/meowginx/pid/nginx.pid --lock-path=/meowginx/lock/nginx.lock --http-log-path=/meowginx/log/access.log --http-client-body-temp-path=/meowginx/client-body-temp --http-proxy-temp-path=/meowginx/proxy-temp --http-fastcgi-temp-path=/meowginx/fastcgi-temp --http-uwsgi-temp-path=/meowginx/uwsgi-temp --http-scgi-temp-path=/meowginx/scgi-temp --user=root --group=root --with-select_module --with-poll_module --with-threads  --with-file-aio --with-http_ssl_module --with-http_v2_module --with-http_v3_module --with-http_realip_module --with-http_addition_module --with-http_xslt_module --with-http_image_filter_module --with-http_geoip_module --with-http_sub_module --with-http_dav_module --with-http_flv_module --with-http_mp4_module --with-http_gunzip_module --with-http_gzip_static_module --with-http_auth_request_module --with-http_random_index_module --with-http_secure_link_module --with-http_degradation_module --with-http_slice_module --with-http_stub_status_module --with-http_perl_module --without-mail_pop3_module --without-mail_imap_module --without-mail_smtp_module --with-stream --with-stream_ssl_module --with-stream_realip_module --with-stream_geoip_module --with-stream_ssl_preread_module --with-pcre --with-pcre-jit --with-libatomic --with-compat --with-cc=/usr/bin/clang-16 --with-cpp=/usr/bin/clang-cpp-16 --with-cc-opt='-g -O2 -flto=auto -fstack-protector-strong -Wformat -Werror=format-security -fPIC -Wdate-time -D_FORTIFY_SOURCE=2' --with-ld-opt='-Wl,-Bsymbolic-functions -flto=auto -Wl,-z,relro -Wl,-z,now -fPIC' --with-perl=/usr/bin/perl --with-perl_modules_path=/usr/lib/x86_64-linux-gnu/perl5/5.36/
  > 
  > make -j3
  > 
  > make install
------
### 关于：
> 诚挚希望各位有着天马行空想象力的小伙伴，在issue或我的邮件里投递一下想法。能力允许的情况下尽量帮你实现。
> 
> 捐赠：
>> BTC地址：bc1qy7ew43arcr42kae4uhaz0fe8fatxe0v0ln6knr
>> 
>> ![img.png](img.png)
>>
>> Ethereum地址：0x98B1E95402d44dE362e08EC28622DcCfc7a871a5
>> 
>> ![img_1.png](img_1.png)
