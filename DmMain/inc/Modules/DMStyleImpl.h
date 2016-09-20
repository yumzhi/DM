//-------------------------------------------------------
// Copyright (c) DuiMagic
// All rights reserved.
// 
// File Name: DMStyleImpl.h 
// File Des: 
// File Summary: 
// Cur Version: 1.0
// Author:
// Create Data:
// History:
// 		<Author>	<Time>		<Version>	  <Des>
//      guoyou		2015-1-29	1.0			
//-------------------------------------------------------
#pragma once

namespace DMAttr
{
	/// <summary>
	///		<see cref="DM::DUIWindow"/>��style xml���Զ���
	/// </summary>
	class DUIStyleAttr
	{
	public:
		static wchar_t* STRING_id;											///< styleID,�൱�ڴ��ڵ�name��Ψһ��ʶ,ʾ��:id="style"
		static wchar_t* SKIN_skin;											///< ���ڵ�style����ͼ,ʾ��:skin="checkbox"
		static wchar_t* SKIN_ncskin;										///< ���ڵ�styleNC����ͼ,����������ncmarginʱ��Ч,ʾ��:ncskin="dui_frame"
		static wchar_t* RECT_ncmargin;                                      ///< ���ڵ�style�ǿͻ����ı߾�,ʾ��:ncmargin="2,2,2,2"
		static wchar_t* STRING_cursor;                                      ///< ���ڵ�styleĬ�Ϲ��,ʾ��:cursor="hand"
		static wchar_t* COLOR_clrbg;                                        ///< ���ڵ�styleĬ�ϱ���ɫ,�ڱ���ͼΪ��ʱʹ��,ʾ��:clrbg="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrbghover;                                   ///< ���ڵ�styleĬ��hover����ɫ,�ڱ���ͼΪ��ʱʹ��,ʾ��:clrbghover="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrbgpush;                                    ///< ���ڵ�styleĬ��push����ɫ,�ڱ���ͼΪ��ʱʹ��,ʾ��:clrbgpush="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrbgdisable;                                 ///< ���ڵ�styleĬ��disable����ɫ,�ڱ���ͼΪ��ʱʹ��,ʾ��:clrbgdisable="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrbgnoactive;                                ///< ���ڵ�styleĬ��noactive����ɫ,�ڱ���ͼΪ��ʱʹ��,ʾ��:clrbgnoactive="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrnc;                                        ///< ���ڵ�styleĬ��NC����ɫ,��NC����ͼΪ��ʱʹ��,ʾ��:clrnc="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrnchover;                                   ///< ���ڵ�styleĬ��NC hover����ɫ,��NC����ͼΪ��ʱʹ��,ʾ��:clrnchover="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrncpush;                                    ///< ���ڵ�styleĬ��NC push����ɫ,��NC����ͼΪ��ʱʹ��,ʾ��:clrncpush="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrncdisable;                                 ///< ���ڵ�styleĬ��NC disable����ɫ,��NC����ͼΪ��ʱʹ��,ʾ��:clrncdisable="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrncnoactive;                                ///< ���ڵ�styleĬ��NC noactive����ɫ,��NC����ͼΪ��ʱʹ��,ʾ��:clrncnoactive="pbgra(ff,00,ff,ff)"
		
		static wchar_t* BYTE_alpha;                                         ///< ���ڵ�style͸����,���ڱ���ͼ�򱳾�ɫ��alphaֵ�ٴ�Ԥ��,ʾ��:alpha="0x80"
		static wchar_t* COLOR_clrtext;                                      ///< ���ڵ�styleĬ��normarl�ı�ɫ,ʾ��:clrtext="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrtexthover;                                 ///< ���ڵ�styleĬ��hover�ı�ɫ,ʾ��:clrtexthover="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrtextpush;									///< ���ڵ�styleĬ��push�ı�ɫ,ʾ��:clrtextpush="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrtextdisable;                               ///< ���ڵ�styleĬ��disable�ı�ɫ,ʾ��:clrtextdisable="pbgra(ff,00,ff,ff)"
		static wchar_t* COLOR_clrtextnoactive;                              ///< ���ڵ�styleĬ��noactive�ı�ɫ,ʾ��:clrtextnoactive="pbgra(ff,00,ff,ff)"

