using System;
using System.Collections.Generic;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.Model;
using MergeEngine.ECS;
using MergeEngine.ECS.Components.Board;
using Merger.Game.Data;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Zenject;

namespace Merger.Game.Model
{
	public sealed class DisplayableBoardQueueModel : ModelBase, IDisplayableBoardQueueModel, ITickable
	{
		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public IBoardQueueExclusionModel _exclusionModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[NonSerialized]
		public readonly MutableBindableProperty<int> _effectiveCount;

		[NonSerialized]
		public readonly MutableBindableProperty<AssetReferenceT<Sprite>> _effectiveHeadSprite;

		[NonSerialized]
		public BoardQueueComponent _boardQueueComponent;

		[NonSerialized]
		public bool _isDirty;

		public BindableProperty<int> EffectiveCount => null;

		public BindableProperty<AssetReferenceT<Sprite>> EffectiveHeadSprite => null;

		public override void InitializeModel()
		{
		}

		public void OnGameStarted(bool isGameStarted)
		{
		}

		public override void DisposeModel()
		{
		}

		public void OnQueueChanged(List<QueuedItem> _)
		{
		}

		public void OnExclusionsChanged(HashSet<string> _)
		{
		}

		public void Tick()
		{
		}

		public void Recalculate()
		{
		}
	}
}
