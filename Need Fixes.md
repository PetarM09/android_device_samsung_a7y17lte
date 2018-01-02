# [ 1993.206397]  [0:           init:28638] init: Failed to bind socket 'rild2': Permission denied
# [ 1993.206452]  [1:    logd.auditd: 2364] type=1400 audit(1514736766.591:1840): avc: denied { create } for pid=28638 comm="init" name="rild2" scontext=u:r:init:s0 tcontext=u:object_r:socket_device:s0 tclass=sock_file permissive=0
# [ 1993.207078]  [0:           init:28638] init: Failed to bind socket 'rild-debug2': Permission denied
#
#                    rild need fix adding this to external\sepolicy\file_context or adding them to ServiceManager
#
#                   / dev / socket / rild [0-9] u: object_r: rild_socket: s0 
#                   / dev / socket / rild-debug [0-9] u: object_r: rild_debug_socket: s0
#
