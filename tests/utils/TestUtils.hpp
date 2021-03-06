#ifndef TELEGRAMQT_TEST_UTILS_HPP
#define TELEGRAMQT_TEST_UTILS_HPP

#include <qtestcase.h>

#ifndef TEST_TIMEOUT
#define TEST_TIMEOUT 200
#endif

#define TRY_COMPARE(expr, expected) QTRY_COMPARE_WITH_TIMEOUT(expr, expected, TEST_TIMEOUT)
#define TRY_VERIFY(expr) QTRY_VERIFY_WITH_TIMEOUT(expr, TEST_TIMEOUT)
#define TRY_VERIFY2(expr, messageExpression) QTRY_VERIFY2_WITH_TIMEOUT(expr, messageExpression, TEST_TIMEOUT)

#endif // TELEGRAMQT_TEST_UTILS_HPP
