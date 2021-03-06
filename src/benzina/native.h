/* Include Guard */
#ifndef SRC_BENZINA_NATIVE_H
#define SRC_BENZINA_NATIVE_H


/**
 * Includes
 */

#define  PY_SSIZE_T_CLEAN     /* So we get Py_ssize_t args. */
#include <Python.h>           /* Because of "reasons", the Python header must be first. */
#include "benzina/benzina.h"
#include "benzina/plugins/nvdecode.h"



/* Defines */




/* Extern "C" Guard */
#ifdef __cplusplus
extern "C" {
#endif



/* Data Structure Definitions */

/**
 * @brief Python BenzinaDatasetCore object.
 */

typedef struct{
    PyObject_HEAD
    BENZINA_DATASET* dataset;
} BenzinaDatasetCore;

/**
 * @brief Python BenzinaPluginNvdecodeCore object.
 */

typedef struct {
	PyObject_HEAD
	void* pluginHandle;
	BENZINA_PLUGIN_NVDECODE_VTABLE* v;
	BenzinaDatasetCore* datasetCore;
	PyObject* bufferObj;
	void* ctx;
} BenzinaPluginNvdecodeCore;



/* End Extern "C" and Include Guard */
#ifdef __cplusplus
}
#endif
#endif

