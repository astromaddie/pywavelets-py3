#ifndef __PYX_HAVE___pywt
#define __PYX_HAVE___pywt

struct WaveletObject;

/* "_pywt.pyx":213
 *     return __wfamily_list_long[:]
 * 
 * cdef public class Wavelet [type WaveletType, object WaveletObject]:             # <<<<<<<<<<<<<<
 *     """
 *     Wavelet(name, filter_bank=None) object describe properties of
 */
struct WaveletObject {
  PyObject_HEAD
  Wavelet *w;
  PyObject *name;
  PyObject *number;
};

#ifndef __PYX_HAVE_API___pywt

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

__PYX_EXTERN_C DL_IMPORT(PyTypeObject) WaveletType;

#endif /* !__PYX_HAVE_API___pywt */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC init_pywt(void);
#else
PyMODINIT_FUNC PyInit__pywt(void);
#endif

#endif /* !__PYX_HAVE___pywt */
