// -------------------------------------------------------------------------- //
// ftconfig.h

TYPE( FT_Int16  )
TYPE( FT_UInt16 )
TYPE( FT_Int32  )
TYPE( FT_UInt32 )

// -------------------------------------------------------------------------- //
// ftsystem.h

TYPE( FT_Memory           )
TYPE( FT_Alloc_Func       )
TYPE( FT_Free_Func        )
TYPE( FT_Realloc_Func     )
TYPE( FT_MemoryRec        )
TYPE( FT_Stream           )
TYPE( FT_StreamDesc       )
TYPE( FT_Stream_IoFunc    )
TYPE( FT_Stream_CloseFunc )
TYPE( FT_StreamRec        )

MEMBER_DATA( FT_MemoryRec,  user       )
MEMBER_FUNC( FT_MemoryRec,  alloc      )
MEMBER_FUNC( FT_MemoryRec,  free       )
MEMBER_FUNC( FT_MemoryRec,  realloc    )

MEMBER_DATA( FT_StreamDesc, val        )
MEMBER_DATA( FT_StreamDesc, ptr        )

MEMBER_DATA( FT_StreamRec,  base       )
MEMBER_DATA( FT_StreamRec,  size       )
MEMBER_DATA( FT_StreamRec,  pos        )
MEMBER_DATA( FT_StreamRec,  descriptor )
MEMBER_DATA( FT_StreamRec,  pathname   )
MEMBER_FUNC( FT_StreamRec,  read       )
MEMBER_FUNC( FT_StreamRec,  close      )
MEMBER_DATA( FT_StreamRec,  memory     )
MEMBER_DATA( FT_StreamRec,  cursor     )
MEMBER_DATA( FT_StreamRec,  limit      )

// -------------------------------------------------------------------------- //
// ftimage.h

VALUE( FT_PIXEL_MODE_NONE         )
VALUE( FT_PIXEL_MODE_MONO         )
VALUE( FT_PIXEL_MODE_GRAY         )
VALUE( FT_PIXEL_MODE_GRAY2        )
VALUE( FT_PIXEL_MODE_GRAY4        )
VALUE( FT_PIXEL_MODE_LCD          )
VALUE( FT_PIXEL_MODE_LCD_V        )
VALUE( FT_PIXEL_MODE_BGRA         )
VALUE( FT_PIXEL_MODE_MAX          )

VALUE( FT_GLYPH_FORMAT_NONE       )
VALUE( FT_GLYPH_FORMAT_COMPOSITE  )
VALUE( FT_GLYPH_FORMAT_BITMAP     )
VALUE( FT_GLYPH_FORMAT_OUTLINE    )
VALUE( FT_GLYPH_FORMAT_PLOTTER    )

VALUE( FT_OUTLINE_CONTOURS_MAX    )
VALUE( FT_OUTLINE_POINTS_MAX      )

VALUE( FT_OUTLINE_NONE            )
VALUE( FT_OUTLINE_OWNER           )
VALUE( FT_OUTLINE_EVEN_ODD_FILL   )
VALUE( FT_OUTLINE_REVERSE_FILL    )
VALUE( FT_OUTLINE_IGNORE_DROPOUTS )
VALUE( FT_OUTLINE_SMART_DROPOUTS  )
VALUE( FT_OUTLINE_INCLUDE_STUBS   )
VALUE( FT_OUTLINE_OVERLAP         )
VALUE( FT_OUTLINE_HIGH_PRECISION  )
VALUE( FT_OUTLINE_SINGLE_PASS     )

VALUE( FT_CURVE_TAG_ON            )
VALUE( FT_CURVE_TAG_CONIC         )
VALUE( FT_CURVE_TAG_CUBIC         )
VALUE( FT_CURVE_TAG_HAS_SCANMODE  )
VALUE( FT_CURVE_TAG_TOUCH_X       )
VALUE( FT_CURVE_TAG_TOUCH_Y       )
VALUE( FT_CURVE_TAG_TOUCH_BOTH    )

