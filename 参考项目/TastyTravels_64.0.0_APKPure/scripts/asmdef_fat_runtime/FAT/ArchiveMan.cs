using System;
using System.Collections.Generic;
using System.Security.Cryptography;
using EL;
using Google.Protobuf;
using fat.gamekitdata;
using fat.msg;

namespace FAT
{
	public class ArchiveMan : IGameModule, IUpdate
	{
		public class UploadHelper
		{
			[NonSerialized]
			public bool _isRequesting;

			[NonSerialized]
			public bool _requestFulfilled;

			public bool HasPendingUploadRequest => false;

			public bool UploadRequestFulfilled => false;

			public void TryStartUpload()
			{
			}

			public void AfterUpload()
			{
			}

			public void TryResolve()
			{
			}
		}

		public int NowArchiveVersion;

		public const float kSyncTaskStuckTimeout = 60f;

		[NonSerialized]
		public bool mAccountCreated;

		[NonSerialized]
		public float mSyncCountdown;

		[NonSerialized]
		public SimpleResultedAsyncTask<IMessage> mArchiveDataSyncTask;

		[NonSerialized]
		public float mSyncTaskStartedAt;

		[NonSerialized]
		public bool mUserReady;

		[NonSerialized]
		public bool mIsLastSyncFail;

		[NonSerialized]
		public long mLastSyncTime;

		[NonSerialized]
		public EncryptLong mLastUpdateTime;

		[NonSerialized]
		public bool mDebugAutoSaveEnabled;

		[NonSerialized]
		public UserType mUserType;

		[NonSerialized]
		public ICryptoTransform mArchiveEncoder;

		[NonSerialized]
		public ICryptoTransform mArchiveDecoder;

		[NonSerialized]
		public List<Action> mExecuteAfterArchiveInitialize;

		[NonSerialized]
		public Action _loadArchiveFinishCb;

		[NonSerialized]
		public bool _pendingImmediateSave;

		[NonSerialized]
		public LocalSaveData syncedData;

		[NonSerialized]
		public ClientData currentSyncingData;

		[NonSerialized]
		public PlayerBaseData initializedBaseData;

		[NonSerialized]
		public UploadHelper uploadHelper;

		[NonSerialized]
		public ArchiveUpgrader archiveUpgrader;

		public UserType userType => default(UserType);

		public bool accountCreated => false;

		public long lastSyncTime => 0L;

		public long lastUpdateTime => 0L;

		public bool isArchiveLoaded => false;

		public AsyncTaskBase syncTask => null;

		public bool isNewUser { get; set; }

		public bool uploadCompleted => false;

		public float syncCountdown => 0f;

		public int LoginLevel { get; set; }

		public int OfflineDays { get; set; }

		void IGameModule.LoadConfig()
		{
		}

		void IGameModule.Reset()
		{
		}

		void IGameModule.Startup()
		{
		}

		void IUpdate.Update(float dt)
		{
		}

		public void SetLoadArchiveFinishCb(Action cb)
		{
		}

		public void _Update(float dt)
		{
		}

		public AsyncTaskBase SendImmediately(bool uploadToRemote)
		{
			return null;
		}

		public void DebugSetAutoSaveEnabled(bool enabled)
		{
		}

		public bool DebugIsAutoSaveEnabled()
		{
			return false;
		}

		public void ExecuteAfterArchiveReady(Action act)
		{
		}

		public void OnReceiveServerArchive(AuthorizeRspOverride respBody, ClientData clientData)
		{
		}

		public void DiscardLocalArchiveNextLogin(long errorCode)
		{
		}

		public void _InitializeGameArchive(LocalSaveData data, bool newUser)
		{
		}

		public void _ParseLoginProperty(LocalSaveData data)
		{
		}

		public void _Apply_OnReceiveServerData(ServerData data)
		{
		}

		public void _Apply_OnPreSetUserData(LocalSaveData data)
		{
		}

		public void _Apply_UserDataVersionUpgrader(LocalSaveData nowData, bool newUser)
		{
		}

		public void _Apply_UserDataHolder_SetData(LocalSaveData data)
		{
		}

		public void _Apply_UserDataHolder_FillData(LocalSaveData data)
		{
		}

		public void _Apply_UserDataInitializer(LocalSaveData data)
		{
		}

		public void _Apply_PostSetUserDataListener(LocalSaveData data)
		{
		}

		public LocalSaveData SerializeArchive(bool updateSyncTime)
		{
			return null;
		}

		public bool _SaveArchiveData()
		{
			return false;
		}

		public void RequestImmediateSave()
		{
		}

		public bool _UploadArchiveToRemote(LocalSaveData archive)
		{
			return false;
		}
	}
}