		static wchar_t* FONT_font;											///< ���ڵ�styleĬ��normarl����,ʾ��:font="face:����,size:0,weight:400,charset:0,underline:1,italic:1,strike:1",face:��weight:���λ������:������1λ,�����ո�!�ڲ����˿ո�ȥ������
		static wchar_t* FONT_fonthover;										///< ���ڵ�styleĬ��hover����,ʾ��:fonthover="face:����,size:0,weight:400,charset:0,underline:1,italic:1,strike:1",face:��weight:���λ������:������1λ,�����ո�!�ڲ����˿ո�ȥ������
		static wchar_t* FONT_fontpush;										///< ���ڵ�styleĬ��push����,ʾ��:fontpush="face:����,size:0,weight:400,charset:0,underline:1,italic:1,strike:1",face:��weight:���λ������:������1λ,�����ո�!�ڲ����˿ո�ȥ������
		static wchar_t* FONT_fontdisable;									///< ���ڵ�styleĬ��disable����,ʾ��:fontdisable="face:����,size:0,weight:400,charset:0,underline:1,italic:1,strike:1",face:��weight:���λ������:������1λ,�����ո�!�ڲ����˿ո�ȥ������
		static wchar_t* FONT_fontnoactive;									///< ���ڵ�styleĬ��noactive����,ʾ��:fontnoactive="face:����,size:0,weight:400,charset:0,underline:1,italic:1,strike:1",face:��weight:���λ������:������1λ,�����ո�!�ڲ����˿ո�ȥ������
		
		static wchar_t* INT_textmode;                                       ///< ���ڵ�styleĬ��textalign,ʹ�����ֱ�ʾ,ʾ��textmode="0x100"
		static wchar_t* OPTION_align;                                       ///< ���ڵ�styleĬ��ˮƽalign,left��ӦAlign_Left,center��ӦAlign_Center,right��ӦAlign_Right,ʾ��align="left"
		static wchar_t*	OPTION_valign;                                      ///< ���ڵ�styleĬ����ֱalign,top��ӦVAlign_Left,middle��ӦVAlign_Middle,bottom��ӦVAlign_Bottom,ʾ��valign="left"
		static wchar_t* bool_bdot;									    	///< ���ڵ�styleĬ���ı�����ʱʹ��...,ʾ��bdot="1"
	};
	DMAttrValueInit(DUIStyleAttr,STRING_id)
	DMAttrValueInit(DUIStyleAttr,SKIN_skin)DMAttrValueInit(DUIStyleAttr,SKIN_ncskin)DMAttrValueInit(DUIStyleAttr,RECT_ncmargin)
	DMAttrValueInit(DUIStyleAttr,STRING_cursor)
	DMAttrValueInit(DUIStyleAttr,COLOR_clrbg)DMAttrValueInit(DUIStyleAttr,COLOR_clrbghover)DMAttrValueInit(DUIStyleAttr,COLOR_clrbgpush)DMAttrValueInit(DUIStyleAttr,COLOR_clrbgdisable)DMAttrValueInit(DUIStyleAttr,COLOR_clrbgnoactive)
	DMAttrValueInit(DUIStyleAttr,COLOR_clrnc)DMAttrValueInit(DUIStyleAttr,COLOR_clrnchover)DMAttrValueInit(DUIStyleAttr,COLOR_clrncpush)DMAttrValueInit(DUIStyleAttr,COLOR_clrncdisable)DMAttrValueInit(DUIStyleAttr,COLOR_clrncnoactive)
	DMAttrValueInit(DUIStyleAttr,BYTE_alpha)
	DMAttrValueInit(DUIStyleAttr,COLOR_clrtext)DMAttrValueInit(DUIStyleAttr,COLOR_clrtexthover)DMAttrValueInit(DUIStyleAttr,COLOR_clrtextpush)DMAttrValueInit(DUIStyleAttr,COLOR_clrtextdisable)DMAttrValueInit(DUIStyleAttr,COLOR_clrtextnoactive)
	DMAttrValueInit(DUIStyleAttr,FONT_font)DMAttrValueInit(DUIStyleAttr,FONT_fonthover)DMAttrValueInit(DUIStyleAttr,FONT_fontpush)
	DMAttrValueInit(DUIStyleAttr,FONT_fontdisable)DMAttrValueInit(DUIStyleAttr,FONT_fontnoactive)
	DMAttrValueInit(DUIStyleAttr,INT_textmode)DMAttrValueInit(DUIStyleAttr,OPTION_align)DMAttrValueInit(DUIStyleAttr,OPTION_valign)DMAttrValueInit(DUIStyleAttr,bool_bdot)
}