VALUE( FT_RASTER_FLAG_DEFAULT     )
VALUE( FT_RASTER_FLAG_AA          )
VALUE( FT_RASTER_FLAG_DIRECT      )
VALUE( FT_RASTER_FLAG_CLIP        )
VALUE( FT_RASTER_FLAG_SDF         )

TYPE( FT_Pixel_Mode           )
TYPE( FT_Glyph_Format         )
TYPE( FT_Pos                  )
TYPE( FT_Vector               )
TYPE( FT_BBox                 )
TYPE( FT_Bitmap               )
TYPE( FT_Outline              )
TYPE( FT_Outline_MoveToFunc   )
TYPE( FT_Outline_LineToFunc   )
TYPE( FT_Outline_ConicToFunc  )
TYPE( FT_Outline_CubicToFunc  )
TYPE( FT_Outline_MoveTo_Func  )
TYPE( FT_Outline_LineTo_Func  )
TYPE( FT_Outline_ConicTo_Func )
TYPE( FT_Outline_CubicTo_Func )
TYPE( FT_Outline_Funcs        )
TYPE( FT_Raster               )
TYPE( FT_Span                 )
TYPE( FT_SpanFunc             )
TYPE( FT_Raster_Span_Func     )
TYPE( FT_Raster_BitTest_Func  )
TYPE( FT_Raster_BitSet_Func   )
TYPE( FT_Raster_Params        )
TYPE( FT_Raster_NewFunc       )
TYPE( FT_Raster_DoneFunc      )
TYPE( FT_Raster_ResetFunc     )
TYPE( FT_Raster_SetModeFunc   )
TYPE( FT_Raster_RenderFunc    )
TYPE( FT_Raster_New_Func      )
TYPE( FT_Raster_Done_Func     )
TYPE( FT_Raster_Reset_Func    )
TYPE( FT_Raster_Set_Mode_Func )
TYPE( FT_Raster_Render_Func   )
TYPE( FT_Raster_Funcs         )

MEMBER_DATA( FT_Vector,        x               )
MEMBER_DATA( FT_Vector,        y               )

MEMBER_DATA( FT_BBox,          xMin            )
MEMBER_DATA( FT_BBox,          yMin            )
MEMBER_DATA( FT_BBox,          xMax            )
MEMBER_DATA( FT_BBox,          yMax            )

MEMBER_DATA( FT_Bitmap,        rows            )
MEMBER_DATA( FT_Bitmap,        width           )
MEMBER_DATA( FT_Bitmap,        pitch           )
MEMBER_DATA( FT_Bitmap,        buffer          )
MEMBER_DATA( FT_Bitmap,        num_grays       )
MEMBER_DATA( FT_Bitmap,        pixel_mode      )
MEMBER_DATA( FT_Bitmap,        palette_mode    )
MEMBER_DATA( FT_Bitmap,        palette         )

MEMBER_DATA( FT_Outline,       n_contours      )
MEMBER_DATA( FT_Outline,       n_points        )
MEMBER_DATA( FT_Outline,       points          )
MEMBER_DATA( FT_Outline,       tags            )
MEMBER_DATA( FT_Outline,       contours        )
MEMBER_DATA( FT_Outline,       flags           )

MEMBER_FUNC( FT_Outline_Funcs, move_to         )
MEMBER_FUNC( FT_Outline_Funcs, line_to         )
MEMBER_FUNC( FT_Outline_Funcs, conic_to        )
MEMBER_FUNC( FT_Outline_Funcs, cubic_to        )
MEMBER_DATA( FT_Outline_Funcs, shift           )
MEMBER_DATA( FT_Outline_Funcs, delta           )

MEMBER_DATA( FT_Span,          x               )
MEMBER_DATA( FT_Span,          len             )
MEMBER_DATA( FT_Span,          coverage        )

