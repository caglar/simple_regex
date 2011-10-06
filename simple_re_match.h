/*
 * =====================================================================================
 *
 *       Filename:  simple_re_match.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/06/2011 01:19:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#ifndef SIMPLE_RE_MATCH
#define SIMPLE_RE_MATCH

int
match(char *regexp, char *text);

int
matchhere(char *regexp, char *text);

int 
matchstar(int c, char *regexp, char *text);

int
matchplus(int c, char *regexp, char *text);

#endif
