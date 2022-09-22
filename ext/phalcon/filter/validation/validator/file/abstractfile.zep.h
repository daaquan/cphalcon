
extern zend_class_entry *phalcon_filter_validation_validator_file_abstractfile_ce;

ZEPHIR_INIT_CLASS(Phalcon_Filter_Validation_Validator_File_AbstractFile);

PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, checkUpload);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, checkUploadIsEmpty);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, checkUploadIsValid);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, checkUploadMaxSize);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, getFileSizeInBytes);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, getMessageFileEmpty);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, getMessageIniSize);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, getMessageValid);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, isAllowEmpty);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, setMessageFileEmpty);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, setMessageIniSize);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, setMessageValid);
PHP_METHOD(Phalcon_Filter_Validation_Validator_File_AbstractFile, checkIsUploadedFile);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_checkupload, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, validation, Phalcon\\Filter\\Validation, 0)
	ZEND_ARG_INFO(0, field)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_checkuploadisempty, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, validation, Phalcon\\Filter\\Validation, 0)
	ZEND_ARG_INFO(0, field)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_checkuploadisvalid, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, validation, Phalcon\\Filter\\Validation, 0)
	ZEND_ARG_INFO(0, field)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_checkuploadmaxsize, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, validation, Phalcon\\Filter\\Validation, 0)
	ZEND_ARG_INFO(0, field)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_getfilesizeinbytes, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_getmessagefileempty, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_getmessageinisize, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_getmessagevalid, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_isallowempty, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, validation, Phalcon\\Filter\\Validation, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_setmessagefileempty, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_setmessageinisize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_setmessagevalid, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_filter_validation_validator_file_abstractfile_checkisuploadedfile, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_filter_validation_validator_file_abstractfile_method_entry) {
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, checkUpload, arginfo_phalcon_filter_validation_validator_file_abstractfile_checkupload, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, checkUploadIsEmpty, arginfo_phalcon_filter_validation_validator_file_abstractfile_checkuploadisempty, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, checkUploadIsValid, arginfo_phalcon_filter_validation_validator_file_abstractfile_checkuploadisvalid, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, checkUploadMaxSize, arginfo_phalcon_filter_validation_validator_file_abstractfile_checkuploadmaxsize, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, getFileSizeInBytes, arginfo_phalcon_filter_validation_validator_file_abstractfile_getfilesizeinbytes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, getMessageFileEmpty, arginfo_phalcon_filter_validation_validator_file_abstractfile_getmessagefileempty, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, getMessageIniSize, arginfo_phalcon_filter_validation_validator_file_abstractfile_getmessageinisize, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, getMessageValid, arginfo_phalcon_filter_validation_validator_file_abstractfile_getmessagevalid, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, isAllowEmpty, arginfo_phalcon_filter_validation_validator_file_abstractfile_isallowempty, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, setMessageFileEmpty, arginfo_phalcon_filter_validation_validator_file_abstractfile_setmessagefileempty, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, setMessageIniSize, arginfo_phalcon_filter_validation_validator_file_abstractfile_setmessageinisize, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, setMessageValid, arginfo_phalcon_filter_validation_validator_file_abstractfile_setmessagevalid, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Filter_Validation_Validator_File_AbstractFile, checkIsUploadedFile, arginfo_phalcon_filter_validation_validator_file_abstractfile_checkisuploadedfile, ZEND_ACC_PROTECTED)
	PHP_FE_END
};