namespace DM
{
	enum
	{
		Align_Left               = 0x000UL, // align = left
		Align_Center             = 0x100UL, // align = center
		Align_Right              = 0x200UL, // align = right

		VAlign_Top               = 0x0000UL, // valign = top
		VAlign_Middle            = 0x1000UL, // valign = middle
		VAlign_Bottom            = 0x2000UL, // valign = bottom
	};
	class DMStyleImpl:public IDMStyle
	{
		DMDECLARE_CLASS_NAME(DMStyleImpl,L"style",DMREG_Style);
	public:
		DMStyleImpl();

	public:
		DMCode GetID(wchar_t* lpszId, int iSize);	
		DMCode CopyData(IDMStyle* pStyle);

		//---------------------------------------------------
		// Function Des: �ı����
		//---------------------------------------------------
		DMCode GetTextAlign(UINT &ulAlign);   
		DMCode GetTextColor(int iState,DMColor &Clr);   
		DMCode GetTextFont(int iState, IDMFont** ppFont); 
		DMCode GetTextStates(int &iState);

		//---------------------------------------------------
		// Function Des: ������
		//---------------------------------------------------
		DMCode GetCursor(HCURSOR &hCursor);

		//---------------------------------------------------
		// Function Des: �������
		//---------------------------------------------------
		DMCode GetBgSkin(IDMSkin** ppSkin);	
		DMCode GetBgColor(int iState, DMColor &Clr);
		DMCode GetBgClrStates(int &iState);

		DMCode GetNcMargin(LPRECT lpRect);
		DMCode GetNcColor(int iState, DMColor &Clr);
		DMCode GetNcSkin(IDMSkin** ppSkin);	

		DMCode GetAlpha(byte &alpha);
	public:
		DM_BEGIN_ATTRIBUTES()
			DM_STRING_ATTRIBUTE(DMAttr::DUIStyleAttr::STRING_id, m_strID, DM_ECODE_OK)
			DM_CUSTOM_ATTRIBUTE(DMAttr::DUIStyleAttr::SKIN_skin,OnAttributeSkin)
			DM_CUSTOM_ATTRIBUTE(DMAttr::DUIStyleAttr::SKIN_ncskin,OnAttributeNcSkin)
			DM_CUSTOM_ATTRIBUTE(DMAttr::DUIStyleAttr::RECT_ncmargin,OnAttributeNcMargin)

			DM_STRING_ATTRIBUTE(DMAttr::DUIStyleAttr::STRING_cursor,m_strCursor,DM_ECODE_OK)

			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrbg, m_crBg[0], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrbghover, m_crBg[1], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrbgpush, m_crBg[2], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrbgdisable, m_crBg[3], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrbgnoactive, m_crBg[4], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrnc, m_crNc[0], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrnchover, m_crNc[1], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrncpush, m_crNc[2], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrncdisable, m_crNc[3], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrncnoactive, m_crNc[04], DM_ECODE_NOXMLLOADREFRESH)

