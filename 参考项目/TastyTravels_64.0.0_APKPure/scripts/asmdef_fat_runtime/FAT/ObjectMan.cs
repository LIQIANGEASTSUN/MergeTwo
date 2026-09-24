using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Config;
using IFix.Core;
using fat.rawdata;

namespace FAT
{
	public class ObjectMan : IGameModule
	{
		public struct RplcReplaceInfo
		{
			public int targetId;

			public float multiplier;
		}

		public delegate int IdGetter<T>(T t);

		[CompilerGenerated]
		public sealed class _003CWalkAllIdWithMask_003Ed__28 : IEnumerator<int>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public int _003C_003E2__current;

			public ObjectMan _003C_003E4__this;

			public int typeMask;

			[NonSerialized]
			public Dictionary<int, int>.Enumerator _003Citer_003E5__2;

			int IEnumerator<int>.Current
			{
				[DebuggerHidden]
				get
				{
					return 0;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CWalkAllIdWithMask_003Ed__28(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[NonSerialized]
		public Dictionary<int, ObjBasic> mAllBasicConfig;

		[NonSerialized]
		public Dictionary<int, ObjCoin> mAllCoinConfig;

		[NonSerialized]
		public Dictionary<int, ObjItemConfig> mAllItemConfig;

		[NonSerialized]
		public Dictionary<int, ObjRandomChest> mAllRandomBoxConfig;

		[NonSerialized]
		public Dictionary<int, ObjMergeItem> mAllMergeItemConfig;

		[NonSerialized]
		public Dictionary<int, ObjFullConfig> mAllFullConfig;

		[NonSerialized]
		public Dictionary<int, ObjCardPack> mAllCardPackConfig;

		[NonSerialized]
		public Dictionary<int, ObjCard> mAllCardConfig;

		[NonSerialized]
		public Dictionary<int, ObjCardJoker> mAllCardJokerConfig;

		[NonSerialized]
		public Dictionary<int, ObjSeasonItem> mAllSeasonItemConfig;

		[NonSerialized]
		public Dictionary<int, ObjExpress> mAllExpressConfig;

		[NonSerialized]
		public Dictionary<int, ObjRplcItem> mAllRplcItemConfig;

		[NonSerialized]
		public Dictionary<int, RplcReplaceInfo> mAllRplcReplaceInfo;

		[NonSerialized]
		public Dictionary<int, ObjSpin> mAllSpinConfig;

		[NonSerialized]
		public Dictionary<int, ObjAvatar> mAllAvatarConfig;

		[NonSerialized]
		public Dictionary<int, ObjAvatarFrame> mAllAvatarFrameConfig;

		[NonSerialized]
		public Dictionary<int, int> mAllTypeMasks;

		[NonSerialized]
		public Dictionary<int, ObjToken> mAllTokenConfig;

		[NonSerialized]
		public List<int> mFreeItem;

		[NonSerialized]
		public List<ObjConfigType> mAllType;

		[NonSerialized]
		public Dictionary<ObjConfigType, int> mCurrentConfigVersion;

		public void _OnConfigLoaded()
		{
		}

		public bool _TryGetRplcReplaceInfo(int oldId, ObjRplcItem conf, out RplcReplaceInfo info)
		{
			info = default(RplcReplaceInfo);
			return false;
		}

		public void OnMergeBoardVersionUpdate(int version)
		{
		}

		public IEnumerator<int> WalkAllFreeItem()
		{
			return null;
		}

		public IEnumerator<int> WalkAllIdWithType(ObjConfigType type)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CWalkAllIdWithMask_003Ed__28))]
		public IEnumerator<int> WalkAllIdWithMask(int typeMask = 0)
		{
			return null;
		}

		public bool IsObject(int id)
		{
			return false;
		}

		public bool IsOneOfType(int id, int typeMask)
		{
			return false;
		}

		[IDTag(1)]
		public bool IsType(int id, int typeMask)
		{
			return false;
		}

		[IDTag(0)]
		public bool IsType(int id, ObjConfigType typeMask)
		{
			return false;
		}

		public ObjConfigType DeduceTypeForId(int id)
		{
			return default(ObjConfigType);
		}

		public ObjFullConfig GetFullConfig(int id)
		{
			return null;
		}

		public ObjBasic GetBasicConfigRaw(int id)
		{
			return null;
		}

		public ObjBasic GetBasicConfig(int id)
		{
			return null;
		}

		public ObjCoin GetCoinConfig(int id)
		{
			return null;
		}

		public ObjItemConfig GetItemConfig(int id)
		{
			return null;
		}

		public ObjRandomChest GetRandomBoxConfig(int id)
		{
			return null;
		}

		public ObjExpress GetExpressConfig(int id)
		{
			return null;
		}

		public ObjMergeItem GetMergeItemConfigRaw(int id)
		{
			return null;
		}

		public ObjMergeItem GetMergeItemConfig(int id)
		{
			return null;
		}

		public ObjToken GetTokenConfig(int id)
		{
			return null;
		}

		public ObjAvatar GetAvatarConfig(int id)
		{
			return null;
		}

		public ObjAvatarFrame GetAvatarFrameConfig(int id)
		{
			return null;
		}

		public ObjCardPack GetCardPackConfig(int id)
		{
			return null;
		}

		public ObjCard GetCardConfig(int id)
		{
			return null;
		}

		public ObjCardJoker GetCardJokerConfig(int id)
		{
			return null;
		}

		public ObjSeasonItem GetSeasonItemConfig(int id)
		{
			return null;
		}

		public ObjSpin GetSpinConfig(int id)
		{
			return null;
		}

		public bool TryGetCurrentCardRoundIdForSeasonItem(out int roundId)
		{
			roundId = default(int);
			return false;
		}

		public int TransSeasonItemToRealId(int oldId)
		{
			return 0;
		}

		public (int, int) TransRplcItemToReal(int oldId, int oldCount)
		{
			return default((int, int));
		}

		public bool IsInRplcReplacePeriod(ObjRplcItem conf)
		{
			return false;
		}

		public string GetItemDesc(int id)
		{
			return null;
		}

		public string GetItemRewardDesc(int id, int count)
		{
			return null;
		}

		public void _ClearConfig<T>(Dictionary<int, T> container, IdGetter<T> idGetter, ObjConfigType mask)
		{
		}

		public void _InitConfig<T>(Dictionary<int, T> container, IEnumerable<T> configs, IdGetter<T> idGetter, ObjConfigType mask)
		{
		}

		public T _FindConfig<T>(Dictionary<int, T> container, int id)
		{
			return default(T);
		}

		void IGameModule.Reset()
		{
		}

		void IGameModule.LoadConfig()
		{
		}

		void IGameModule.Startup()
		{
		}
	}
}
