// Copyright (c) Christopher D. Dickson <cdd@matoya.group>
//
// This Source Code Form is subject to the terms of the MIT License.
// If a copy of the MIT License was not distributed with this file,
// You can obtain one at https://spdx.org/licenses/MIT.html.

#pragma once

#include <stdint.h>

enum http_type {
	HTTP_INT,
	HTTP_STRING,
};

struct http_header;

char *http_request(char *method, char *host, char *path, char *fields);
char *http_connect(char *host, uint16_t port, char *fields);
char *http_response(char *code, char *msg, char *fields);
char *http_lc(char *str);
struct http_header *http_parse_header(char *header);
void http_free_header(struct http_header *h);
int32_t http_get_header(struct http_header *h, char *key, int32_t *val_int, char **val_str);
int32_t http_get_status_code(struct http_header *h, int32_t *status_code);
char *http_set_header(char *header, char *name, int32_t type, void *value);
int32_t http_parse_url(char *url_in, int32_t *scheme, char **host, uint16_t *port, char **path);
