using System;
using Merger.Boosters.Data;
using Merger.Boosters.Declarations.Definitions;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Enums;
using Merger.Boosters.Declarations.Models;
using Merger.Boosters.Models;
using Merger.Game.Model;
using Zenject;

namespace Merger.Boosters.Implementations
{
	public abstract class BoosterImplementationBase<TData, TAssetData> : IBoosterImplementation<TData> where TData : BoosterDataBase where TAssetData : BoosterAssetData, new()
	{
		[Inject]
		[NonSerialized]
		public IGameSessionModel GameSessionModel;

		[Inject]
		[NonSerialized]
		public BoosterAssetModel<TData, TAssetData> AssetModel;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		public abstract BoosterType Type { get; }

		public virtual bool CanProcess()
		{
			return false;
		}

		public abstract TData CreateBoosterData(RemoteBoosterData remoteActiveBooster);

		public virtual void BoosterUpdated(TData implementation)
		{
		}

		public virtual void BoosterRemoved(TData implementation)
		{
		}

		public virtual void OnLastBoosterExpire()
		{
		}

		public bool TryGetAssetData(RemoteBoosterData boosterData, out TAssetData assetData)
		{
			assetData = null;
			return false;
		}

		public BoosterImplementationBase()
		{
		}
	}
}