MEMBER_DATA( FT_Raster_Params, target          )
MEMBER_DATA( FT_Raster_Params, source          )
MEMBER_DATA( FT_Raster_Params, flags           )
MEMBER_FUNC( FT_Raster_Params, gray_spans      )
MEMBER_FUNC( FT_Raster_Params, black_spans     )
MEMBER_FUNC( FT_Raster_Params, bit_test        )
MEMBER_FUNC( FT_Raster_Params, bit_set         )
MEMBER_DATA( FT_Raster_Params, user            )
MEMBER_DATA( FT_Raster_Params, clip_box        )

MEMBER_DATA( FT_Raster_Funcs,  glyph_format    )
MEMBER_FUNC( FT_Raster_Funcs,  raster_new      )
MEMBER_FUNC( FT_Raster_Funcs,  raster_reset    )
MEMBER_FUNC( FT_Raster_Funcs,  raster_set_mode )
MEMBER_FUNC( FT_Raster_Funcs,  raster_render   )
MEMBER_FUNC( FT_Raster_Funcs,  raster_done     )

// -------------------------------------------------------------------------- //
// fttypes.h

TYPE( FT_Bool              )
TYPE( FT_FWord             )
TYPE( FT_UFWord            )
TYPE( FT_Char              )
TYPE( FT_Byte              )
TYPE( FT_Bytes             )
TYPE( FT_Tag               )
TYPE( FT_String            )
TYPE( FT_Short             )
TYPE( FT_UShort            )
TYPE( FT_Int               )
TYPE( FT_UInt              )
TYPE( FT_Long              )
TYPE( FT_ULong             )
TYPE( FT_F2Dot14           )
TYPE( FT_F26Dot6           )
TYPE( FT_Fixed             )
TYPE( FT_Error             )
TYPE( FT_Pointer           )
TYPE( FT_UnitVector        )
TYPE( FT_Matrix            )
TYPE( FT_Data              )
TYPE( FT_Generic_Finalizer )
TYPE( FT_Generic           )
TYPE( FT_ListNode          )
TYPE( FT_List              )
TYPE( FT_ListNodeRec       )
TYPE( FT_ListRec           )

MEMBER_DATA( FT_UnitVector,  x         )
MEMBER_DATA( FT_UnitVector,  y         )

MEMBER_DATA( FT_Matrix,      xx        )
MEMBER_DATA( FT_Matrix,      xy        )
MEMBER_DATA( FT_Matrix,      yx        )
MEMBER_DATA( FT_Matrix,      yy        )

MEMBER_DATA( FT_Data,        ptr       )
MEMBER_DATA( FT_Data,        length    )

MEMBER_DATA( FT_Generic,     data      )
MEMBER_FUNC( FT_Generic,     finalizer )

MEMBER_DATA( FT_ListNodeRec, prev      )
MEMBER_DATA( FT_ListNodeRec, next      )
MEMBER_DATA( FT_ListNodeRec, data      )

MEMBER_DATA( FT_ListRec,     head      )
MEMBER_DATA( FT_ListRec,     tail      )

// -------------------------------------------------------------------------- //
// fterrdef.h

