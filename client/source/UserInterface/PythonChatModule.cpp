#include "StdAfx.h"
#include "PythonChat.h"
#include "PythonItem.h"
#include "../gamelib/ItemManager.h"
#include "PythonSkill.h"
#include "PythonNonPlayer.h"

#ifdef PYTHON_DYNAMIC_MODULE_NAME
#include "PythonDynamicModuleNames.h"
#endif

PyObject * chatSetChatColor(PyObject* poSelf, PyObject* poArgs)
{
	int iType;
	if (!PyTuple_GetInteger(poArgs, 0, &iType))
		return Py_BuildException();

	int r;
	if (!PyTuple_GetInteger(poArgs, 1, &r))
		return Py_BuildException();

	int g;
	if (!PyTuple_GetInteger(poArgs, 2, &g))
		return Py_BuildException();

	int b;
	if (!PyTuple_GetInteger(poArgs, 3, &b))
		return Py_BuildException();

	CPythonChat::Instance().SetChatColor(iType, r, g, b);
	return Py_BuildNone();
}

PyObject * chatClear(PyObject* poSelf, PyObject* poArgs)
{
	CPythonChat::Instance().Destroy();
	return Py_BuildNone();
}

PyObject * chatClose(PyObject* poSelf, PyObject* poArgs)
{
	CPythonChat::Instance().Close();
	return Py_BuildNone();
}

PyObject * chatCreateChatSet(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();

	return Py_BuildValue("i", CPythonChat::Instance().CreateChatSet(iID));
}

PyObject * chatUpdate(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();

	CPythonChat::Instance().Update(iID);
	return Py_BuildNone();
}

PyObject * chatRender(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();

	CPythonChat::Instance().Render(iID);
	return Py_BuildNone();
}

PyObject * chatSetBoardState(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();
	int iState;
	if (!PyTuple_GetInteger(poArgs, 1, &iState))
		return Py_BuildException();

	CPythonChat::Instance().SetBoardState(iID, iState);

	return Py_BuildNone();
}

PyObject * chatSetPosition(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();
	int ix;
	if (!PyTuple_GetInteger(poArgs, 1, &ix))
		return Py_BuildException();
	int iy;
	if (!PyTuple_GetInteger(poArgs, 2, &iy))
		return Py_BuildException();

	CPythonChat::Instance().SetPosition(iID, ix, iy);

	return Py_BuildNone();
}

PyObject * chatSetHeight(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();
	int iHeight;
	if (!PyTuple_GetInteger(poArgs, 1, &iHeight))
		return Py_BuildException();

	CPythonChat::Instance().SetHeight(iID, iHeight);

	return Py_BuildNone();
}

PyObject * chatSetStep(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();
	int iStep;
	if (!PyTuple_GetInteger(poArgs, 1, &iStep))
		return Py_BuildException();

	CPythonChat::Instance().SetStep(iID, iStep);

	return Py_BuildNone();
}

PyObject * chatToggleChatMode(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();
	int iType;
	if (!PyTuple_GetInteger(poArgs, 1, &iType))
		return Py_BuildException();

	CPythonChat::Instance().ToggleChatMode(iID, iType);

	return Py_BuildNone();
}

PyObject * chatEnableChatMode(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();
	int iType;
	if (!PyTuple_GetInteger(poArgs, 1, &iType))
		return Py_BuildException();

	CPythonChat::Instance().EnableChatMode(iID, iType);

	return Py_BuildNone();
}

PyObject * chatDisableChatMode(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();
	int iType;
	if (!PyTuple_GetInteger(poArgs, 1, &iType))
		return Py_BuildException();

	CPythonChat::Instance().DisableChatMode(iID, iType);

	return Py_BuildNone();
}

PyObject * chatSetEndPos(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();
	float fPos;
	if (!PyTuple_GetFloat(poArgs, 1, &fPos))
		return Py_BuildException();

	CPythonChat::Instance().SetEndPos(iID, fPos);

	return Py_BuildNone();
}

