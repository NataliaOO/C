#ifndef SRC_TESTS_ME_H
#define SRC_TESTS_H

#include <check.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

#include "../s21_string.h"

Suite *test_strerror(void);
Suite *test_strlen(void);
Suite *test_memcpy(void);
Suite *test_memchr(void);
Suite *test_memcmp(void);
Suite *test_memset(void);
Suite *test_strncat(void);
Suite *test_strchr(void);
Suite *test_strncmp(void);
Suite *test_strncpy(void);
Suite *test_strcspn(void);
Suite *test_strpbrk(void);
Suite *test_strrchr(void);
Suite *test_strstr(void);
Suite *test_strtok(void);

// special
Suite *test_to_upper(void);
Suite *test_to_lower(void);
Suite *test_trim(void);
Suite *test_insert(void);

// sprintf
Suite *test_sprintf_c(void);
Suite *test_sprintf_d(void);
Suite *test_sprintf_f(void);
Suite *test_sprintf_s(void);
Suite *test_sprintf_u(void);
Suite *test_sprintf_percent(void);
Suite *test_sprintf_e(void);
Suite *test_sprintf_g(void);
Suite *test_sprintf_i(void);
Suite *test_sprintf_n(void);
Suite *test_sprintf_hex1(void);
Suite *test_sprintf_hex2(void);
Suite *test_sprintf_octal(void);
Suite *test_sprintf_pointer(void);

// sscanf
Suite *test_sscanf_c(void);
Suite *test_sscanf_u(void);
Suite *test_sscanf_d(void);
Suite *test_sscanf_p(void);
Suite *test_sscanf_i(void);
Suite *test_sscanf_n(void);
Suite *test_sscanf_o(void);
Suite *test_sscanf_percent(void);
Suite *test_sscanf_real(void);
Suite *test_sscanf_x(void);

#endif  // SRC_TESTS_H
