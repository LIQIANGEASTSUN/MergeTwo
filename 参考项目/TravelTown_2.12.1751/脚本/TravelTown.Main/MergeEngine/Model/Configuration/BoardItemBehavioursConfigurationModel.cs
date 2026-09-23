using System.Collections.Generic;
using Framework.Core.MVVM.Model;
using MergeEngine.Signal.Board;
using Merger.Game.Views.BoardItem;
using UnityEngine;

namespace MergeEngine.Model.Configuration
{
	public class BoardItemBehavioursConfigurationModel : ModelBase, IBoardItemBehavioursConfigurationModel
	{
		public IReadOnlyDictionary<string, BehaviourPrefabData> BehaviourDataByType { get; set; }

		public IReadOnlyDictionary<BehaviourPrefabData, InstantiationType> InstantiationTypeByData { get; set; }

		public GameObject BoardItemView2Prefab { get; set; }

		public GameObject InitializablePoolPrefab { get; set; }

		public override void InitializeModel()
		{
		}

		public override void DisposeModel()
		{
		}

		public void ConfigLoaded(BoardItemBehavioursConfig config)
		{
		}

		public void BoardItemViewPrefabLoaded(BoardItemViewPrefabLoadedSignal signal)
		{
		}

		public void SetBoardItemViewPrefabLoaded(GameObject boardItemView2Prefab)
		{
		}

		public void SetConfig(BoardItemBehavioursConfig config)
		{
		}

		public void InitializablePoolLoaded(InitializablePoolPrefabLoadedSignal signal)
		{
		}

		public void SetInitializablePoolLoaded(GameObject initializablePoolPrefab)
		{
		}

		public IReadOnlyDictionary<string, BehaviourPrefabData> CreatePrefabByBehaviourType(IEnumerable<BehaviourPrefabData> configs)
		{
			return null;
		}

		public IReadOnlyDictionary<BehaviourPrefabData, InstantiationType> CreateInstantiationTypeByPrefab(IEnumerable<BehaviourPrefabData> configs)
		{
			return null;
		}
	}
}
