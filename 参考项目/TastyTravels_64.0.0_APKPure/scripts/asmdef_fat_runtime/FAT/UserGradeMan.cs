using System;
using System.Collections.Generic;
using FAT.RemoteAnalysis;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class UserGradeMan : IGameModule, IUserDataHolder
	{
		public class UserGardeAPIData
		{
			public UserGrade conf;

			public int tagValue;
		}

		[NonSerialized]
		public bool _isTagExpire;

		[NonSerialized]
		public bool _isNetSync;

		[NonSerialized]
		public Dictionary<int, int> _userGradeValueDict;

		[NonSerialized]
		public long _curTagUpdateTs;

		[NonSerialized]
		public long _tagExpireTs;

		[NonSerialized]
		public Dictionary<int, int> _debugTagValueDict;

		[NonSerialized]
		public Dictionary<int, UserGardeAPIData> _userGradeAPIDict;

		[NonSerialized]
		public UserGradeRemoteWrapper _wrapper;

		[NonSerialized]
		public long _curAPIReqTs;

		[NonSerialized]
		public long _curAPIReqWaitTs;

		[NonSerialized]
		public long _apiExpireTs;

		public bool IsTagExpire => false;

		public bool IsIgnoreTagExpire { get; set; }

		public float DebugDelayTime { get; set; }

		public void Reset()
		{
		}

		public void LoadConfig()
		{
		}

		public void Startup()
		{
		}

		public void SetData(LocalSaveData archive)
		{
		}

		public void FillData(LocalSaveData archive)
		{
		}

		public void MarkTagExpire(bool isNetSync)
		{
		}

		public void OnReceiveUserTagInfo(UserTagData userTagData)
		{
		}

		public void TryApplyUserTagInfo(UserTagData userTagData)
		{
		}

		public int GetUserGradeValue(int gradeId)
		{
			return 0;
		}

		public int GetTargetConfigDataId(int mapId)
		{
			return 0;
		}

		public void _RefreshTagExpireTs(long tagUpdateTs)
		{
		}

		public bool _CheckServerTagExpire()
		{
			return false;
		}

		public void DebugSetIgnoreTagExpire()
		{
		}

		public void DebugChangeUserTag(int userGradeId, int userGradeValue)
		{
		}

		public string DebugUserTagInfo()
		{
			return null;
		}

		public void _TryApplyUseTagDebugInfo()
		{
		}

		public int _GetDebugGetUserGradeValue(int gradeId)
		{
			return 0;
		}

		public void _InitAPIReqInfo()
		{
		}

		public void _TryReqAPIInfo()
		{
		}

		public void _RefreshAPIExpireTs()
		{
		}

		public void _CalAPIExpireTs()
		{
		}

		public void _TryUseAPIArchiveData(LocalSaveData archive)
		{
		}

		public void _OnReqAPISuccess(int diff)
		{
		}

		public bool _CheckApiTagExpire()
		{
			return false;
		}

		public bool _CheckApiUsable()
		{
			return false;
		}

		public void DebugResetApiExpireTs()
		{
		}

		public void DebugSetAPIDelayTime(float delayTime)
		{
		}

		public bool _CheckTagExpire()
		{
			return false;
		}
	}
}