VALUE( FT_Err_Ok                            )
VALUE( FT_Err_Cannot_Open_Resource          )
VALUE( FT_Err_Unknown_File_Format           )
VALUE( FT_Err_Invalid_File_Format           )
VALUE( FT_Err_Invalid_Version               )
VALUE( FT_Err_Lower_Module_Version          )
VALUE( FT_Err_Invalid_Argument              )
VALUE( FT_Err_Unimplemented_Feature         )
VALUE( FT_Err_Invalid_Table                 )
VALUE( FT_Err_Invalid_Offset                )
VALUE( FT_Err_Array_Too_Large               )
VALUE( FT_Err_Missing_Module                )
VALUE( FT_Err_Missing_Property              )
VALUE( FT_Err_Invalid_Glyph_Index           )
VALUE( FT_Err_Invalid_Character_Code        )
VALUE( FT_Err_Invalid_Glyph_Format          )
VALUE( FT_Err_Cannot_Render_Glyph           )
VALUE( FT_Err_Invalid_Outline               )
VALUE( FT_Err_Invalid_Composite             )
VALUE( FT_Err_Too_Many_Hints                )
VALUE( FT_Err_Invalid_Pixel_Size            )
VALUE( FT_Err_Invalid_Handle                )
VALUE( FT_Err_Invalid_Library_Handle        )
VALUE( FT_Err_Invalid_Driver_Handle         )
VALUE( FT_Err_Invalid_Face_Handle           )
VALUE( FT_Err_Invalid_Size_Handle           )
VALUE( FT_Err_Invalid_Slot_Handle           )
VALUE( FT_Err_Invalid_CharMap_Handle        )
VALUE( FT_Err_Invalid_Cache_Handle          )
VALUE( FT_Err_Invalid_Stream_Handle         )
VALUE( FT_Err_Too_Many_Drivers              )
VALUE( FT_Err_Too_Many_Extensions           )
VALUE( FT_Err_Out_Of_Memory                 )
VALUE( FT_Err_Unlisted_Object               )
VALUE( FT_Err_Cannot_Open_Stream            )
VALUE( FT_Err_Invalid_Stream_Seek           )
VALUE( FT_Err_Invalid_Stream_Skip           )
VALUE( FT_Err_Invalid_Stream_Read           )
VALUE( FT_Err_Invalid_Stream_Operation      )
VALUE( FT_Err_Invalid_Frame_Operation       )
VALUE( FT_Err_Nested_Frame_Access           )
VALUE( FT_Err_Invalid_Frame_Read            )
VALUE( FT_Err_Raster_Uninitialized          )
VALUE( FT_Err_Raster_Corrupted              )
VALUE( FT_Err_Raster_Overflow               )
VALUE( FT_Err_Raster_Negative_Height        )
VALUE( FT_Err_Too_Many_Caches               )
VALUE( FT_Err_Invalid_Opcode                )
VALUE( FT_Err_Too_Few_Arguments             )
VALUE( FT_Err_Stack_Overflow                )
VALUE( FT_Err_Code_Overflow                 )
VALUE( FT_Err_Bad_Argument                  )
VALUE( FT_Err_Divide_By_Zero                )
VALUE( FT_Err_Invalid_Reference             )
VALUE( FT_Err_Debug_OpCode                  )
VALUE( FT_Err_ENDF_In_Exec_Stream           )
VALUE( FT_Err_Nested_DEFS                   )
VALUE( FT_Err_Invalid_CodeRange             )
VALUE( FT_Err_Execution_Too_Long            )
VALUE( FT_Err_Too_Many_Function_Defs        )
VALUE( FT_Err_Too_Many_Instruction_Defs     )
VALUE( FT_Err_Table_Missing                 )
VALUE( FT_Err_Horiz_Header_Missing          )
VALUE( FT_Err_Locations_Missing             )
VALUE( FT_Err_Name_Table_Missing            )
VALUE( FT_Err_CMap_Table_Missing            )
VALUE( FT_Err_Hmtx_Table_Missing            )
VALUE( FT_Err_Post_Table_Missing            )
VALUE( FT_Err_Invalid_Horiz_Metrics         )
VALUE( FT_Err_Invalid_CharMap_Format        )
VALUE( FT_Err_Invalid_PPem                  )
VALUE( FT_Err_Invalid_Vert_Metrics          )
VALUE( FT_Err_Could_Not_Find_Context        )
VALUE( FT_Err_Invalid_Post_Table_Format     )
VALUE( FT_Err_Invalid_Post_Table            )
VALUE( FT_Err_DEF_In_Glyf_Bytecode          )
VALUE( FT_Err_Missing_Bitmap                )
VALUE( FT_Err_Syntax_Error                  )
VALUE( FT_Err_Stack_Underflow               )
VALUE( FT_Err_Ignore                        )
VALUE( FT_Err_No_Unicode_Glyph_Name         )
VALUE( FT_Err_Glyph_Too_Big                 )
VALUE( FT_Err_Missing_Startfont_Field       )
VALUE( FT_Err_Missing_Font_Field            )
VALUE( FT_Err_Missing_Size_Field            )
VALUE( FT_Err_Missing_Fontboundingbox_Field )
VALUE( FT_Err_Missing_Chars_Field           )
VALUE( FT_Err_Missing_Startchar_Field       )
VALUE( FT_Err_Missing_Encoding_Field        )
VALUE( FT_Err_Missing_Bbx_Field             )
VALUE( FT_Err_Bbx_Too_Big                   )
VALUE( FT_Err_Corrupted_Font_Header         )
VALUE( FT_Err_Corrupted_Font_Glyphs         )