PyObject * chatGetLineCount(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();

	return Py_BuildValue("i", CPythonChat::Instance().GetLineCount(iID));
}

PyObject * chatGetVisibleLineCount(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();

	return Py_BuildValue("i", CPythonChat::Instance().GetVisibleLineCount(iID));
}

PyObject * chatGetLineStep(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();

	return Py_BuildValue("i", CPythonChat::Instance().GetLineStep(iID));
}

PyObject * chatAppendChat(PyObject* poSelf, PyObject* poArgs)
{
	int iType;
	if (!PyTuple_GetInteger(poArgs, 0, &iType))
		return Py_BuildException();

	char * szChat;
	if (!PyTuple_GetString(poArgs, 1, &szChat))
		return Py_BuildException();

	CPythonChat::Instance().AppendChat(iType, szChat);

	return Py_BuildNone();
}

PyObject * chatAppendChatWithDelay(PyObject* poSelf, PyObject* poArgs)
{
	int iType;
	if (!PyTuple_GetInteger(poArgs, 0, &iType))
		return Py_BuildException();

	char * szChat;
	if (!PyTuple_GetString(poArgs, 1, &szChat))
		return Py_BuildException();

	int iDelay;
	if (!PyTuple_GetInteger(poArgs, 2, &iDelay))
		return Py_BuildException();

	CPythonChat::Instance().AppendChatWithDelay(iType, szChat, iDelay);

	return Py_BuildNone();
}

PyObject * chatArrangeShowingChat(PyObject* poSelf, PyObject* poArgs)
{
	int iID;
	if (!PyTuple_GetInteger(poArgs, 0, &iID))
		return Py_BuildException();

	CPythonChat::Instance().ArrangeShowingChat(iID);

	return Py_BuildNone();
}

PyObject * chatIgnoreCharacter(PyObject* poSelf, PyObject* poArgs)
{
	char * szName;
	if (!PyTuple_GetString(poArgs, 0, &szName))
		return Py_BuildException();

	CPythonChat::Instance().IgnoreCharacter(szName);

	return Py_BuildNone();
}

PyObject * chatIsIgnoreCharacter(PyObject* poSelf, PyObject* poArgs)
{
	char * szName;
	if (!PyTuple_GetString(poArgs, 0, &szName))
		return Py_BuildException();

	CPythonChat::Instance().IsIgnoreCharacter(szName);

	return Py_BuildNone();
}

PyObject * chatCreateFloatingBox(PyObject* poSelf, PyObject* poArgs)
{
	char * szName;
	if (!PyTuple_GetString(poArgs, 0, &szName))
		return Py_BuildException();

	CPythonChat::Instance().CreateWhisper(szName);

	return Py_BuildNone();
}

PyObject * chatAppendToBox(PyObject* poSelf, PyObject* poArgs)
{
	int iType;
	if (!PyTuple_GetInteger(poArgs, 0, &iType))
		return Py_BuildException();

	char * szName;
	if (!PyTuple_GetString(poArgs, 1, &szName))
		return Py_BuildException();

	char * szChat;
	if (!PyTuple_GetString(poArgs, 2, &szChat))
		return Py_BuildException();

	CPythonChat::Instance().AppendWhisper(iType, szName, szChat);
	return Py_BuildNone();
}

PyObject * chatRenderBox(PyObject* poSelf, PyObject* poArgs)
{
	char * szName;
	if (!PyTuple_GetString(poArgs, 0, &szName))
		return Py_BuildException();

	float fx;
	if (!PyTuple_GetFloat(poArgs, 1, &fx))
		return Py_BuildException();

	float fy;
	if (!PyTuple_GetFloat(poArgs, 2, &fy))
		return Py_BuildException();

	FloatingChat * pWhisper;
	if (CPythonChat::Instance().GetWhisper(szName, &pWhisper))
	{
		pWhisper->Render(fx, fy);
	}

	return Py_BuildNone();
}

