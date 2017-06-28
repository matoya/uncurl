#ifndef __STATUS_H
#define __STATUS_H

enum uncurl_scheme {
	UNCURL_NONE = 0,
	UNCURL_HTTP = 1,
	UNCURL_HTTPS = 2,
};

enum uncurl_status {
	UNCURL_OK = 0,

	UNCURL_ERR_DEFAULT = -1,
	UNCURL_ERR_HEADER = -3000,
	UNCURL_ERR_CHUNK_LEN = -3001,
	UNCURL_ERR_NO_BODY = -3002,

	UNCURL_NET_ERR_SOCKET = -10,
	UNCURL_NET_ERR_BLOCKMODE = -11,
	UNCURL_NET_ERR_CONNECT = -12,
	UNCURL_NET_ERR_CONNECT_FINAL = -13,
	UNCURL_NET_ERR_WRITE = -14,
	UNCURL_NET_ERR_READ = -15,
	UNCURL_NET_ERR_CLOSED = -16,
	UNCURL_NET_ERR_RESOLVE = -17,
	UNCURL_NET_ERR_NTOP = -18,
	UNCURL_NET_ERR_TIMEOUT = -19,
	UNCURL_NET_ERR_POLL = -20,

	UNCURL_TLS_ERR_CONTEXT = -1000,
	UNCURL_TLS_ERR_SSL = -1001,
	UNCURL_TLS_ERR_FD = -1002,
	UNCURL_TLS_ERR_CONNECT = -1003,
	UNCURL_TLS_ERR_WRITE = -1004,
	UNCURL_TLS_ERR_READ = -1005,
	UNCURL_TLS_ERR_CLOSED = -1006,
	UNCURL_TLS_ERR_CACERT = -1007,

	UNCURL_HTTP_ERR_PARSE_STATUS = -2000,
	UNCURL_HTTP_ERR_PARSE_HEADER = -2001,
	UNCURL_HTTP_ERR_PARSE_SCHEME = -2002,
	UNCURL_HTTP_ERR_PARSE_HOST = -2003,
	UNCURL_HTTP_ERR_NOT_FOUND = -2004,
};

#endif
