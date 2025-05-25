/* † MKKKKKS † */
/*!	@brief  Quick Path Parser
	@author  NullPopPo
	@sa  https://github.com/NullPopPoLab/MKKKKKS
*/
#ifndef QUICK_PATH_H__
#define QUICK_PATH_H__

#include "./quick_text.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct QPathInfo_ QPathInfo;

struct QPathInfo_{
	QTextRef scheme;
	QTextRef base;
	QTextRef route;
};

//! setting of split by backslash 
/*!	@note for Winfdows, set true
*/
extern bool g_qpath_backslashable;

#ifdef __cplusplus
extern "C" {
#endif

//! check a path is empty 
/*!	@return the path is empty.
*/
bool qpath_is_empty(const QPathInfo* src);

//! check a path is absolute 
/*!	@return the path is located absolutely.
	@note scheme is optional.
*/
bool qpath_is_absolute(const QPathInfo* src);

//! check a path is relative 
/*!	@return the path is relative.
	@note it means connectable to base directory.
*/
bool qpath_is_relative(const QPathInfo* src);

//! clear a QPathInfo 
void qpath_clear(QPathInfo* dst);

//! setup a QPathInfo 
/*!	@param dst  setup target
	@param path  source path
*/
void qpath_setup_q(QPathInfo* dst,const QTextRef* path);

//! extract extension from a path route
bool qpath_extension_q(QTextRef* dst,const QTextRef* src,bool polydot);
//! extract dirname from a path route
bool qpath_dirname_q(QTextRef* dst,const QTextRef* src);
//! extract filename from a path route
bool qpath_filename_q(QTextRef* dst,const QTextRef* src);
//! extract filename from a path route without extension
bool qpath_filename_noext_q(QTextRef* dst,const QTextRef* src,bool polydot);

void qpath_setup_c(QPathInfo* dst,const char* path);

bool qpath_extension_c(QTextRef* dst,const char* src,bool polydot);

bool qpath_dirname_c(QTextRef* dst,const char* src);

bool qpath_filename_c(QTextRef* dst,const char* src);

bool qpath_filename_noext_c(QTextRef* dst,const char* src,bool polydot);

#ifdef __cplusplus
}
#endif

#endif // QUICK_PATH_H__