PyObject * chatSetBoxSize(PyObject* poSelf, PyObject* poArgs)
{
	char * szName;
	if (!PyTuple_GetString(poArgs, 0, &szName))
		return Py_BuildException();

	float fWidth;
	if (!PyTuple_GetFloat(poArgs, 1, &fWidth))
		return Py_BuildException();

	float fHeight;
	if (!PyTuple_GetFloat(poArgs, 2, &fHeight))
		return Py_BuildException();

	FloatingChat * pWhisper;
	if (CPythonChat::Instance().GetWhisper(szName, &pWhisper))
	{
		pWhisper->SetBoxSize(fWidth, fHeight);
	}

	return Py_BuildNone();
}

PyObject * chatSetBoxPosition(PyObject* poSelf, PyObject* poArgs)
{
	char * szName;
	if (!PyTuple_GetString(poArgs, 0, &szName))
		return Py_BuildException();

	float fPosition;
	if (!PyTuple_GetFloat(poArgs, 1, &fPosition))
		return Py_BuildException();

	FloatingChat * pWhisper;
	if (CPythonChat::Instance().GetWhisper(szName, &pWhisper))
	{
		pWhisper->SetPosition(fPosition);
	}

	return Py_BuildNone();
}

PyObject * chatClearBox(PyObject* poSelf, PyObject* poArgs)
{
	char * szName;
	if (!PyTuple_GetString(poArgs, 0, &szName))
		return Py_BuildException();

	CPythonChat::Instance().ClearWhisper(szName);

	return Py_BuildNone();
}

PyObject * chatInitFloatingBoxes(PyObject* poSelf, PyObject* poArgs)
{
	PyObject * poInterface;
	if (!PyTuple_GetObject(poArgs, 0, &poInterface))
		return Py_BuildException();

	CPythonChat::Instance().InitWhisper(poInterface);
	return Py_BuildNone();
}

PyObject * chatGetLinkFromHyperlink(PyObject * poSelf, PyObject * poArgs)
{
	char * szHyperlink;

	if (!PyTuple_GetString(poArgs, 0, &szHyperlink))
		return Py_BuildException();

	std::string stHyperlink(szHyperlink);
	std::vector<std::string> results;

	split_string(stHyperlink, ":", results, false);

	// item:vnum:flag:socket0:socket1:socket2:socket3:socket4:socket5
	if (0 == results[0].compare("item"))
	{
		if (results.size() < 7)
			return Py_BuildValue("s", "");

		CItemData * pItemData = nullptr;

		if (CItemManager::Instance().GetItemDataPointer(htoi(results[1].c_str()), &pItemData))
		{
			char buf[1024] = { 0 };
			char itemlink[256 + 12];
			int len;
			bool isAttr = false;

			len = snprintf(itemlink, sizeof(itemlink), "item:%x:%x:%x:%x:%x:%x:%I64u:%I64u",
				htoi(results[1].c_str()),
				htoi(results[2].c_str()),
				htoi(results[3].c_str()),
				htoi(results[4].c_str()),
				htoi(results[5].c_str()),
				htoi(results[6].c_str()),
				atoi(results[7].c_str()),
				atoi(results[8].c_str()));

			if (results.size() >= 11)
			{
				for (int i = 9; i < results.size(); i += 2)
				{
					len += snprintf(itemlink + len, sizeof(itemlink)-len, ":%x:%I64u",
						htoi(results[i].c_str()),
						atoi(results[i + 1].c_str()));
					isAttr = true;
				}
			}
			
			char szText[64];
			if (pItemData->GetIndex() == 50300)
			{
				CPythonSkill::SSkillData * c_pSkillData;
				CPythonSkill::Instance().GetSkillData(atoi(results[3].c_str()), &c_pSkillData);
				sprintf(szText, "%s %s", c_pSkillData->strName.c_str(), pItemData->GetName());
			}
			else if (pItemData->GetType() == 19)
			{
				CPythonNonPlayer& rkNonPlayer=CPythonNonPlayer::Instance();
				sprintf(szText, "%s %s", rkNonPlayer.GetMonsterName(atoi(results[3].c_str())), pItemData->GetName());
			}
			else
			{
				sprintf(szText, "%s", pItemData->GetName());
			}

			if (isAttr)
				snprintf(buf, sizeof(buf), "|cffffc700|H%s|h[%s]|h|r", itemlink, szText);
			else
				snprintf(buf, sizeof(buf), "|cfff1e6c0|H%s|h[%s]|h|r", itemlink, szText);

			return Py_BuildValue("s", buf);
		}
	}

	return Py_BuildValue("s", "");
}

