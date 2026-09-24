using System;
using fat.gamekitdata;

namespace FAT.Merge
{
	public class ItemComponentBase
	{
		[NonSerialized]
		public Item mItem;

		[NonSerialized]
		public bool mEnable;

		[NonSerialized]
		public bool mRuntimeEnable;

		[NonSerialized]
		public bool mIsNewItem;

		public bool enabled
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public Item item => null;

		public bool isGridNotMatch => false;

		public bool isNew => false;

		public void Attach(Item item)
		{
		}

		public void Update(int dt)
		{
		}

		public virtual int CalculateUpdateMilli(int maxMilli)
		{
			return 0;
		}

		public void UpdateInactive(int dt)
		{
		}

		public void Serialize(MergeItem itemData)
		{
		}

		public void Deserialize(MergeItem itemData)
		{
		}

		public virtual void OnSerialize(MergeItem itemData)
		{
		}

		public virtual void OnDeserialize(MergeItem itemData)
		{
		}

		public virtual void OnStart()
		{
		}

		public void TriggerPostMerge(Item src, Item dst)
		{
		}

		public void TriggerPostSpawn(ItemSpawnContext cxt)
		{
		}

		public virtual void OnPostAttach()
		{
		}

		public virtual void OnPreDetach()
		{
		}

		public virtual void OnPositionChange()
		{
		}

		public virtual void OnUpdate(int dt)
		{
		}

		public virtual void OnUpdateInactive(int dt)
		{
		}

		public virtual void OnPostMerge(Item src, Item dst)
		{
		}

		public virtual void OnPostSpawn(ItemSpawnContext sp)
		{
		}

		public virtual bool RefreshEnableStateImp(bool enableSetting)
		{
			return false;
		}

		public void RefreshEnableState()
		{
		}
	}
}
