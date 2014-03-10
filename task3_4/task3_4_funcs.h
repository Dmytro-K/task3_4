#ifndef TASK3_4_FUNCS_H
#define TASK3_4_FUNCS_H

#ifndef __cplusplus
typedef unsigned char bool;
#define true ((bool)1)
#define false ((bool)0)
#endif /* __cplusplus */

#ifndef NULL
#define NULL (void*)0
#endif /* NULL */

#ifndef _SIZE_T_DEFINED
#ifdef  _WIN64
typedef unsigned long long int    size_t;
#else
typedef unsigned int   size_t;
#endif
#define _SIZE_T_DEFINED
#endif

/**
* @brief Get the length of a string.
* @param [in] str Null-terminated source string.
* @return Returns the number of characters in str, excluding the terminal NULL.
*/
size_t StrLen( const char* str );

/**
* @brief Append a string.
* @param [in, out] dest Null-terminated destination string.
* @param [in] src Null-terminated source string.
* @return Returns the destination string.
*/
char *StrCat( char *dest, const char *src );

/**
* @brief Convert integer to word form.
* @param [out] str Pointer to buffer for storing data.
* @param [in] num Integer number to convert.
*/
void NumToWord( char* buffer, char num);

#endif /* TASK3_4_FUNCS_H */