PyObject * chatGetLinkYoutube(PyObject* poSelf, PyObject* poArgs)
{
	char * szYoutube;
	if (!PyTuple_GetString(poArgs, 0, &szYoutube))
		return Py_BuildNone();

	char youtube[512];
	snprintf(youtube, sizeof(youtube), "|cffffc700|Hyoutube:%s|h[%s]|h|r", szYoutube, "Tan�t�m Videosu");
	return Py_BuildValue("s", youtube);
}

PyObject * chatSetRenderDownwards(PyObject* poSelf, PyObject* poArgs)
{
	char * szName;
	if (!PyTuple_GetString(poArgs, 0, &szName))
		return Py_BuildException();

	bool newState;
	if (!PyTuple_GetBoolean(poArgs, 1, &newState))
		return Py_BuildException();

	FloatingChat * pWhisper;
	if (CPythonChat::Instance().GetWhisper(szName, &pWhisper))
	{
		pWhisper->SetDownwardsRendering(newState);
	}
	return Py_BuildNone();
}

void initChat()
{
	static PyMethodDef s_methods[] = 
	{
		{ "SetChatColor",			chatSetChatColor,			METH_VARARGS },
		{ "Clear",					chatClear,					METH_VARARGS },
		{ "Close",					chatClose,					METH_VARARGS },

		{ "CreateChatSet",			chatCreateChatSet,			METH_VARARGS },
		{ "Update",					chatUpdate,					METH_VARARGS },
		{ "Render",					chatRender,					METH_VARARGS },

		{ "SetBoardState",			chatSetBoardState,			METH_VARARGS },
		{ "SetPosition",			chatSetPosition,			METH_VARARGS },
		{ "SetHeight",				chatSetHeight,				METH_VARARGS },
		{ "SetStep",				chatSetStep,				METH_VARARGS },
		{ "ToggleChatMode",			chatToggleChatMode,			METH_VARARGS },
		{ "EnableChatMode",			chatEnableChatMode,			METH_VARARGS },
		{ "DisableChatMode",		chatDisableChatMode,		METH_VARARGS },
		{ "SetEndPos",				chatSetEndPos,				METH_VARARGS },

		{ "GetLineCount",			chatGetLineCount,			METH_VARARGS },
		{ "GetVisibleLineCount",	chatGetVisibleLineCount,	METH_VARARGS },
		{ "GetLineStep",			chatGetLineStep,			METH_VARARGS },

		// Chat
		{ "AppendChat",				chatAppendChat,				METH_VARARGS },
		{ "AppendChatWithDelay",	chatAppendChatWithDelay,	METH_VARARGS },
		{ "ArrangeShowingChat",		chatArrangeShowingChat,		METH_VARARGS },

		// Ignore
		{ "IgnoreCharacter",		chatIgnoreCharacter,		METH_VARARGS },
		{ "IsIgnoreCharacter",		chatIsIgnoreCharacter,		METH_VARARGS },
		
		// Floating Box
		{ "CreateFloatingBox",		chatCreateFloatingBox,		METH_VARARGS },
		{ "AppendToBox",			chatAppendToBox,			METH_VARARGS },
		{ "RenderBox",				chatRenderBox,				METH_VARARGS },
		{ "SetBoxSize",				chatSetBoxSize,				METH_VARARGS },
		{ "SetBoxPosition",			chatSetBoxPosition,			METH_VARARGS },
		{ "ClearBox",				chatClearBox,				METH_VARARGS },
		{ "InitFloatingBoxes",		chatInitFloatingBoxes,		METH_VARARGS },
		{ "SetRenderDownwards",		chatSetRenderDownwards,		METH_VARARGS },

		// Link
		{ "GetLinkFromHyperlink",	chatGetLinkFromHyperlink,	METH_VARARGS },
		
		{ "GetLinkYoutube",			chatGetLinkYoutube,			METH_VARARGS },

		{ NULL,						NULL,						NULL },
	};

#ifdef PYTHON_DYNAMIC_MODULE_NAME
	PyObject* poModule = Py_InitModule(GetModuleName(CHAT_MODULE).c_str(), s_methods);
#else
	PyObject* poModule = Py_InitModule("chat", s_methods);
#endif

	PyModule_AddIntConstant(poModule, "CHAT_TYPE_TALKING",		CHAT_TYPE_TALKING);
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_INFO",			CHAT_TYPE_INFO);
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_NOTICE",		CHAT_TYPE_NOTICE);
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_PARTY",		CHAT_TYPE_PARTY);
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_GUILD",		CHAT_TYPE_GUILD);
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_COMMAND",		CHAT_TYPE_COMMAND);
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_SHOUT",		CHAT_TYPE_SHOUT);
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_WHISPER",		CHAT_TYPE_WHISPER);
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_BIG_NOTICE",	CHAT_TYPE_BIG_NOTICE);
	// PyModule_AddIntConstant(poModule, "CHAT_TYPE_UNK_10",		CHAT_TYPE_UNK_10);
#ifdef ENABLE_DICE_SYSTEM
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_DICE_INFO",	CHAT_TYPE_DICE_INFO);
#endif
#ifdef ENABLE_OX_RENEWAL
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_CONTROL_NOTICE", CHAT_TYPE_CONTROL_NOTICE);
#endif
#ifdef ENABLE_ZODIAC_TEMPLE_CHAT
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_ZODIAC_NOTICE", CHAT_TYPE_ZODIAC_NOTICE);
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_ZODIAC_SUB_NOTICE", CHAT_TYPE_ZODIAC_SUB_NOTICE);
	PyModule_AddIntConstant(poModule, "CHAT_TYPE_ZODIAC_NOTICE_CLEAR", CHAT_TYPE_ZODIAC_NOTICE_CLEAR);
#endif

	PyModule_AddIntConstant(poModule, "WHISPER_TYPE_CHAT",		CPythonChat::WHISPER_TYPE_CHAT);
	PyModule_AddIntConstant(poModule, "WHISPER_TYPE_SYSTEM",	CPythonChat::WHISPER_TYPE_SYSTEM);
	PyModule_AddIntConstant(poModule, "WHISPER_TYPE_GM",		CPythonChat::WHISPER_TYPE_GM);

	PyModule_AddIntConstant(poModule, "BOARD_STATE_VIEW",		CPythonChat::BOARD_STATE_VIEW);
	PyModule_AddIntConstant(poModule, "BOARD_STATE_EDIT",		CPythonChat::BOARD_STATE_EDIT);
	PyModule_AddIntConstant(poModule, "BOARD_STATE_LOG",		CPythonChat::BOARD_STATE_LOG);

	PyModule_AddIntConstant(poModule, "CHAT_SET_CHAT_WINDOW",	0);
	PyModule_AddIntConstant(poModule, "CHAT_SET_LOG_WINDOW",	1);
}
