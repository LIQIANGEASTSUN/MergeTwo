using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using DragonPlus;
using DragonU3DSDK.Storage;
using UnityEngine;

public class ButterflyWorkShopModel : ActivityEntityBase
{
	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass62_0
	{
		public ButterflyWorkShopModel _003C_003E4__this;

		public TaskCompletionSource<bool> taskRewardCollect;

		public void _003COnUseItem_003Eb__0()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003COnNewItem_003Ed__64 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public ButterflyWorkShopModel _003C_003E4__this;

		public int id;

		public int index;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003COnUseItem_003Ed__62 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public ButterflyWorkShopModel _003C_003E4__this;

		public int id;

		public int index;

		[NonSerialized]
		public _003C_003Ec__DisplayClass62_0 _003C_003E8__1;

		[NonSerialized]
		public List<ResData> _003CrewardsList_003E5__2;

		[NonSerialized]
		public int _003CtargetIndex_003E5__3;

		[NonSerialized]
		public GameBIManager.ItemChangeReasonArgs _003CreasonArgs_003E5__4;

		[NonSerialized]
		public TaskAwaiter _003C_003Eu__1;

		[NonSerialized]
		public TaskAwaiter<bool> _003C_003Eu__2;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	public static bool InGuideChain;

	public const int BOARD_WIDTH = 5;

	public const int BOARD_HEIGHT = 2;

	public static ButterflyWorkShopModel _instance;

	[NonSerialized]
	public Dictionary<int, TableMergeItem> _mergeItemDictionary;

	public int UnSetItemsCount;

	public const ulong Offset = 0uL;

	public static GameObject _flyItemObj;

	public static GameObject _butterFly;

	public static string coolTimeKey;

	public bool IsInUseItem;

	public static ButterflyWorkShopModel Instance => null;

	public override string Guid => null;

	public StorageButterflyWorkShop StorageButterflyWorkShop => null;

	public ButterflyWorkShopConfig ButterflyWorkShopConfig => null;

	public TableMergeLine MergeLineConfig => null;

	public Dictionary<int, TableMergeItem> MergeItemDictionary => null;

	public StorageList<int> UnSetItems => null;

	public bool IsStart => false;

	public int CurDay => 0;

	public ulong CurTime => 0uL;

	public List<ButterflyWorkShopProductAttenuationConfig> ProductAttenuationConfig => null;

	public static GameObject FlyItemObj => null;

	public static GameObject ButterFly => null;

	public static UIButterflyWorkShopMainController MainView => null;

	public virtual string MainUIPath => null;

	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	public static void InitAuto()
	{
	}

	public ButterflyWorkShopRewardConfig GetButterflyWorkShopRewardConfig(int level)
	{
		return null;
	}

	public TableMergeItem GetMergeItemConfig(int level)
	{
		return null;
	}

	public new bool IsOpened(bool hasLog = false)
	{
		return false;
	}

	public float GetProductAttenuationConfig(int dayProductCount)
	{
		return 0f;
	}

	public void TryProductActivityItem(int index, int id, MergeBoard board, int doubleEnergyTimes)
	{
	}

	public static void FlyProductItem(int itemId, Vector2 srcPos, Transform starTransform, float time, bool showEffect, Action action = null)
	{
	}

	public static void FlyButterFly(int index, Vector2 srcPos, Vector3 targetPos, float time, bool showEffect, Action action = null)
	{
	}

	public override void InitFromServerData(string activityId, string activityType, ulong startTime, ulong endTime, ulong rewardEndTime, bool manualEnd, string configJson, string activitySubType)
	{
	}

	public override void InitServerDataFinish()
	{
	}

	public bool IsClaimed(int index)
	{
		return false;
	}

	public void OpenMainPopup()
	{
	}

	public void PurchaseSuccess(TableShop tableShop)
	{
	}

	public void PopReward(List<ResData> listResData)
	{
	}

	public static bool CanShowUI()
	{
		return false;
	}

	public static bool IsActivityStorageEnd(StorageButterflyWorkShop storage)
	{
		return false;
	}

	public static void RemoveUselessStorage()
	{
	}

	public StageRewardConfig GetStageRewardConfig()
	{
		return null;
	}

	public int GetButterFlyType(int index)
	{
		return 0;
	}

	public int GetRandomIndex()
	{
		return 0;
	}

	public bool IsFinish()
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003COnUseItem_003Ed__62))]
	public void OnUseItem(int index, int id)
	{
	}

	public void CheckFinish()
	{
	}

	[AsyncStateMachine(typeof(_003COnNewItem_003Ed__64))]
	public void OnNewItem(int index, int id, RefreshItemSource source)
	{
	}

	public Transform GetFlyTarget()
	{
		return null;
	}

	public override bool CanDownLoadRes()
	{
		return false;
	}

	public void _003C_003EiFixBaseProxy_InitFromServerData(string P0, string P1, ulong P2, ulong P3, ulong P4, bool P5, string P6, string P7)
	{
	}

	public void _003C_003EiFixBaseProxy_InitServerDataFinish()
	{
	}

	public bool _003C_003EiFixBaseProxy_CanDownLoadRes()
	{
		return false;
	}
}
