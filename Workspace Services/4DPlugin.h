/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Workspace Services
 #	author : miyako
 #	2016/01/27
 #
 # --------------------------------------------------------------------------------*/



// --- Finder
void FINDER_Perform_operation(sLONG_PTR *pResult, PackagePtr pParams);
void FINDER_Get_icon_for_file_type(sLONG_PTR *pResult, PackagePtr pParams);

// --- Application
void APPLICATION_Get_path(sLONG_PTR *pResult, PackagePtr pParams);
void APPLICATION_Launch(sLONG_PTR *pResult, PackagePtr pParams);
void APPLICATION_Launch_paths(sLONG_PTR *pResult, PackagePtr pParams);

// --- File
void FILE_Get_localized_name(sLONG_PTR *pResult, PackagePtr pParams);
void FILE_Open_with_application(sLONG_PTR *pResult, PackagePtr pParams);
void FILE_Get_application_name(sLONG_PTR *pResult, PackagePtr pParams);
void FILE_SET_ICON(sLONG_PTR *pResult, PackagePtr pParams);
void FILE_Get_icon(sLONG_PTR *pResult, PackagePtr pParams);

// --- Dock
void DOCK_SET_BADGE_LABEL(sLONG_PTR *pResult, PackagePtr pParams);
void DOCK_Get_icon(sLONG_PTR *pResult, PackagePtr pParams);
void DOCK_Get_badge_label(sLONG_PTR *pResult, PackagePtr pParams);
void DOCK_SET_ICON(sLONG_PTR *pResult, PackagePtr pParams);

// --- Full Screen (QuickTime)
void FULL_SCREEN_BEGIN(sLONG_PTR *pResult, PackagePtr pParams);
void FULL_SCREEN_END(void);

// --- Folder
void FOLDER_GET_CONTENTS(sLONG_PTR *pResult, PackagePtr pParams);
void FOLDER_GET_SUBPATHS(sLONG_PTR *pResult, PackagePtr pParams);

#define PathTypeHFS     0
#define PathTypePOSIX   1
#define PathTypeURL     2

#define FileOSType      0
#define FileTypeUTI     1
#define FileExtension	2
#define FileTypeMIME    3

#define OperationMove       0
#define OperationCopy       1
#define OperationLink       2
#define OperationCompress   3
#define OperationDecompress 4
#define OperationEncrypt    5
#define OperationDecrypt    6
#define OperationDestroy    7
#define OperationRecycle    8
#define OperationDuplicate  9