// -------------------------------------------------------------------------- //
// freetype.h

VALUE( FT_ENCODING_NONE                       )
VALUE( FT_ENCODING_MS_SYMBOL                  )
VALUE( FT_ENCODING_UNICODE                    )
VALUE( FT_ENCODING_SJIS                       )
VALUE( FT_ENCODING_PRC                        )
VALUE( FT_ENCODING_BIG5                       )
VALUE( FT_ENCODING_WANSUNG                    )
VALUE( FT_ENCODING_JOHAB                      )
VALUE( FT_ENCODING_GB2312                     )
VALUE( FT_ENCODING_MS_SJIS                    )
VALUE( FT_ENCODING_MS_GB2312                  )
VALUE( FT_ENCODING_MS_BIG5                    )
VALUE( FT_ENCODING_MS_WANSUNG                 )
VALUE( FT_ENCODING_MS_JOHAB                   )
VALUE( FT_ENCODING_ADOBE_STANDARD             )
VALUE( FT_ENCODING_ADOBE_EXPERT               )
VALUE( FT_ENCODING_ADOBE_CUSTOM               )
VALUE( FT_ENCODING_ADOBE_LATIN_1              )
VALUE( FT_ENCODING_OLD_LATIN_2                )
VALUE( FT_ENCODING_APPLE_ROMAN                )

VALUE( FT_SIZE_REQUEST_TYPE_NOMINAL           )
VALUE( FT_SIZE_REQUEST_TYPE_REAL_DIM          )
VALUE( FT_SIZE_REQUEST_TYPE_BBOX              )
VALUE( FT_SIZE_REQUEST_TYPE_CELL              )
VALUE( FT_SIZE_REQUEST_TYPE_SCALES            )
VALUE( FT_SIZE_REQUEST_TYPE_MAX               )

VALUE( FT_RENDER_MODE_NORMAL                  )
VALUE( FT_RENDER_MODE_LIGHT                   )
VALUE( FT_RENDER_MODE_MONO                    )
VALUE( FT_RENDER_MODE_LCD                     )
VALUE( FT_RENDER_MODE_LCD_V                   )
VALUE( FT_RENDER_MODE_SDF                     )
VALUE( FT_RENDER_MODE_MAX                     )

VALUE( FT_KERNING_DEFAULT                     )
VALUE( FT_KERNING_UNFITTED                    )
VALUE( FT_KERNING_UNSCALED                    )

