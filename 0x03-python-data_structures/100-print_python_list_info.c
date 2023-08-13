#include <stdio.h>
#include <stdlib.h>
#define PY_SSIZE_T_CLEAN
#include <Python.h>

/**
 * print_python_list_info - prints basic info about python files
 * @p: pointer to the list
 * Return: info about python files
 */

void print_python_list_info(PyObject *p)
{
	size_t size, i = 0;
	PyObject *obj;

	size = PyList_Size(p);
	printf("[*] Size of the Python List = %zu\n", size);
	printf("[*] Allocated = %zu\n", ((PyListObject *)p)->allocated);
	while (i < size)
	{
		obj = PyList_GET_ITEM(p, i);
		printf("Element %zu: %s\n", i, Py_TYPE(obj)->tp_name);
		i++;
	}
}
