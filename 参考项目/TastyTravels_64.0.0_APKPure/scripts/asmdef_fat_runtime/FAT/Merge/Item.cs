using System;
using System.Collections.Generic;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class Item
	{
		[NonSerialized]
		public int mId;

		[NonSerialized]
		public int mTId;

		[NonSerialized]
		public int mTimeScale;

		[NonSerialized]
		public bool mIsDead;

		[NonSerialized]
		public bool mIsLocked;

		[NonSerialized]
		public bool mIsFrozen;

		[NonSerialized]
		public int mStateConfType;

		[NonSerialized]
		public int mStateConfParam;

		[NonSerialized]
		public Board mParent;

		[NonSerialized]
		public Vector2Int mCoord;

		[NonSerialized]
		public MergeGrid mGrid;

		[NonSerialized]
		public ObjMergeItem mConfig;

		[NonSerialized]
		public Dictionary<ItemComponentType, ItemComponentBase> mComponents;

		[NonSerialized]
		public ItemBubbleComponent mCachedBubbleComponent;

		[NonSerialized]
		public ItemMergeComponent mCachedMergeComponent;

		[NonSerialized]
		public ItemSkillComponent mCachedSkillComponent;

		[NonSerialized]
		public ItemClickSourceComponent mCachedClickSourceComponent;

		[NonSerialized]
		public ItemAutoSourceComponent mCachedAutoSourceComponent;

		[NonSerialized]
		public ItemChestComponent mCachedChestComponent;

		[NonSerialized]
		public bool mIsIniting;

		[NonSerialized]
		public List<SpeedEffect> mEffects;

		[NonSerialized]
		public MergeWorld mWorld;

		[NonSerialized]
		public List<Action> mExecuteAfterUpdate;

		public ObjMergeItem config => null;

		public Board parent => null;

		public bool isLocked => false;

		public IMergeGrid grid => null;

		public bool isFrozen => false;

		public bool isDead => false;

		public bool isActive => false;

		public bool isMovable => false;

		public bool isDraggable => false;

		public bool isUnderCloud => false;

		public bool isReachBoardLevel => false;

		public int unLockLevel => 0;

		public int stateConfParam => 0;

		public Vector2Int coord => default(Vector2Int);

		public MergeWorld world => null;

		public int id => 0;

		public int tid => 0;

		public int timeScale => 0;

		public Item(int id, MergeWorld world)
		{
		}

		public void BeginDispose()
		{
		}

		public void EndDispose()
		{
		}

		public void SetParent(Board pa, MergeGrid grid)
		{
		}

		public void SetState(bool locked, bool frozen)
		{
		}

		public void SetStateConfParam(int type, int param)
		{
		}

		public void GetStateConfParam(out int type, out int param)
		{
			type = default(int);
			param = default(int);
		}

		public int _SerializeStateConfParam()
		{
			return 0;
		}

		public void _DeserializeStateConfParam(int val)
		{
		}

		public static int _StateToSerializedState(bool isLocked, bool isFrozen)
		{
			return 0;
		}

		public static void _SerailizedStateToState(int state, out bool isLocked, out bool isFrozen)
		{
			isLocked = default(bool);
			isFrozen = default(bool);
		}

		public void OnStart()
		{
		}

		public void Serialize(MergeItem data)
		{
		}

		public void DeserializeStateOnly(MergeItem data)
		{
		}

		public void Deserialize(MergeItem data)
		{
		}

		public void FillAllEffects<T>(List<T> container)
		{
		}

		public void SetEffectDirty()
		{
		}

		public override string ToString()
		{
			return null;
		}

		public void ProcessPostMerge(Item src, Item dst)
		{
		}

		public void ProcessPostSpawn(ItemSpawnContext cxt)
		{
		}

		public void InitWithBubbleItem(int itemConfId, ItemBubbleType type, long lifeTime = 0L, int lifeCounter = 0)
		{
		}

		public void AppendWithActivityComponent()
		{
		}

		public void AppendWithActivityTokenComponent()
		{
		}

		public void SetNoCoinUnfrozen()
		{
		}

		public void InitWithNormalItem(int id)
		{
		}

		public void InitWithDummyItem(int id)
		{
		}

		public void SetPosition(int col, int row, MergeGrid g)
		{
		}

		public bool HasComponent(ItemComponentType type, bool includeDisable = false)
		{
			return false;
		}

		public bool TryGetItemComponent<T>(out T ret, bool includeDisable = false) where T : ItemComponentBase
		{
			ret = null;
			return false;
		}

		public ItemComponentBase GetItemComponent(ItemComponentType type, bool includeDisable = false)
		{
			return null;
		}

		public ItemBubbleComponent GetBubbleComponent(bool includeDisable = false)
		{
			return null;
		}

		public ItemMergeComponent GetMergeComponent(bool includeDisable = false)
		{
			return null;
		}

		public ItemSkillComponent GetSkillComponent(bool includeDisable = false)
		{
			return null;
		}

		public ItemClickSourceComponent GetClickSourceComponent(bool includeDisable = false)
		{
			return null;
		}

		public ItemAutoSourceComponent GetAutoSourceComponent(bool includeDisable = false)
		{
			return null;
		}

		public ItemChestComponent GetChestComponent(bool includeDisable = false)
		{
			return null;
		}

		public void WalkAllComponents<T>(Action<T> walker) where T : class
		{
		}

		public T GetItemComponent<T>(bool includeDisable = false) where T : ItemComponentBase
		{
			return null;
		}

		public T RemoveItemComponent<T>() where T : ItemComponentBase
		{
			return null;
		}

		public ItemComponentBase RemoveItemComponent(ItemComponentType type)
		{
			return null;
		}

		public void UpdateInactive(int milli)
		{
		}

		public void ExecuteAfterUpdate(Action act)
		{
		}

		public void Update(int milli)
		{
		}

		public ItemComponentBase AddComponent(ItemComponentType type)
		{
			return null;
		}

		public void OnComponentChanged(ItemComponentBase com)
		{
		}

		public bool CanUnlockAround()
		{
			return false;
		}

		public void _FillNeverDestroyNormalItemComponent(ItemComConfig comConfig)
		{
		}

		public void _RefreshEffectList()
		{
		}

		public void _ClearAllComponent()
		{
		}

		public T _AddItemComponent<T>() where T : ItemComponentBase, new()
		{
			return null;
		}

		public ItemComponentBase _AddItemComponent(ItemComponentType type)
		{
			return null;
		}

		public static T _GetCachedComponentRef<T>(T component, bool includeDisable) where T : ItemComponentBase
		{
			return null;
		}

		public void _SetCachedComponentRef(ItemComponentType type, ItemComponentBase com)
		{
		}

		public void _ClearCachedComponentRefs()
		{
		}

		public string _003C_003EiFixBaseProxy_ToString()
		{
			return null;
		}
	}
}