VALUE( FT_FACE_FLAG_SCALABLE                  )
VALUE( FT_FACE_FLAG_FIXED_SIZES               )
VALUE( FT_FACE_FLAG_FIXED_WIDTH               )
VALUE( FT_FACE_FLAG_SFNT                      )
VALUE( FT_FACE_FLAG_HORIZONTAL                )
VALUE( FT_FACE_FLAG_VERTICAL                  )
VALUE( FT_FACE_FLAG_KERNING                   )
VALUE( FT_FACE_FLAG_FAST_GLYPHS               )
VALUE( FT_FACE_FLAG_MULTIPLE_MASTERS          )
VALUE( FT_FACE_FLAG_GLYPH_NAMES               )
VALUE( FT_FACE_FLAG_EXTERNAL_STREAM           )
VALUE( FT_FACE_FLAG_HINTER                    )
VALUE( FT_FACE_FLAG_CID_KEYED                 )
VALUE( FT_FACE_FLAG_TRICKY                    )
VALUE( FT_FACE_FLAG_COLOR                     )
VALUE( FT_FACE_FLAG_VARIATION                 )

VALUE( FT_STYLE_FLAG_ITALIC                   )
VALUE( FT_STYLE_FLAG_BOLD                     )

VALUE( FT_OPEN_MEMORY                         )
VALUE( FT_OPEN_STREAM                         )
VALUE( FT_OPEN_PATHNAME                       )
VALUE( FT_OPEN_DRIVER                         )
VALUE( FT_OPEN_PARAMS                         )

VALUE( FT_LOAD_DEFAULT                        )
VALUE( FT_LOAD_NO_SCALE                       )
VALUE( FT_LOAD_NO_HINTING                     )
VALUE( FT_LOAD_RENDER                         )
VALUE( FT_LOAD_NO_BITMAP                      )
VALUE( FT_LOAD_VERTICAL_LAYOUT                )
VALUE( FT_LOAD_FORCE_AUTOHINT                 )
VALUE( FT_LOAD_CROP_BITMAP                    )
VALUE( FT_LOAD_PEDANTIC                       )
VALUE( FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH    )
VALUE( FT_LOAD_NO_RECURSE                     )
VALUE( FT_LOAD_IGNORE_TRANSFORM               )
VALUE( FT_LOAD_MONOCHROME                     )
VALUE( FT_LOAD_LINEAR_DESIGN                  )
VALUE( FT_LOAD_NO_AUTOHINT                    )
VALUE( FT_LOAD_COLOR                          )
VALUE( FT_LOAD_COMPUTE_METRICS                )
VALUE( FT_LOAD_BITMAP_METRICS_ONLY            )
VALUE( FT_LOAD_ADVANCE_ONLY                   )
VALUE( FT_LOAD_SBITS_ONLY                     )

VALUE( FT_LOAD_TARGET_NORMAL                  )
VALUE( FT_LOAD_TARGET_LIGHT                   )
VALUE( FT_LOAD_TARGET_MONO                    )
VALUE( FT_LOAD_TARGET_LCD                     )
VALUE( FT_LOAD_TARGET_LCD_V                   )

VALUE( FT_SUBGLYPH_FLAG_ARGS_ARE_WORDS        )
VALUE( FT_SUBGLYPH_FLAG_ARGS_ARE_XY_VALUES    )
VALUE( FT_SUBGLYPH_FLAG_ROUND_XY_TO_GRID      )
VALUE( FT_SUBGLYPH_FLAG_SCALE                 )
VALUE( FT_SUBGLYPH_FLAG_XY_SCALE              )
VALUE( FT_SUBGLYPH_FLAG_2X2                   )
VALUE( FT_SUBGLYPH_FLAG_USE_MY_METRICS        )

VALUE( FT_FSTYPE_INSTALLABLE_EMBEDDING        )
VALUE( FT_FSTYPE_RESTRICTED_LICENSE_EMBEDDING )
VALUE( FT_FSTYPE_PREVIEW_AND_PRINT_EMBEDDING  )
VALUE( FT_FSTYPE_EDITABLE_EMBEDDING           )
VALUE( FT_FSTYPE_NO_SUBSETTING                )
VALUE( FT_FSTYPE_BITMAP_EMBEDDING_ONLY        )

