// This file is part of the aMule Project
//
// Copyright (c) 2003-2004 aMule Project ( http://www.amule-project.net )
// Copyright (C) 2002 Merkur ( merkur-@users.sourceforge.net / http://www.emule-project.net )
//
//This program is free software; you can redistribute it and/or
//modify it under the terms of the GNU General Public License
//as published by the Free Software Foundation; either
//version 2 of the License, or (at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program; if not, write to the Free Software
//Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

#ifndef CHATSELECTOR_H
#define CHATSELECTOR_H

#include <list>
#include <vector>
#include <wx/defs.h>			// Needed before any other wx/*.h
#include <wx/notebook.h>		// Needed for wxNotebook
#include <wx/html/htmlwin.h>	// Needed for wxHtmlWindow
#include <wx/imaglist.h>		// Needed for wxImageList (at least on wx2.5)

#include "types.h"				// Needed for uint16
#include "color.h"				// Needed for COLORREF
#include "CTypedPtrList.h"		// Needed for CList

class CUpDownClient;


class CChatSession : public wxHtmlWindow
{
public:
	CChatSession(wxWindow *parent, wxWindowID id = -1, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxHW_SCROLLBAR_AUTO, const wxString& name = "htmlWindow");

	CUpDownClient*	client;
	wxString		messagepending;
	
	void SetText( const wxString& text );
	void AddText( const wxString& text );
private:
	wxString		log;
	
};


class CChatSelector : public wxNotebook
{
public:
	CChatSelector(wxWindow* parent, wxWindowID id, const wxPoint& pos, wxSize siz, long style);
	virtual			~CChatSelector() {};
	CChatSession*	StartSession(CUpDownClient* client, bool show = true);
	void			EndSession(CUpDownClient* client = 0);
	CChatSession*	GetPageByClient(CUpDownClient* client);
	int				GetTabByClient(CUpDownClient* client);
	void			ProcessMessage(CUpDownClient* sender, char* message);
	bool			SendMessage(const wxString& message);
	void			ConnectingResult(CUpDownClient* sender, bool success);

private:
	wxString ColorText( const wxString& text, COLORREF iColor );

	wxImageList	imagelist;
};

#endif // CHATSELECTOR_H