			DM_UINT_ATTRIBUTE(DMAttr::DUIStyleAttr::BYTE_alpha, m_byAlpha,DM_ECODE_NOXMLLOADREFRESH)

			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrtext, m_crText[0], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrtexthover, m_crText[1], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrtextpush, m_crText[2], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrtextdisable, m_crText[3], DM_ECODE_NOXMLLOADREFRESH)
			DM_COLOR_ATTRIBUTE(DMAttr::DUIStyleAttr::COLOR_clrtextnoactive, m_crText[4], DM_ECODE_NOXMLLOADREFRESH)

			DM_FONTPTR_ATTRIBUTE(DMAttr::DUIStyleAttr::FONT_font, m_ftText[0], DM_ECODE_NOXMLLOADREFRESH)
			DM_FONTPTR_ATTRIBUTE(DMAttr::DUIStyleAttr::FONT_fonthover, m_ftText[1], DM_ECODE_NOXMLLOADREFRESH)
			DM_FONTPTR_ATTRIBUTE(DMAttr::DUIStyleAttr::FONT_fontpush, m_ftText[2], DM_ECODE_NOXMLLOADREFRESH)
			DM_FONTPTR_ATTRIBUTE(DMAttr::DUIStyleAttr::FONT_fontdisable, m_ftText[3], DM_ECODE_NOXMLLOADREFRESH)
			DM_FONTPTR_ATTRIBUTE(DMAttr::DUIStyleAttr::FONT_fontnoactive, m_ftText[3], DM_ECODE_NOXMLLOADREFRESH)

			//--------------------------
			DM_UINT_ATTRIBUTE(DMAttr::DUIStyleAttr::INT_textmode, m_nTextAlign, DM_ECODE_NOXMLLOADREFRESH)
			DM_ENUM_BEGIN(DMAttr::DUIStyleAttr::OPTION_align, UINT, DM_ECODE_NOXMLLOADREFRESH)
				DM_ENUM_VALUE(L"left", Align_Left)
				DM_ENUM_VALUE(L"center", Align_Center)
				DM_ENUM_VALUE(L"right", Align_Right)
			DM_ENUM_END(m_uAlign)

			DM_ENUM_BEGIN(DMAttr::DUIStyleAttr::OPTION_valign, UINT, DM_ECODE_NOXMLLOADREFRESH)
				DM_ENUM_VALUE(L"top", VAlign_Top)
				DM_ENUM_VALUE(L"middle", VAlign_Middle)
				DM_ENUM_VALUE(L"bottom", VAlign_Bottom)
			DM_ENUM_END(m_uVAlign)
			DM_bool_ATTRIBUTE(DMAttr::DUIStyleAttr::bool_bdot,m_bDotted,DM_ECODE_NOXMLLOADREFRESH)
		DM_END_BREAK()

	public:
		DMCode OnAttributeSkin(LPCWSTR lpszValue, bool bLoadXml);
		DMCode OnAttributeNcSkin(LPCWSTR lpszValue, bool bLoadXml);
		DMCode OnAttributeNcMargin(LPCWSTR lpszValue, bool bLoadXml);

	public:
		CStringW                                    m_strID;        ///< Ψһ��ʶ

		DMColor										m_crBg[5];      ///< ����5��״̬�µ���ɫ
		DMColor                                     m_crNc[5];		///< �߿�5��״̬�µ���ɫ 
		CRect										m_rcNcMargin;   ///< �ǿͻ������ı�

		DMColor                                     m_crText[5];    ///< ����5��״̬�µ���ɫ
		DMSmartPtrT<IDMFont>						m_ftText[5];    ///< ����5��״̬�µ�����

		CStringW                                    m_strSkinName;  ///< SKIN NAME,��NAME��ԭ���ǣ���style����ʱ��skin��һ�������ˣ�
		CStringW									m_strNcSkinName;///< �ǿͻ���SKIN NAME
		
	    CStringW                                    m_strCursor;    ///< ���NAME
		BYTE										m_byAlpha;      ///< ����͸����,ֻ�������ã�֧�������ڿؼ�

		//-----------------------------
		// �ı�����ļ��ַ�ʽ
		UINT                                        m_nTextAlign;   ///< �ı�����
		UINT									    m_uAlign;		///< ˮƽ����
		UINT										m_uVAlign;		///< ��ֱ����
		bool                                        m_bDotted;      ///< ֧��ʡ�Ժ���ʾ�ı�	
	};
}//namespace DM