TYPE( FT_Encoding          )
TYPE( FT_Size_Request_Type )
TYPE( FT_Render_Mode       )
TYPE( FT_Kerning_Mode      )
TYPE( FT_Glyph_Metrics     )
TYPE( FT_Bitmap_Size       )
TYPE( FT_Library           )
TYPE( FT_Module            )
TYPE( FT_Driver            )
TYPE( FT_Renderer          )
TYPE( FT_Face              )
TYPE( FT_Size              )
TYPE( FT_GlyphSlot         )
TYPE( FT_CharMap           )
TYPE( FT_CharMapRec        )
TYPE( FT_Face_Internal     )
TYPE( FT_FaceRec           )
TYPE( FT_Size_Internal     )
TYPE( FT_Size_Metrics      )
TYPE( FT_SizeRec           )
TYPE( FT_SubGlyph          )
TYPE( FT_Slot_Internal     )
TYPE( FT_GlyphSlotRec      )
TYPE( FT_Parameter         )
TYPE( FT_Open_Args         )
TYPE( FT_Size_Request      )
TYPE( FT_Size_RequestRec   )

MEMBER_DATA( FT_Glyph_Metrics,   width               )
MEMBER_DATA( FT_Glyph_Metrics,   height              )
MEMBER_DATA( FT_Glyph_Metrics,   horiBearingX        )
MEMBER_DATA( FT_Glyph_Metrics,   horiBearingY        )
MEMBER_DATA( FT_Glyph_Metrics,   horiAdvance         )
MEMBER_DATA( FT_Glyph_Metrics,   vertBearingX        )
MEMBER_DATA( FT_Glyph_Metrics,   vertBearingY        )
MEMBER_DATA( FT_Glyph_Metrics,   vertAdvance         )

MEMBER_DATA( FT_Bitmap_Size,     height              )
MEMBER_DATA( FT_Bitmap_Size,     width               )
MEMBER_DATA( FT_Bitmap_Size,     size                )
MEMBER_DATA( FT_Bitmap_Size,     x_ppem              )
MEMBER_DATA( FT_Bitmap_Size,     y_ppem              )

MEMBER_DATA( FT_CharMapRec,      face                )
MEMBER_DATA( FT_CharMapRec,      encoding            )
MEMBER_DATA( FT_CharMapRec,      platform_id         )
MEMBER_DATA( FT_CharMapRec,      encoding_id         )

MEMBER_DATA( FT_FaceRec,         num_faces           )
MEMBER_DATA( FT_FaceRec,         face_index          )
MEMBER_DATA( FT_FaceRec,         face_flags          )
MEMBER_DATA( FT_FaceRec,         style_flags         )
MEMBER_DATA( FT_FaceRec,         num_glyphs          )
MEMBER_DATA( FT_FaceRec,         family_name         )
MEMBER_DATA( FT_FaceRec,         style_name          )
MEMBER_DATA( FT_FaceRec,         num_fixed_sizes     )
MEMBER_DATA( FT_FaceRec,         available_sizes     )
MEMBER_DATA( FT_FaceRec,         num_charmaps        )
MEMBER_DATA( FT_FaceRec,         charmaps            )
MEMBER_DATA( FT_FaceRec,         generic             )
MEMBER_DATA( FT_FaceRec,         bbox                )
MEMBER_DATA( FT_FaceRec,         units_per_EM        )
MEMBER_DATA( FT_FaceRec,         ascender            )
MEMBER_DATA( FT_FaceRec,         descender           )
MEMBER_DATA( FT_FaceRec,         height              )
MEMBER_DATA( FT_FaceRec,         max_advance_width   )
MEMBER_DATA( FT_FaceRec,         max_advance_height  )
MEMBER_DATA( FT_FaceRec,         underline_position  )
MEMBER_DATA( FT_FaceRec,         underline_thickness )
MEMBER_DATA( FT_FaceRec,         glyph               )
MEMBER_DATA( FT_FaceRec,         size                )
MEMBER_DATA( FT_FaceRec,         charmap             )
MEMBER_DATA( FT_FaceRec,         driver              )
MEMBER_DATA( FT_FaceRec,         memory              )
MEMBER_DATA( FT_FaceRec,         stream              )
MEMBER_DATA( FT_FaceRec,         sizes_list          )
MEMBER_DATA( FT_FaceRec,         autohint            )
MEMBER_DATA( FT_FaceRec,         extensions          )
MEMBER_DATA( FT_FaceRec,         internal            )

MEMBER_DATA( FT_Size_Metrics,    x_ppem              )
MEMBER_DATA( FT_Size_Metrics,    y_ppem              )
MEMBER_DATA( FT_Size_Metrics,    x_scale             )
MEMBER_DATA( FT_Size_Metrics,    y_scale             )
MEMBER_DATA( FT_Size_Metrics,    ascender            )
MEMBER_DATA( FT_Size_Metrics,    descender           )
MEMBER_DATA( FT_Size_Metrics,    height              )
MEMBER_DATA( FT_Size_Metrics,    max_advance         )

MEMBER_DATA( FT_SizeRec,         face                )
MEMBER_DATA( FT_SizeRec,         generic             )
MEMBER_DATA( FT_SizeRec,         metrics             )
MEMBER_DATA( FT_SizeRec,         internal            )

MEMBER_DATA( FT_GlyphSlotRec,    lib                 )
MEMBER_DATA( FT_GlyphSlotRec,    face                )
MEMBER_DATA( FT_GlyphSlotRec,    next                )
MEMBER_DATA( FT_GlyphSlotRec,    glyph_index         )
MEMBER_DATA( FT_GlyphSlotRec,    generic             )
MEMBER_DATA( FT_GlyphSlotRec,    metrics             )
MEMBER_DATA( FT_GlyphSlotRec,    linearHoriAdvance   )
MEMBER_DATA( FT_GlyphSlotRec,    linearVertAdvance   )
MEMBER_DATA( FT_GlyphSlotRec,    advance             )
MEMBER_DATA( FT_GlyphSlotRec,    format              )
MEMBER_DATA( FT_GlyphSlotRec,    bitmap              )
MEMBER_DATA( FT_GlyphSlotRec,    bitmap_left         )
MEMBER_DATA( FT_GlyphSlotRec,    bitmap_top          )
MEMBER_DATA( FT_GlyphSlotRec,    outline             )
MEMBER_DATA( FT_GlyphSlotRec,    num_subglyphs       )
MEMBER_DATA( FT_GlyphSlotRec,    subglyphs           )
MEMBER_DATA( FT_GlyphSlotRec,    control_data        )
MEMBER_DATA( FT_GlyphSlotRec,    control_len         )
MEMBER_DATA( FT_GlyphSlotRec,    lsb_delta           )
MEMBER_DATA( FT_GlyphSlotRec,    rsb_delta           )
MEMBER_DATA( FT_GlyphSlotRec,    other               )
MEMBER_DATA( FT_GlyphSlotRec,    internal            )

MEMBER_DATA( FT_Parameter,       tag                 )
MEMBER_DATA( FT_Parameter,       data                )

MEMBER_DATA( FT_Open_Args,       flags               )
MEMBER_DATA( FT_Open_Args,       memory_base         )
MEMBER_DATA( FT_Open_Args,       memory_size         )
MEMBER_DATA( FT_Open_Args,       pathname            )
MEMBER_DATA( FT_Open_Args,       stream              )
MEMBER_DATA( FT_Open_Args,       driver              )
MEMBER_DATA( FT_Open_Args,       num_params          )
MEMBER_DATA( FT_Open_Args,       params              )

MEMBER_DATA( FT_Size_RequestRec, typ                 )
MEMBER_DATA( FT_Size_RequestRec, width               )
MEMBER_DATA( FT_Size_RequestRec, height              )
MEMBER_DATA( FT_Size_RequestRec, horiResolution      )
MEMBER_DATA( FT_Size_RequestRec, vertResolution      )
